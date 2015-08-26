//*****************************************************************************
//
// fontcmss26b.c - Font definition for the 26pt Cmss bold font.
//
// Copyright (c) 2011-2013 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.0 of the Tiva Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Characters: 32 to 126 inclusive
//     Style: cmss
//     Size: 26 point
//     Bold: yes
//     Italic: no
//     Memory usage: 2976 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 26 point Cmss bold font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cmss26bData[2773] =
{
      5,  10,   0,  33,  96,  21,   6, 196,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36, 228,  36,  36, 240,
    240, 224,  17,  12, 240, 148,  36,  36,  36,  36,  36,  51,
     51,  35,  51,  50,  66,   0,  29,  53,  23,   0,   7,   1,
     82, 227,  51, 226,  66, 242,  66, 227,  51, 226,  66, 242,
     66, 127,   6,  47,   6, 146,  66, 227,  66, 226,  67, 226,
     66, 159,   6,  47,   6, 114,  66, 242,  66, 227,  66, 226,
     67, 226,  66, 242,  66, 227,  51, 226,  81,   0,   7,  32,
     34,  14,  66, 194, 167, 106,  75,  38,  51,  38, 134, 134,
    136, 121, 105, 120,  98,  21,  98,  36,  33,  50,  36,  34,
     34,  21,  43,  59,  87, 146, 194,   0,   9,  96,  60,  26,
     53, 162, 120, 131, 115,  36, 114, 116,  36,  98, 132,  36,
     83, 132,  36,  67, 148,  36,  66, 164,  36,  50, 195,  35,
     51, 200,  50, 229,  66, 240, 130,  70, 211,  56, 194,  52,
     36, 162,  68,  36, 146,  84,  36, 131,  84,  36, 130, 100,
     36, 114, 116,  36,  99, 136, 114, 166,   0,  20,  44,  22,
      0,   6,  36, 240,  24, 227,  36, 196,  36, 196,  36, 196,
     36, 196,  20, 230,  99, 117, 114, 132, 115, 103,  83,  99,
     36,  52,  84,  52,  20, 100,  71, 117,  54, 159,   4,  79,
      3,  86,  70,   0,  19,  80,  11,   6, 196,  36,  36,  51,
     35,  50,   0,  14,  96,  30,  10,  83,  99, 114, 115,  99,
    115, 100, 100,  99, 100, 100, 100, 100, 100, 100, 100, 100,
    100, 115, 116, 100, 115, 115, 131, 130, 131, 131,  32,  30,
     10,   3, 131, 131, 115, 131, 115, 116, 100, 115, 116, 100,
    100, 100, 100, 100, 100, 100, 100,  99, 115, 100,  99, 115,
     99, 115,  99,  99, 112,  28,  13,  67, 163, 113,  35,  99,
     19,  19,  36,  17,  20,  57, 115, 121,  52,  17,  20,  35,
     19,  19,  99,  33, 115, 163,   0,  23,  64,  43,  20,   0,
     11,   2, 240,  50, 240,  50, 240,  50, 240,  50, 240,  50,
    240,  50, 240,  50, 175,   3,  47,   3, 162, 240,  50, 240,
     50, 240,  50, 240,  50, 240,  50, 240,  50, 240,  50, 240,
     50,   0,  11,  32,  12,   6,   0,  12, 100,  36,  36,  51,
     35,  50, 240, 208,   9,  10,   0,  16,  40,  40,   0,  15,
     32,  10,   6,   0,  12, 100,  36,  36, 240, 240, 224,  30,
     13, 146, 178, 163, 162, 178, 163, 162, 163, 162, 178, 163,
    162, 178, 163, 162, 178, 163, 162, 178, 163, 162, 163, 162,
    178, 163, 162, 178, 176,  39,  14, 240, 240,  22, 120,  84,
     36,  67,  67,  52,  68,  36,  68,  36,  68,  36,  68,  36,
     68,  36,  68,  36,  68,  36,  68,  36,  68,  36,  68,  51,
     67,  68,  36,  88, 118,   0,  12, 112,  25,  13, 240, 240,
     19, 103,  88, 148, 148, 148, 148, 148, 148, 148, 148, 148,
    148, 148, 148, 148, 106,  58,   0,  11,  80,  28,  14, 240,
    240,  21, 136,  90,  51,  69,  35,  84,  49, 100, 164, 164,
    148, 163, 163, 163, 163, 162, 178, 187,  44,  44,   0,  12,
     64,  29,  14, 240, 240,  22, 105,  67,  68,  65,  84, 164,
    164, 148, 133, 150, 180, 180, 164, 164, 164,  33, 116,  35,
     68,  59,  87,   0,  12, 112,  33,  15, 240, 240, 101, 150,
    150, 135, 130,  20, 115,  20, 114,  36,  99,  36,  98,  52,
     83,  52,  82,  68,  67,  68,  77,  45, 148, 180, 180, 180,
      0,  13,  80,  28,  14, 240, 234,  74,  74,  68, 164, 164,
    168, 106,  68,  36,  67,  68, 164, 164, 164, 164,  34, 100,
     35,  68,  73, 118,   0,  12, 112,  36,  14, 240, 240,  38,
    119,  99, 163, 179, 164,  36,  68,  22,  53,  36,  52,  68,
     36,  68,  36,  68,  36,  68,  36,  68,  36,  68,  51,  68,
     52,  36,  88, 133,   0,  12, 112,  25,  15, 240, 240,  27,
     61,  59, 195, 179, 179, 180, 179, 180, 179, 180, 180, 179,
    180, 180, 180, 180, 180,   0,  14,  16,  37,  14, 240, 240,
     22, 106,  52,  68,  36,  68,  36,  68,  36,  68,  51,  67,
     88, 104,  84,  36,  52,  68,  36,  68,  36,  68,  36,  68,
     36,  68,  52,  36,  74, 102,   0,  12, 112,  34,  14, 240,
    240,  22, 120,  84,  36,  52,  67,  52,  68,  36,  68,  36,
     68,  36,  68,  36,  68,  52,  37,  59,  84,  20, 164, 163,
    164,  81,  67,  88, 118,   0,  13,  15,   6,   0,   6,   4,
     36,  36, 240, 240, 132,  36,  36, 240, 240, 224,  17,   6,
      0,   6,   4,  36,  36, 240, 240, 132,  36,  36,  51,  35,
     50, 240, 208,  21,   6, 240, 240, 196,  36,  36, 228,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36, 224,
     17,  21,   0,  23,  95,   4,  47,   4,   0,  10, 111,   4,
     47,   4,   0,  26,  64,  26,  12,   0,  10, 115, 147, 147,
    240, 240,  51, 147, 147, 147, 131, 147, 131, 131, 147, 147,
     81,  51,  67,  57,  70, 240, 208,  25,  12, 240, 182,  73,
     51,  52, 132, 132, 132, 116, 116, 132, 116, 132, 132, 132,
    240, 240,  36, 132, 132,   0,  11,  16,  41,  18, 240, 240,
    198, 155, 101,  68,  68,  40,  68,  26,  51,  20,  37,  40,
     68,  40,  68,  40,  68,  40,  68,  40,  68,  40,  68,  36,
     20,  36,  68,  25,  69,  22, 117,  99,  92, 135,   0,  16,
     64,  37,  19, 240, 240, 229, 229, 215, 199, 195,  20, 164,
     20, 163,  36, 148,  52, 132,  52, 131,  68, 116,  84, 100,
     84, 109,  95,  68, 116,  67, 132,  52, 148,  35, 164,   0,
     16, 112,  37,  18, 240, 240, 108, 110,  68, 101,  52, 116,
     52, 116,  52, 116,  52, 100,  76, 109,  84, 101,  52, 116,
     52, 132,  36, 132,  36, 132,  36, 132,  36, 116,  63,  61,
      0,  16,  48,  27,  17, 240, 240, 168, 108,  77,  54,  83,
     52, 212, 196, 212, 212, 212, 212, 212, 213, 212, 214,  98,
     77,  92, 135,   0,  15,  48,  39,  19, 240, 240, 140, 126,
     84, 101,  68, 132,  52, 132,  52, 148,  36, 148,  36, 148,
     36, 148,  36, 148,  36, 148,  36, 148,  36, 148,  36, 132,
     52, 132,  52, 101,  78,  92,   0,  17,  64,  24,  15, 240,
    253,  45,  45,  36, 180, 180, 180, 180, 188,  60,  52, 180,
    180, 180, 180, 189,  45,  45,   0,  13,  48,  24,  14, 240,
    220,  44,  44,  36, 164, 164, 164, 164, 171,  59,  52, 164,
    164, 164, 164, 164, 164, 164,   0,  13,  64,  32,  17, 240,
    240, 167, 124,  77,  54,  83,  52, 129,  68, 196, 212, 212,
    212, 212,  86,  36,  86,  37, 115,  52, 115,  54,  83,  77,
     92, 119,   0,  15,  64,  42,  18, 240, 240, 100, 132,  36,
    132,  36, 132,  36, 132,  36, 132,  36, 132,  36, 132,  36,
    132,  47,   1,  47,   1,  36, 132,  36, 132,  36, 132,  36,
    132,  36, 132,  36, 132,  36, 132,  36, 132,   0,  16,  23,
      6, 196,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36, 240, 240, 224,  25,  12,
    240, 244, 132, 132, 132, 132, 132, 132, 132, 132, 132, 132,
    132, 132, 132,  34,  68,  42,  41,  85,   0,  11,  16,  40,
     18, 240, 240, 100, 132,  36, 117,  36, 101,  52,  84,  84,
     68, 100,  52, 116,  36, 132,  20, 154, 139, 118,  20, 117,
     52, 100,  84,  84, 100,  68, 100,  68, 116,  52, 132,  36,
    147,   0,  16,  24,  14, 240, 212, 164, 164, 164, 164, 164,
    164, 164, 164, 164, 164, 164, 164, 164, 164, 172,  44,  44,
      0,  12,  64,  63,  24,   0,   6,   6, 166,  38, 166,  38,
    151,  39, 135,  39, 135,  36,  19,  99,  20,  36,  19,  99,
     20,  36,  34,  98,  36,  36,  35,  67,  36,  36,  35,  67,
     36,  36,  51,  35,  52,  36,  51,  35,  52,  36,  51,  34,
     68,  36,  70,  68,  36,  70,  68,  36,  84,  84,  36,  84,
     84,  36, 228,   0,  21,  32,  53,  19, 240, 240, 134, 116,
     38, 116,  39, 100,  39, 100,  36,  19,  84,  36,  19,  84,
     36,  35,  68,  36,  35,  68,  36,  51,  52,  36,  51,  52,
     36,  67,  36,  36,  67,  36,  36,  83,  20,  36,  83,  20,
     36, 103,  36, 103,  36, 118,  36, 118,   0,  16, 112,  39,
     19, 240, 240, 215, 171, 116,  84,  84, 116,  68, 116,  52,
    148,  36, 148,  36, 148,  36, 148,  36, 148,  36, 148,  36,
    148,  36, 148,  52, 116,  68, 116,  84,  84, 123, 167,   0,
     17,  64,  32,  17, 240, 240,  76,  93,  68, 100,  52, 116,
     36, 116,  36, 116,  36, 116,  36, 116,  36, 100,  61,  75,
    100, 212, 212, 212, 212, 212, 212,   0,  16,  64,  43,  19,
    240, 240, 215, 171, 116,  84,  84, 116,  68, 116,  52, 148,
     36, 148,  36, 148,  36, 148,  36, 148,  36, 148,  36, 148,
     36, 148,  52,  36,  20,  68,  56,  84,  54, 123, 169, 245,
    244, 245,   0,   9, 112,  39,  17, 240, 240,  76,  94,  52,
    100,  52, 116,  36, 116,  36, 116,  36, 116,  36, 100,  61,
     75, 100,  52, 100,  68,  84,  68,  84,  84,  68,  99,  68,
    100,  52, 116,  36, 116,   0,  15,  16,  29,  15, 240, 240,
     55, 122,  75,  53,  66,  68,  97,  68, 181, 184, 122, 121,
    151, 165, 180,  34, 116,  36,  69,  44,  74, 119,   0,  13,
     96,  42,  20, 240, 240, 191,   1,  63,   3,  63,   1, 164,
    240,  20, 240,  20, 240,  20, 240,  20, 240,  20, 240,  20,
    240,  20, 240,  20, 240,  20, 240,  20, 240,  20, 240,  20,
    240,  20, 240,  20,   0,  18,  80,  41,  18, 240, 240, 100,
    132,  36, 132,  36, 132,  36, 132,  36, 132,  36, 132,  36,
    132,  36, 132,  36, 132,  36, 132,  36, 132,  36, 132,  36,
    132,  36, 132,  52, 100,  69,  69,  92, 136,   0,  16,  64,
     39,  19, 240, 240, 132, 163,  36, 148,  36, 148,  52, 131,
     68, 116,  68, 116,  84,  99, 100,  84, 115,  83, 132,  67,
    132,  52, 148,  35, 164,  35, 164,  20, 183, 199, 199, 213,
      0,  17,  80,  67,  27,   0,   6,  99, 117, 115,  35, 117,
    115,  36, 101, 115,  36, 102,  99,  51,  83,  19,  83,  67,
     83,  19,  83,  68,  67,  19,  83,  68,  51,  36,  52,  83,
     51,  51,  51,  99,  51,  51,  51, 100,  35,  52,  35, 100,
     19,  83,  19, 131,  19,  83,  19, 131,  19,  83,  19, 134,
    103, 149, 117, 165, 117, 165, 117,   0,  24,  48,  37,  19,
    240, 240, 133, 116,  69,  84, 100,  69, 116,  52, 133,  20,
    168, 199, 213, 228, 245, 215, 180,  20, 148,  36, 148,  52,
    116,  84,  84, 101,  68, 116,  52, 148,   0,  16, 112,  39,
     20, 240, 240, 164, 164,  37, 133,  53, 116,  85,  84, 116,
     68, 133,  52, 149,  20, 184, 200, 214, 244, 240,  20, 240,
     20, 240,  20, 240,  20, 240,  20, 240,  20, 240,  20,   0,
     18,  80,  25,  16, 240, 240,  46,  46,  46, 180, 180, 196,
    180, 180, 180, 195, 196, 180, 180, 195, 196, 190,  46,  46,
      0,  14,  32,  29,   9,   7,  39,  36,  84,  84,  84,  84,
     84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,
     84,  84,  84,  84,  84,  87,  39, 176,  18,  12, 240, 178,
     66,  51,  51,  35,  51,  52,  36,  36,  36,  36,  36,   0,
     28,  96,  29,   9,   7,  39,  84,  84,  84,  84,  84,  84,
     84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,
     84,  84,  84,  84,  39,  54, 176,  12,  10, 240, 116, 101,
     66,  35,  34,  66,   0,  26,  64,   8,   6, 196,  36,  36,
      0,  16,  96,  11,   6, 226,  51,  35,  52,  36,  36,   0,
     14,  64,  25,  14,   0,  14,  55,  90,  67,  68, 164, 164,
     89,  52,  52,  36,  68,  36,  68,  37,  37,  59,  68,  36,
      0,  12,  64,  34,  14, 240, 212, 164, 164, 164, 164, 164,
    164,  21,  75,  52,  52,  52,  68,  36,  68,  36,  68,  36,
     68,  36,  68,  36,  68,  36,  52,  59,  52,  20,   0,  12,
    112,  21,  13,   0,  13,  70,  89,  52,  66,  36, 148, 148,
    148, 148, 148, 164,  66,  73,  87,   0,  11,  96,  35,  15,
    240, 240, 148, 180, 180, 180, 180, 180,  85,  20,  75,  52,
     68,  36,  84,  36,  84,  36,  84,  36,  84,  36,  84,  36,
     84,  52,  53,  60,  85,  20,   0,  13,  48,  24,  14,   0,
     14,  69, 121,  68,  52,  36,  83,  36,  83,  44,  36, 164,
    164, 113,  52,  67,  74, 102,   0,  12,  96,  25,  11, 240,
    166,  71,  52,  49,  52, 116, 116, 103,  71,  84, 116, 116,
    116, 116, 116, 116, 116, 116, 116,   0,  10,  48,  33,  15,
      0,  15,  39,  19,  60,  36,  51,  84,  52,  68,  52,  68,
     51, 105,  97,  22, 114, 218,  91,  76,  35, 100,  35, 115,
     36,  84,  59, 103, 240, 240,  80,  36,  13, 240, 180, 148,
    148, 148, 148, 148, 148,  21,  52,  22,  37,  36,  36,  52,
     36,  52,  36,  52,  36,  52,  36,  52,  36,  52,  36,  52,
     36,  52,  36,  52,   0,  11,  80,  21,   6, 196,  36,  36,
     36, 228,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
     36, 240, 240, 224,  27,  10, 240, 148, 100, 100, 100, 240,
    180, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
    100, 100, 100,  39,  69, 240, 144,  33,  14, 240, 212, 164,
    164, 164, 164, 164, 164,  68,  36,  52,  52,  36,  68,  20,
     88, 104, 105,  85,  19,  84,  36,  68,  52,  52,  68,  36,
     83,   0,  12,  64,  23,   6, 196,  36,  36,  36,  36,  36,
     36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,
    240, 240, 224,  43,  21,   0,  21,   4,  20,  69,  52,  22,
     23,  37,  37,  52,  36,  52,  68,  36,  52,  68,  36,  52,
     68,  36,  52,  68,  36,  52,  68,  36,  52,  68,  36,  52,
     68,  36,  52,  68,  36,  52,  68,   0,  18,  80,  31,  13,
      0,  13,   4,  21,  52,  22,  37,  36,  36,  52,  36,  52,
     36,  52,  36,  52,  36,  52,  36,  52,  36,  52,  36,  52,
     36,  52,   0,  11,  80,  27,  15,   0,  15,  55, 121,  84,
     52,  52,  84,  36,  84,  36,  84,  36,  84,  36,  84,  36,
     84,  52,  52,  89, 119,   0,  13,  96,  34,  14,   0,  14,
      4,  21,  75,  52,  52,  52,  68,  36,  68,  36,  68,  36,
     68,  36,  68,  36,  68,  36,  52,  59,  52,  20,  84, 164,
    164, 164, 164, 240, 240, 128,  33,  14,   0,  14,  52,  20,
     59,  52,  37,  36,  68,  36,  68,  36,  68,  36,  68,  36,
     68,  36,  68,  52,  37,  59,  84,  20, 164, 164, 164, 164,
    164, 240, 240,  21,  10,   0,  10,   4,  34,  36,  19,  38,
     69,  84, 100, 100, 100, 100, 100, 100, 100,   0,   9,  64,
     21,  12,   0,  12,  39,  73,  35,  67,  35, 149, 135, 103,
    148,  33,  99,  35,  67,  41,  86,   0,  11,  23,  12,   0,
      6,  36, 132, 132, 132, 105,  57,  84, 132, 132, 132, 132,
    132, 132, 132,  49,  72,  85,   0,  11,  30,  13,   0,  13,
      4,  52,  36,  52,  36,  52,  36,  52,  36,  52,  36,  52,
     36,  52,  36,  52,  36,  52,  36,  37,  58,  68,  20,   0,
     11,  80,  26,  14,   0,  14,   3,  99,  36,  83,  51,  67,
     67,  67,  68,  51,  83,  35,  99,  35, 100,  19, 118, 134,
    134, 148,   0,  13,  43,  20,   0,  20,   3,  82,  83,  35,
     68,  67,  36,  52,  52,  51,  52,  51,  67,  49,  18,  51,
     67,  34,  19,  35,  83,  18,  19,  19,  99,  18,  19,  19,
    101,  54, 101,  54, 116,  53, 131,  84,   0,  18,  16,  26,
     14,   0,  14,   4,  68,  51,  67,  83,  35, 104, 118, 148,
    164, 150, 115,  35,  84,  36,  67,  67,  51,  99,   0,  12,
     64,  32,  13,   0,  13,   3,  83,  35,  83,  51,  51,  67,
     51,  83,  35,  83,  34,  99,  19, 118, 117, 148, 148, 162,
    178, 163,  97,  50, 118, 116, 240, 240,  80,  19,  13,   0,
     13,  11,  43, 132, 147, 148, 132, 132, 132, 147, 147, 155,
     43,   0,  11,  80,   9,  16,   0,  22,  14,  46,   0,  28,
     32,  11,  31,   0,  42,  95,  14,  47,  14,   0,  54,  64,
     14,  11, 240, 131,  20,  35,  35,  51,  35,  50,  50,   0,
     29,  48,  11,  11, 240, 132,  34,  41,  34,  36,   0,  30,
     80,
};

//*****************************************************************************
//
// The font definition for the 26 point Cmss bold font.
//
//*****************************************************************************
const tFont g_sFontCmss26b =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    28,

    //
    // The height of the font.
    //
    27,

    //
    // The baseline of the font.
    //
    20,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   26,   43,   96,  130,  190,  234,
         245,  275,  305,  333,  376,  388,  397,  407,
         437,  476,  501,  529,  558,  591,  619,  655,
         680,  717,  751,  766,  783,  804,  821,  847,
         872,  913,  950,  987, 1014, 1053, 1077, 1101,
        1133, 1175, 1198, 1223, 1263, 1287, 1350, 1403,
        1442, 1474, 1517, 1556, 1585, 1627, 1668, 1707,
        1774, 1811, 1850, 1875, 1904, 1922, 1951, 1963,
        1971, 1982, 2007, 2041, 2062, 2097, 2121, 2146,
        2179, 2215, 2236, 2263, 2296, 2319, 2362, 2393,
        2420, 2454, 2487, 2508, 2529, 2552, 2582, 2608,
        2651, 2677, 2709, 2728, 2737, 2748, 2762,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cmss26bData
};
