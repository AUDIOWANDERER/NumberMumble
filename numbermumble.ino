#include <MozziGuts.h>
#include <Sample.h> // Sample template
#include <EventDelay.h>
#include <mozzi_rand.h> // for rand()
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
#define CONTROL_RATE 64
#define noise_rate 22000
#define numbers_rate 58000

LowPassFilter lpf;

// for scheduling samples to play
EventDelay kTriggerDelay;

const byte NUM_PLAYERS = 1;
const byte NUM_TABLES = 10;
int volumeWhitenoise = 255;  // Variable to store the volume for whitenoise
int volumeNumbers = 450;  // Variable to store the volume for numbers

// use: Sample <table_size, update_rate> SampleName (wavetable)
Sample <white_table_NUM_CELLS, noise_rate> whitenoise(white_table_DATA);

Sample <no0_table_NUM_CELLS, numbers_rate> numbers[NUM_PLAYERS] ={
Sample <no0_table_NUM_CELLS, numbers_rate> (no0_table_DATA),
};
const int8_t * tables[NUM_TABLES] ={
  no0_table_DATA,
  no1_table_DATA,
  no2_table_DATA,
  no3_table_DATA,
  no4_table_DATA,
  no5_table_DATA,
  no6_table_DATA,
  no7_table_DATA,
  no8_table_DATA,
  no9_table_DATA,
};
byte gain[NUM_PLAYERS];

void updateVolume() {
  volumeWhitenoise = map(analogRead(A3), 0, 1023, 0, 255);
  volumeNumbers = map(analogRead(A2), 0, 1023, 0, 255);
}
void setup(){
  startMozzi();
  lpf.setResonance(15);
  whitenoise.setFreq((float) white_table_SAMPLERATE / (float) white_table_NUM_CELLS); // play at the speed it was recorded
  whitenoise.setLoopingOn();

   for (int i=0;i<NUM_PLAYERS;i++){  // play at the speed they're sampled at
    (numbers[i]).setFreq((float) no0_table_SAMPLERATE / (float) no0_table_NUM_CELLS);
  }
  kTriggerDelay.set(2000); // countdown ms, within resolution of CONTROL_RATE
  updateVolume();  
}

byte randomGain(){
  return rand((byte)120,(byte)255);
}



void updateControl(){
  int filterknob = mozziAnalogRead(A0);
  int filtknob = map(filterknob, 0, 1023, 0, 300);
  static byte player =0;
  updateVolume();
      
  byte cutoff_freq = filtknob;
  lpf.setCutoffFreq(cutoff_freq); 
  if(kTriggerDelay.ready()){
    gain[player] = randomGain();
    (numbers[player]).setTable(tables[rand(NUM_TABLES)]);
    (numbers[player]).start();
    player++;
    if(player==NUM_PLAYERS) player = 0;
    kTriggerDelay.start();
  }

 }

int updateAudio() {
  long asig = 0;
  for (byte i = 0; i < NUM_PLAYERS; i++) {
    asig += (int)(numbers[i]).next() * gain[i];
  }
  asig >>= 9;  // shift into usable range

  //clip any stray peaks to max output range
  int whitenoiseOutput = whitenoise.next() * volumeWhitenoise / 255;
  int numbersOutput = (int)asig * volumeNumbers / 64;
  int mainOutput = whitenoiseOutput + numbersOutput;
  mainOutput = lpf.next(mainOutput >> 1);
  return mainOutput;

}

void loop(){
  audioHook();
}
