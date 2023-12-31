#ifndef no8_table_H_
#define no8_table_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"
 
#define no8_table_NUM_CELLS 1168
#define no8_table_SAMPLERATE 8000
 
CONSTTABLE_STORAGE(int8_t) no8_table_DATA [] = {-1, 5, -1, -6, 0, -1, 5, -3, -1,
-1, -2, -1, 3, 0, 0, 0, -3, -1, 0, 2, 2, -4, -3, 2, -4, 3, 0, 0, -2, -3, 5, -2,
-5, 1, -3, 1, 2, -4, -1, 6, 1, -2, 2, -4, -3, -1, -1, -2, 2, -1, 3, 1, -3, -1,
5, -2, -11, 3, 0, 0, 3, 1, -5, 1, 2, -4, 2, -2, -3, 2, 0, 0, -2, 0, -1, 0, 4,
-1, 0, -2, -1, -1, 0, 0, 0, -2, 0, 0, -1, -2, 0, 0, -2, 1, -1, 1, -3, -1, -2,
12, -15, 6, 10, -29, 5, 10, 11, -8, 0, 0, -15, 2, 4, -7, 0, 21, -9, -23, 20, 6,
-22, 0, 20, 15, -30, -26, 19, 25, -24, -20, 47, 2, -41, 8, 17, -8, -11, 8, 28,
-12, -43, 4, 34, -8, -22, 20, 12, -16, -13, 11, 7, -10, -9, 26, 7, -48, -7, 44,
6, -40, 12, 29, -15, -24, 9, 20, -8, -23, 29, 10, -38, -12, 26, 24, -37, -7, 29,
3, -23, -3, 23, 3, -28, 2, 27, -16, -27, 13, 30, -14, -24, 13, 15, -13, -14, 19,
12, -28, -14, 28, 10, -31, -1, 26, -4, -21, 2, 18, -2, -21, 23, -2, -22, -8, 15,
33, -35, -14, 26, 12, -27, -10, 21, 11, -23, -2, 23, -15, -23, 3, 42, -6, -45,
12, 36, -16, -28, 15, 23, -16, -17, 12, 19, -24, -26, 28, 27, -25, -20, 27, 6,
-21, -11, 21, 3, -13, -15, 20, 22, -29, -27, 23, 31, -28, -20, 24, 11, -19, -13,
18, 10, -16, -8, 0, 25, -7, -29, -2, 24, 8, -22, 0, 15, -1, -13, -4, 11, 3, -9,
-8, 2, 30, -12, -36, 3, 34, 1, -28, 1, 17, 2, -15, -7, 14, 6, -13, -6, 2, 26,
-11, -36, 2, 32, 6, -26, 2, 14, -1, -14, -3, 12, 2, -11, -4, -3, 18, 16, -32,
-27, 19, 34, -16, -19, 9, 6, -2, -13, 2, 6, 3, -9, -1, -1, 15, 15, -36, -24, 21,
31, -10, -14, -4, 3, 12, -12, -12, 8, 14, -1, -11, -10, 13, 14, -21, -18, 12,
19, 4, -17, -13, 12, 18, -19, -22, 24, 24, -11, -30, -11, 33, 28, -39, -38, 15,
42, 18, -24, -35, 5, 26, -2, -15, 1, 10, -2, -3, -16, 8, 20, -9, -20, -4, 12,
22, 11, -42, -28, 25, 30, 3, -24, -14, 17, 19, -25, -24, 24, 23, -11, -27, -10,
32, 29, -37, -36, 8, 41, 17, -30, -21, 14, 18, -18, -11, 11, 13, -5, -19, -12,
29, 25, -37, -33, 16, 38, 11, -28, -25, 12, 24, -9, -17, 2, 15, 4, -21, -14, 30,
24, -33, -35, 6, 36, 21, -25, -31, 9, 30, -5, -24, 1, 22, 6, -24, -19, 34, 30,
-41, -49, 5, 62, 30, -34, -42, 7, 32, -2, -23, -8, 19, 11, -17, -13, 35, 7, -46,
-26, 18, 49, 15, -34, -26, 12, 17, -7, -18, 2, 14, 6, -17, 1, 32, -18, -49, -5,
43, 36, -9, -40, -10, 24, 9, -16, -12, 7, 10, -6, -1, 32, -7, -55, -26, 37, 50,
5, -35, -22, 15, 16, -9, -21, -1, 17, 1, 8, 15, -22, -37, -11, 35, 39, -3, -36,
-16, 20, 15, -8, -20, -4, 6, 15, 21, -15, -39, -16, 28, 39, 3, -32, -22, 13, 14,
3, -15, -12, -3, 28, 33, -25, -57, -22, 40, 56, 6, -47, -24, 13, 20, 0, -13,
-15, 20, 31, -20, -50, -16, 39, 44, 3, -38, -22, 9, 20, 16, -18, -35, 2, 30, 14,
-20, -29, 9, 37, 8, -21, -20, -7, 2, 25, 24, -20, -44, -21, 32, 49, 5, -44, -21,
17, 18, -4, -14, -13, 20, 27, -19, -42, -13, 30, 37, 6, -29, -18, 7, 7, -3, -6,
4, 27, -3, -38, -29, 12, 40, 29, -13, -36, -6, 9, 9, -2, -8, 18, 12, -24, -40,
-6, 42, 39, -4, -37, -17, 1, 10, 3, 13, 25, -9, -50, -39, 24, 57, 24, -24, -30,
-14, 10, 6, 12, 24, -13, -48, -28, 30, 49, 9, -20, -23, -3, -4, 12, 25, -8, -32,
-22, 15, 18, 15, 1, -7, -9, 0, 14, -2, -25, -22, 3, 24, 25, -2, -22, -4, 27, 14,
-29, -47, -14, 28, 40, 14, -23, -17, 19, 17, -13, -34, -21, 6, 21, 22, 5, -2, 7,
0, -22, -25, -7, 10, 11, 7, 8, 11, 5, -5, -19, -21, -5, -6, 5, 12, 17, 19, -1,
-5, -20, -14, -21, 10, 14, -13, 8, 16, 36, 14, -17, -56, -46, 7, 26, 20, 17, 20,
1, -1, 0, -19, -40, -33, -5, 26, 43, 37, 14, -16, -30, -30, -22, 3, 8, 0, 14,
23, 22, 10, -16, -27, -29, -13, -1, 16, 13, 10, 18, 3, -5, -7, -11, -23, -13, 0,
7, 11, 19, 20, 1, -11, 1, -12, -30, -32, -15, 22, 43, 45, 15, -13, -31, -37,
-25, 0, 2, 2, 17, 39, 44, 0, -33, -43, -33, -14, 17, 15, 3, 40, 36, -1, -46,
-47, -14, 27, 43, -17, -32, 8, 29, 26, -3, -47, -24, 9, 18, 18, -11, -8, 9, -2,
-1, -4, -6, -3, -2, 10, -1, -4, 8, 7, -6, -9, -3, -11, 0, 7, -5, 8, 20, 0, -13,
-9, -14, 3, -1, 4, 10, -2, 3, 4, 3, -17, -7, 7, 0, 13, -10, -12, 1, 0, 14, 7,
-5, -23, 7, 15, -12, 1, 6, -13, 10, 1, -9, 0, -5, 14, 6, -7, -16, 2, 4, -4, -2,
14, -1, -2, 2, -1, -5, -7, -1, -9, 9, 10, 14, -10, -12, 2, -11, 3, 1, -8, 6, 6,
4, -2, -2, 3, -20, -5, 16, 16, 2, -28, -10, 6, 11, 10, -2, -11, -4, -1, 3, 0,
-5, 12, -3, -25, 0, 30, -3, -12, -8, 11, 3, -10, -3, -4, 0, 13, 4, -19, -4, 18,
13, -22, -5, 5, 9, -8, -10, 4, 7, 3, -8, -5, 4, 6, 6, -8, -7, -5, 2, 11, -2, -8,
-3, 24, -15, -30, 11, 28, -3, -10, -6, 6, 3, -4, -5, -9, 3, 13, 4, -21, -5, 22,
17, -28, -7, 8, 13, -10, -20, 9, 10, 12, -23, -8, 9, 11, 17, -23, -11, -7, 5,
31, -10, -29, 8, 26, -13, -14, 9, -1, -9, 13, -3, -2, -7, 2, 2, 2, 22, -36, -13,
19, 7, 0, 0, 1, -4, -4, -4, -2, 0, 1, 1, 2, 1, 1, -3, -1, -2, 1, -1, -1, -2, -2,
0, 0, 0, 1, 2, -3, 0, 1, 0, -2, 0, 1, -1, -1, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0,
-1, -1, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0,
-1, -1, 1, 1, -1, -1, -1, 0, -1, -1, 0, 0, 0, -1, 0, -2, -1, 0, };

#endif /* no8_table_H_ */
