#ifndef no9_table_H_
#define no9_table_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"
 
#define no9_table_NUM_CELLS 1168
#define no9_table_SAMPLERATE 8000
 
CONSTTABLE_STORAGE(int8_t) no9_table_DATA [] = {1, -3, 0, -2, -1, 1, -3, 0, -1,
1, 0, 0, 0, -2, 1, 0, -2, -2, 0, 0, 1, -1, 7, 10, -8, 1, 2, -4, -17, -8, 11, -3,
2, 3, 4, 5, -1, -10, 4, 15, -12, -4, 3, -8, 4, 2, -2, -12, -3, 3, 14, 4, -4, -7,
-8, 5, -12, 9, 5, -4, -10, 4, -10, 11, 12, 3, 6, -12, 5, -8, 3, -10, -6, -5, 14,
3, -11, 0, -4, -1, 5, 8, -5, 0, -3, 4, -6, 7, -2, -10, 5, -2, 5, -11, 7, 2, -3,
-5, -6, 8, -6, 3, -8, 18, -24, 4, 42, -24, -9, -10, 5, 0, 1, 2, -2, 8, 0, -8,
-7, -1, -1, -1, 5, 3, -2, -1, -2, 1, -2, 4, -3, -1, -3, 8, 2, -30, -14, 0, 23,
42, 26, -4, -26, -19, -38, -45, 2, 25, 31, 5, 2, 49, 40, -10, -62, -47, -5, 1,
0, 1, 30, 10, -5, 16, -2, -22, -54, -12, 67, 65, 8, -46, -33, -14, -5, -9, -3,
33, 3, 2, 16, -8, -26, -54, 1, 67, 52, 0, -33, -24, -14, -12, -10, 4, 22, 4, 15,
12, -12, -46, -38, 66, 49, -24, -32, 13, 21, -30, -35, 2, 28, 1, 27, -2, -68,
30, 26, -12, 22, 0, -13, 6, -11, -39, 15, 11, 5, -13, 15, 40, -70, -7, 26, -3,
51, -22, -14, 8, -15, -18, 2, 7, -1, 18, -32, 43, -9, -60, 48, -17, 26, 24, -40,
17, -14, -5, -7, 0, 6, 7, -11, -7, 42, -47, -7, 29, -26, 45, -9, -24, 20, -23,
6, -10, 2, 7, 6, -21, 13, 32, -65, 20, 18, -27, 53, -19, -17, 19, -28, 11, -12,
5, 5, 6, -18, 0, 47, -53, -8, 31, -28, 34, 15, -37, 24, -23, -4, 6, -11, 17, -8,
11, -25, 29, 10, -57, 29, 0, -10, 41, -20, -7, 8, -24, 12, -14, 7, 8, -5, 2,
-14, 35, -18, -36, 32, -9, -2, 33, -22, -6, 10, -19, 8, -9, 5, 1, 8, -6, -18,
47, -38, -19, 25, -6, 5, 11, 5, -23, 10, -7, -13, 10, -3, 4, 0, 9, -28, 28, 3,
-42, 33, -20, 19, 0, -3, 15, -28, 16, -17, -5, 16, -7, -2, 12, -5, -22, 41, -26,
-20, 32, -36, 38, -7, -16, 31, -37, 19, -13, -13, 24, -11, 3, 2, 9, -31, 24, 6,
-42, 34, -21, 14, 21, -35, 35, -20, -8, 11, -26, 21, -4, 1, 0, 13, -19, -9, 41,
-42, 2, 17, -29, 36, -7, -27, 46, -29, -7, 6, -20, 23, -8, 6, -8, 19, -20, -10,
39, -41, 2, 17, -26, 30, 3, -26, 29, -8, -18, 9, -15, 10, 6, -9, 9, -9, 22, -39,
22, 18, -48, 27, -9, -7, 31, -19, -11, 32, -22, -8, 3, -10, 13, -5, 3, 4, -6,
20, -41, 26, 13, -41, 23, -9, -1, 26, -27, 12, 10, -21, 9, -17, 8, 6, -4, -1, 6,
-8, 22, -42, 13, 34, -48, 17, -1, -8, 30, -25, 3, 20, -28, 11, -16, 4, 7, 1, -6,
9, -5, 10, -18, -14, 43, -33, -4, 12, -15, 21, -1, -22, 31, -20, -4, 1, -11, 12,
1, -5, 3, 5, -9, 14, -36, 22, 23, -39, 15, -5, -5, 26, -22, 2, 21, -27, 7, -10,
-2, 12, -3, -1, 3, 0, -1, 5, -35, 36, 9, -42, 26, -13, 0, 30, -38, 21, 10, -31,
20, -24, 9, 10, -9, 3, 8, -3, -3, 1, -35, 46, 6, -49, 32, -16, 6, 20, -34, 38,
-15, -17, 10, -26, 20, 6, -8, 1, 12, -11, 3, -20, -7, 53, -37, -15, 20, -11, 16,
-3, 1, 4, -15, 1, -8, -2, 11, -4, 1, 4, -3, 5, -15, 4, 19, -23, -5, 14, -12, 15,
-5, -16, 32, -24, -9, 14, -20, 17, 2, -11, 11, 3, -11, -18, 29, 6, -43, 16, 6,
1, 6, -14, 28, -9, -19, 5, -16, 14, 10, -17, 4, 17, -5, -36, 27, 41, -60, -22,
31, 12, -11, 11, 33, -33, -4, 1, -35, 21, 16, -15, 8, 18, -36, 2, 62, -44, -55,
25, 34, -13, -3, 47, -23, -25, 8, -17, -5, 14, 7, -5, 3, -13, 20, 20, -49, -27,
35, 21, -24, 27, 14, -37, 3, -3, -17, 7, 15, 3, -13, -11, 41, 8, -67, -21, 49,
5, -9, 39, -13, -25, 6, -8, -16, 5, 18, 5, -29, 19, 51, -52, -65, 23, 37, 11, 7,
-5, -4, -1, -5, -19, -11, 24, 6, -28, 26, 40, -48, -54, 9, 52, 21, -27, -2, 16,
-1, -21, -22, 9, 14, -10, 14, 19, -22, -34, -10, 37, 21, -15, -6, 9, 11, -21,
-24, 14, -3, -1, 31, -1, -43, -20, 38, 18, -18, -3, 10, 19, -20, -20, 9, -25,
18, 46, -26, -60, 8, 52, -5, -15, -2, 24, 14, -27, -10, -37, 14, 64, -18, -68,
-12, 60, 14, -15, -11, 20, 18, -17, -14, -45, 22, 55, -23, -62, -1, 54, 12, -17,
-14, 28, 14, -11, -36, -32, 53, 30, -48, -49, 28, 43, 3, -25, -1, 33, 11, -31,
-51, 31, 51, -27, -59, -3, 47, 25, -24, -18, 32, 30, -33, -53, 32, 39, -36, -48,
1, 40, 25, -15, -9, 29, 15, -43, -23, 38, 5, -43, -28, 19, 38, 7, -17, 14, 23,
-21, -29, 18, 10, -29, -28, -4, 39, 20, -22, 11, 30, -22, -16, 36, -3, -55, -49,
-1, 51, 26, -1, 27, 10, -27, 1, 13, -26, -52, -38, 15, 47, 23, 14, 21, -18, -16,
26, 9, -41, -68, -34, 34, 42, 36, 34, -14, -13, 22, 4, -50, -78, -33, 42, 52,
36, 25, -17, -3, 22, -12, -52, -66, -27, 38, 49, 36, 19, -10, 10, 16, -25, -58,
-61, -6, 42, 38, 35, 12, -3, 18, 0, -36, -59, -47, 8, 34, 41, 34, 4, 7, 9, -20,
-42, -50, -24, 19, 34, 35, 19, 4, 24, 16, -41, -74, -55, -2, 39, 46, 31, 16, 26,
16, -30, -67, -65, -24, 26, 48, 41, 24, 17, 16, -13, -57, -64, -30, 14, 34, 34,
27, 23, 20, -5, -36, -50, -40, -9, 18, 29, 29, 23, 21, 4, -23, -41, -32, -11, 0,
9, 22, 29, 24, 4, -14, -17, -15, -12, -16, -15, 0, 21, 27, 16, 3, -3, 1, -4,
-24, -36, -20, 13, 26, 21, 10, 8, 19, 6, -20, -42, -40, -10, 14, 24, 23, 20, 22,
11, -13, -38, -44, -18, -1, 10, 24, 30, 31, 14, -10, -31, -36, -20, -9, 2, 18,
26, 22, 14, 2, -18, -27, -20, -11, -1, 6, 19, 22, 13, 0, -13, -19, -12, -3, -6,
-4, 10, 17, 15, 1, -11, -14, -8, -3, -3, 4, 7, 7, 4, -1, -3, -5, -4, -3, -1, 0,
2, 1, 0, -2, 0, 0, -1, 1, -1, -2, -2, 0, 1, -1, -1, -1, -1, 0, 0, };

#endif /* no9_table_H_ */
