#include <MozziGuts.h>
#include <Sample.h>
#include <EventDelay.h>
#include <mozzi_rand.h>
#include <LowPassFilter.h>
#include <samples/white.h>
#include <samples/no0.h>
#include <samples/no1.h>
#include <samples/no2.h>
#include <samples/no3.h>
#include <samples/no4.h>
#include <samples/no5.h>
#include <samples/no6.h>
#include <samples/no7.h>
#include <samples/no8.h>
#include <samples/no9.h>

LowPassFilter lpf;
EventDelay kTriggerDelay;

const byte NUM_PLAYERS = 1;
const byte NUM_TABLES = 10;

// Sample Tables
const int8_t* tables[NUM_TABLES] = {
  no0_table_DATA,
  no1_table_DATA,
  no2_table_DATA,
  no3_table_DATA,
  no4_table_DATA,
  no5_table_DATA,
  no6_table_DATA,
  no7_table_DATA,
  no8_table_DATA,
  no9_table_DATA
};

// Volume Variables
int volumeWhitenoise = 255;
int volumeNumbers = 450;

// Sample Objects
Sample<white_table_NUM_CELLS, noise_rate> whitenoise(white_table_DATA);
Sample<no0_table_NUM_CELLS, numbers_rate> numbers[NUM_PLAYERS];

// Gain Array
byte gain[NUM_PLAYERS];

// Function Declarations
void setup();
void updateVolume();
void updateControl();
void updateAudio();
void readAnalogInputs();
void handlePlaybackError();

void setup() {
  startMozzi();
  lpf.setResonance(15);
  whitenoise.setFreq(static_cast<float>(white_table_SAMPLERATE) / static_cast<float>(white_table_NUM_CELLS));
  whitenoise.setLoopingOn();

  for (int i = 0; i < NUM_PLAYERS; i++) {
    numbers[i].setFreq(static_cast<float>(no0_table_SAMPLERATE) / static_cast<float>(no0_table_NUM_CELLS));
  }

  kTriggerDelay.set(2000);
  updateVolume();
}

void updateVolume() {
  int analogA3 = analogRead(A3);
  int analogA2 = analogRead(A2);

  // Validate analog input values
  if (analogA3 >= 0 && analogA3 <= 1023) {
    volumeWhitenoise = map(analogA3, 0, 1023, 0, 255);
  }

  if (analogA2 >= 0 && analogA2 <= 1023) {
    volumeNumbers = map(analogA2, 0, 1023, 0, 255);
  }
}

void updateControl() {
  int filterknob = mozziAnalogRead(A0);
  int filtknob = map(filterknob, 0, 1023, 0, 300);

  byte cutoff_freq = filtknob;
  lpf.setCutoffFreq(cutoff_freq);

  if (kTriggerDelay.ready()) {
    byte player = rand() % NUM_PLAYERS;
    gain[player] = rand(120, 255);
    numbers[player].setTable(tables[rand() % NUM_TABLES]);

    // Trigger sample playback and handle any errors
    if (!numbers[player].start()) {
      handlePlaybackError();
    }

    kTriggerDelay.start();
  }
}

void updateAudio() {
  long asig = 0;

  for (byte i = 0; i < NUM_PLAYERS; i++) {
    asig += static_cast<int>(numbers[i].next()) * gain[i];
  }

  asig >>= 9;

  int whitenoiseOutput = whitenoise.next() * volumeWhitenoise / 255;
  int numbersOutput = static_cast<int>(asig) * volumeNumbers / 64;
  int mainOutput = whitenoiseOutput + numbersOutput;

  // Perform signal clipping to prevent exceeding the maximum range
  if (mainOutput > 32767) {
    mainOutput = 32767;
  } else if (mainOutput < -32768) {
    mainOutput = -32768;
  }

  mainOutput = lpf.next(mainOutput >> 1);

  audioWrite(mainOutput);
}

void readAnalogInputs() {
  updateVolume();
}

void handlePlaybackError() {
  Serial.println("Error: Failed to start sample playback");
  // Additional error handling logic can be added if needed
}

void loop() {
  readAnalogInputs();
  updateControl();
  updateAudio();
}
