#ifndef no4_table_H_
#define no4_table_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"
 
#define no4_table_NUM_CELLS 1168
#define no4_table_SAMPLERATE 8000
 
CONSTTABLE_STORAGE(int8_t) no4_table_DATA [] = {-2, 3, 0, 0, 2, -1, 3, -3, -2,
0, -3, 0, 0, -1, 2, -3, 0, -1, -1, 2, -1, 0, -8, -2, 5, 2, -3, -1, 2, -3, 1, 2,
-3, 2, -4, -2, -1, 0, 3, -2, 0, -5, 3, 0, -4, 2, -2, -1, 3, -1, -1, 1, -2, -2,
1, 0, 0, -2, -1, 5, -6, 6, 0, -5, -3, -1, -2, 0, 6, -1, 5, -6, 1, -6, 0, 4, -4,
2, 1, 1, -6, 1, 0, 0, 2, 0, -3, -3, 0, 4, 3, -5, -3, -1, -2, 4, -11, 9, 11, -10,
-9, -6, 9, 5, 4, -4, -1, -1, -9, 7, -1, -3, 6, -5, -2, 1, -2, 0, -3, 2, -1, 0,
-2, -1, 3, 3, 9, -18, -34, 27, 34, -25, 15, -7, -18, -5, -15, 22, 18, -5, -9, 5,
-2, -16, -14, 16, 21, 13, -18, -17, -5, 11, 11, -9, -28, -7, 24, 20, 22, -16,
-19, -23, -5, 16, 0, 9, 2, -11, 0, 10, 19, -31, -20, -1, 27, 20, -5, -7, -37, 4,
4, 20, 7, 6, -13, -16, -13, 7, 28, 1, -6, -20, 7, -12, 7, 6, -8, 17, -8, -4, -5,
-12, 5, 9, 20, 2, -24, -17, 10, 4, -10, 5, 3, 21, -11, -15, -4, 8, 1, -15, 2,
14, 10, -14, 6, -7, 9, -14, -12, 13, 8, -4, -10, 9, -10, -4, 13, 12, 2, -15,
-16, -5, 1, 18, -4, 3, -4, 3, 5, -10, -7, -9, 15, 6, -2, -6, -7, 2, 10, -6, -2,
4, -2, -9, -11, 1, 22, 9, -16, -3, 1, -3, -7, 7, -2, -11, -7, 14, 17, 5, -5,
-12, -21, -5, 17, 6, 7, -3, -1, -6, -7, -2, 8, -4, -7, 9, 1, 3, -4, -5, -2, 0,
3, 0, 0, -3, -1, -2, 4, -4, 3, -5, 4, -4, 2, 4, -15, 11, -8, 13, -2, -14, 6, -2,
7, -6, -2, 6, -5, -3, -1, 10, -5, 0, -10, 2, -6, 7, 18, -17, 8, -16, 2, -5, 1,
19, -12, -3, 5, -10, -2, 16, 6, -21, -10, -1, 17, 3, -11, 16, -9, 0, -8, 12, -9,
-41, 8, 43, 16, -10, -9, -1, -8, -34, 12, 48, -37, -64, 60, 58, -21, -44, 5, 34,
4, -44, -10, 4, 20, 65, -82, -81, 49, 106, 0, -84, -14, 53, 28, -50, -39, 28,
15, 25, 17, -98, -30, 74, 86, -42, -79, 18, 56, 2, -66, -7, 43, 3, 19, -10, -97,
14, 78, 63, -62, -78, 48, 56, -22, -78, 22, 51, -9, 12, -15, -93, 26, 72, 49,
-35, -89, 39, 55, -19, -61, 22, 38, -25, 4, 24, -66, -24, 60, 39, 18, -75, -18,
50, 7, -31, -15, 27, -7, -3, 52, -40, -97, 52, 66, 36, -50, -85, 62, 39, -18,
-47, 3, 48, -23, 3, 37, -77, -46, 93, 27, -10, -44, -26, 58, 9, -40, -27, 34,
32, -56, 19, 56, -73, -51, 72, 24, -18, 12, -32, 19, 5, -37, 4, 23, 1, -35, 17,
86, -48, -112, 30, 77, -4, -14, 10, -26, 0, 9, 1, -16, 0, 2, -2, 32, 40, -59,
-97, 40, 91, -13, -42, 30, -8, -4, -6, -27, 12, 5, 6, 0, 4, 44, -16, -113, 0,
103, 21, -59, -8, 72, -23, -71, 6, 30, 14, -18, -8, 18, 14, 21, -28, -98, 12,
110, -2, -45, -23, 64, 23, -90, -15, 40, 22, -18, -17, 26, 14, -21, 0, -24, -28,
39, 37, -33, -7, 10, 59, -26, -111, 27, 76, 4, -55, -4, 42, 6, -25, 14, -32,
-32, 39, 37, -24, -9, 2, 30, 4, -80, 13, 47, 3, -43, 0, 48, 4, -37, 15, 1, -52,
12, 45, -2, -32, 15, 16, 44, -48, -90, 51, 58, -29, -38, 26, 41, -17, -32, 37,
-29, -48, 30, 36, -16, 2, 3, 36, 9, -103, 11, 54, -3, -55, 21, 59, -2, -50, 14,
41, -76, -17, 29, 32, -15, 1, 20, 33, -21, -98, 43, 38, -32, -27, 39, 43, -39,
-8, 56, -56, -68, 34, 43, 7, -47, 74, 12, -34, -27, -47, 47, -13, -30, 21, 51,
16, -42, 15, 35, -77, -61, 52, 56, -29, -36, 75, 17, -70, 9, 14, -31, -8, 7, 18,
7, -1, 2, -3, 40, -39, -77, 39, 41, -10, -43, 60, 27, -62, 7, 25, -41, -15, 36,
-10, 6, -3, 33, -38, 11, 30, -60, -17, 41, 12, -34, 13, 50, -40, -24, 50, -43,
-24, 37, 3, -26, 25, 12, -1, -44, 46, 2, -57, 8, 40, -21, -19, 40, 16, -49, 12,
38, -68, 14, 27, -15, -13, 33, -1, -15, -28, 52, -8, -60, 25, 32, -29, -7, 41,
-6, -35, 27, 9, -50, 19, 19, -20, -1, 27, -7, -15, -16, 42, -12, -46, 29, 17,
-30, 5, 31, -14, -29, 51, -31, -32, 37, -7, -13, 12, 14, -8, -18, 7, 40, -60,
-8, 44, -5, -55, 58, 12, -47, 55, -32, -27, 22, -11, 3, 8, 4, 13, -33, 38, 3,
-54, -8, 47, -22, -30, 63, -13, 12, -27, -12, 27, -42, 20, 2, 3, -3, -4, 56,
-40, -45, 22, 25, -40, 0, 42, 5, -13, -21, 22, -23, -4, 2, 4, -4, -3, 57, -31,
-57, 33, 20, -33, -14, 59, -2, -49, 36, -7, -11, -9, 15, -7, -33, 77, -11, -61,
9, 28, -16, -21, 57, -10, -35, 22, -6, -3, -16, 19, -12, -5, 49, -31, -41, 23,
32, -53, 12, 55, -39, -5, 8, 3, -16, -3, 9, -13, 47, -17, -46, 11, 32, -32, 2,
28, -8, -5, -7, 11, -10, -4, -20, 33, 19, -39, -16, 34, -2, -25, 12, 17, -7,
-13, 2, 6, -3, -21, 32, 8, -42, -4, 30, 0, -23, 10, 17, -1, -22, 0, 25, -34, 12,
37, -42, -26, 32, 15, -25, 4, 16, 6, -24, -6, 24, -29, 29, 20, -54, -18, 38, 12,
-37, 18, 26, -7, -34, 25, -13, -3, 46, -32, -41, 12, 36, -20, -15, 25, 26, -43,
1, 2, 2, 31, -17, -36, -7, 36, -3, -25, 21, 29, -37, 2, -7, 19, 22, -34, -23, 5,
20, -13, -3, 28, -3, -10, -9, -13, 46, -4, -47, -12, 32, 4, -29, 20, 17, 0, -12,
-21, 31, 14, -35, -24, 15, 24, -28, -1, 24, 5, -4, -28, 34, 25, -45, -33, 21,
21, -36, 1, 24, 28, -9, -25, 30, 0, -41, -25, 18, 21, -16, -6, 18, 16, -2, -5,
12, -13, -30, 8, -10, -6, 21, 1, 9, 6, 4, 6, -12, -22, -8, 3, -8, 1, 16, 3, 14,
-3, -2, 6, -10, -25, -8, 18, -5, -1, 13, 10, -2, -7, 2, 0, -12, -8, -3, 4, 6, 5,
3, -2, -2, -3, -3, -2, -1, 0, 0, 0, 1, -1, 0, 0, -1, -2, -1, 1, -1, 0, -1, -1,
-1, -2, 0, 2, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, };

#endif /* no4_table_H_ */
