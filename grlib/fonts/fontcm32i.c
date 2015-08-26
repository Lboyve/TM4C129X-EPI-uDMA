//*****************************************************************************
//
// fontcm32i.c - Font definition for the 32pt Cm italic font.
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
//     Style: cm
//     Size: 32 point
//     Bold: no
//     Italic: yes
//     Memory usage: 4164 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 32 point Cm italic font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cm32iData[3964] =
{
      5,  13,   0,  53,  80,  28,  11, 240, 195, 131, 131, 115,
    131, 131, 130, 146, 146, 130, 146, 146, 145, 161, 161, 145,
    161, 240, 240, 194, 131, 130,   0,  12,  16,  25,  12, 240,
    240, 130,  50,  67,  35,  67,  35,  97,  65,  81,  65,  97,
     65,  81,  65,  97,  65,  81,  65,   0,  32,  32,  86,  25,
      0,  11,  17,  81, 240,  34,  81, 240,  33,  82, 240,  18,
     81, 240,  33,  82, 240,  18,  81, 240,  33,  97, 240,  33,
     81, 240,  33,  97, 240,  33,  81, 240,  33,  97, 159,   6,
    177,  97, 240,  33,  81, 240,  33,  97, 240,  33,  81, 240,
     33,  97, 191,   6, 145,  97, 240,  33,  81, 240,  33,  97,
    240,  33,  81, 240,  33,  97, 240,  33,  81, 240,  33,  97,
    240,  18,  81, 240,  33,  97, 240,  33,  81,   0,   8,  48,
     53,  22,   0,   9, 116, 240,  34,  49, 241,  97, 210,  97,
    194,  98, 194,  83, 194, 240,  66, 240,  82, 240,  82, 240,
     40, 240,  18, 240,  82, 240,  82, 240,  82, 240,  81, 240,
     82, 240,  82, 240,  22, 129,  97,  51, 113,  97,  50,  19,
     65, 116,  85,   0,  23,  85,  25,  99, 193, 130,  18, 162,
    114,  50, 130, 129,  67,  83, 130,  65,  37,  17, 146,  65,
    113, 147,  65,  98, 146,  81,  82, 162,  65,  82, 178,  65,
     66, 194,  65,  65, 210,  49,  66, 225,  33,  66, 240,  18,
     66, 240, 114,  68, 241,  65,  65, 209,  66,  65, 194,  50,
     81, 178,  66,  81, 162,  82,  81, 146,  82,  97, 145,  98,
     81, 146,  98,  81, 130, 114,  65, 130, 130,  65, 114, 162,
     33, 129, 195,   0,  19, 112,  69,  24,   0,   7,   3, 240,
     66,  49, 114, 130,  81,  98, 114,  97, 113, 114,  82,  97,
    114,  98,  97, 114, 209, 130, 193, 145,  35,  99, 147,  49,
     66,  17, 146,  65,  49,  65, 115,  50,  33,  81,  98,  35,
     65,  81,  98, 147,  49,  98, 147,  49,  82, 240,  17,  82,
    241,  98, 241,  98, 225, 130, 193, 146, 177, 194, 114, 247,
      0,  25,  64,  15,   7, 240, 130,  67,  67,  97,  81,  97,
     81,  97,  81,   0,  19,  16,  36,  15, 177, 209, 209, 209,
    209, 210, 194, 209, 210, 209, 210, 210, 194, 210, 210, 194,
    210, 210, 210, 195, 194, 210, 210, 210, 210, 210, 210, 225,
    225, 226, 225, 226, 225, 176,  36,  15, 129, 241, 225, 226,
    225, 226, 210, 210, 210, 210, 210, 210, 210, 210, 195, 194,
    210, 210, 195, 194, 210, 194, 210, 210, 194, 209, 210, 209,
    209, 209, 210, 194, 193, 224,  31,  15, 113, 225, 225, 145,
     49,  65,  67,  33,  50,  98,  17,  18, 148, 194, 196, 146,
     17,  18,  98,  49,  35,  65,  65,  49, 145, 225, 225,   0,
     35,  45,  22,   0,  20,  81, 240,  97, 240,  97, 240,  82,
    240,  81, 240,  97, 240,  97, 240,  97, 240,  82, 240,  81,
    207,   4, 193, 240,  82, 240,  81, 240,  97, 240,  97, 240,
     82, 240,  81, 240,  97, 240,  97,   0,  18,  32,  15,   7,
      0,  19,  66,  67,  67,  97,  81,  97,  81,  97,  81, 240,
     80,   9,  11,   0,  23,  56,  56,   0,  19,  80,  10,   6,
      0,  16,  82,  51,  50,   0,   6,  64,  70,  22, 240,  49,
    240,  82, 240,  81, 240,  81, 240,  97, 240,  81, 240,  82,
    240,  81, 240,  82, 240,  81, 240,  82, 240,  81, 240,  81,
    240,  97, 240,  81, 240,  82, 240,  81, 240,  82, 240,  81,
    240,  81, 240,  97, 240,  81, 240,  82, 240,  81, 240,  82,
    240,  81, 240,  82, 240,  81, 240,  81, 240,  97, 240,  81,
    240,  82, 240,  81, 240,  96,  49,  17,   0,   7,  52, 178,
     50, 146,  82, 114,  98,  98, 114,  98, 114,  83, 114,  82,
    130,  82, 115,  67, 115,  66, 130,  82, 130,  82, 115,  67,
    114,  83, 114,  82, 115,  82, 114,  98, 114,  98,  98, 129,
     82, 146,  50, 181,   0,  18,  32,  29,  13,   0,   7,  81,
    178, 163, 148, 114,  18, 178, 178, 178, 162, 178, 178, 178,
    162, 178, 178, 178, 162, 178, 178, 163, 121,   0,  13,  64,
     51,  18,   0,   7, 101, 193,  66, 161,  97, 145, 114, 114,
     33,  66, 113,  49,  66, 113,  49,  66,  97,  65,  66,  97,
     49,  66, 113,  33,  82, 130,  82, 242, 241, 242, 241, 242,
    241, 145,  98, 129, 113, 145, 102,  66,  97,  55,  97, 100,
      0,  18, 112,  49,  18,   0,   7, 101, 178,  66, 145, 114,
    113, 130, 113, 130,  97,  49,  82,  97,  49,  82,  97,  34,
     66, 131,  82, 242, 242, 196, 240,  34, 240,  34, 240,  18,
    240,  18, 113, 130,  98, 115,  97, 130, 113, 114, 145,  67,
    181,   0,  19,  48,  43,  17,   0,   7, 114, 242, 242, 226,
    242, 242, 226, 242, 241, 242, 241, 242, 241, 242, 226,  34,
    177,  50, 162,  50, 146,  65, 146,  66, 130,  82, 118,  34,
     98,  86, 194, 242, 242, 226, 242, 242, 240, 240, 192,  48,
     18,   0,   7,  65, 113, 147,  66, 136, 166, 193, 240,  33,
    240,  18, 240,  17, 240,  33,  36, 179,  50, 146,  98, 240,
     18, 240,  18, 240,  18, 240,  18,  98, 115,  83, 114,  98,
    115,  97, 130, 113, 114, 145,  67, 181,   0,  19,  48,  47,
     16,   0,   7,   4, 178,  49, 130,  81, 129,  82, 114,  82,
     98, 226, 210, 226,  35, 131,  17,  49, 115,  82,  99,  82,
     83,  98,  83,  98,  83,  98,  82, 114,  82, 114,  82,  98,
     98,  98,  98,  82, 130,  50, 164,   0,  17,  32,  49,  18,
      0,   7,  17,  35,  81, 102,  65,  99,  49,  65,  98,  65,
     34,  98,  98,  17,  97, 145, 113, 129, 113, 145, 240,  18,
    240,  17, 240,  18, 242, 240,  18, 240,  18, 242, 240,  18,
    243, 242, 240,  18, 243, 242, 240,  18,   0,  19,  64,  47,
     17,   0,   7,  52, 194,  49, 161,  97, 129, 113, 114, 113,
    114, 113, 114,  97, 131,  81, 147,  34, 165, 228, 178,  20,
    130,  68,  98,  99,  82, 130,  82, 130,  66, 146,  66, 145,
     82, 130,  83,  98, 115,  66, 165,   0,  18,  16,  46,  17,
      0,   7,  52, 178,  50, 146,  82, 114,  98,  99,  98,  98,
    114,  98, 114,  83, 114,  82, 115,  82, 115,  82, 114,  98,
     99, 113,  84, 114,  49,  18, 148,  34, 227, 226, 226, 242,
    115,  66, 129,  66, 181,   0,  18,  48,  15,   9,   0,  12,
     99,  99,  98,   0,   9,  82,  99,  99,   0,   9,  96,  20,
     10,   0,  14,  50, 115, 114,   0,  10,  98, 115, 130, 145,
    145, 129, 145, 129, 129, 240, 224,  29,  11,   0,  13,  18,
    131, 130, 240, 240,  17, 161, 145, 161, 161, 146, 146, 146,
    130, 146, 146, 146, 131, 131, 130, 131, 131, 131, 240,  64,
     13,  24,   0,  42,  47,   4,   0,  15,  63,   5,   0,  36,
     64,  40,  14,   0,  16,  98, 179, 178, 240, 240, 146, 177,
     33, 145,  49, 145,  49, 194, 178, 178, 178, 163, 178,  67,
     66,  82,  66, 113,  65, 129,  65, 113,  81, 113,  81,  97,
    113,  50, 148, 240, 112,  40,  14, 240, 240,  67, 146,  49,
    113,  97,  82,  97,  81, 113,  65, 129,  65, 114,  66,  82,
     67,  66, 178, 178, 163, 177, 193,  49, 145,  49, 145,  33,
    178,   0,   6,  82, 179, 179,   0,  15,  32,  78,  23,   0,
      9, 102, 242,  98, 193, 161, 161,  52,  81, 129,  50,  49,
     66,  97,  50,  66,  65,  81,  50,  98,  49,  81,  34, 114,
     49,  65,  50, 114,  49,  65,  50, 114,  49,  49,  50, 114,
     65,  49,  50, 114,  49,  65,  50, 114,  49,  65,  50, 114,
     49,  65,  50,  98,  49,  81,  65,  83,  49,  81,  66,  49,
     18,  33, 113,  68,  51, 129, 240, 129, 194, 146, 115, 215,
      0,  24,  48,  58,  23,   0,   7,  81, 240,  98, 240,  83,
    240,  83, 240,  65,  18, 240,  65,  18, 240,  49,  34, 240,
     33,  50, 240,  33,  50, 240,  17,  66, 240,  17,  67, 225,
     83, 209,  99, 209,  99, 218, 193, 115, 177, 146, 177, 146,
    161, 162, 161, 162, 145, 178, 130, 178, 102, 104,   0,  23,
     48,  48,  23,   0,   9,  44, 211,  99, 178, 131, 162, 131,
    162, 131, 147, 131, 146, 146, 162, 131, 162, 115, 163,  98,
    202, 210, 130, 178, 145, 163, 146, 146, 162, 146, 162, 146,
    162, 131, 146, 146, 162, 146, 146, 162, 115, 141,   0,  24,
     32,  51,  23,   0,   9, 117,  65, 163,  81,  34, 146, 131,
    146, 162, 130, 178, 114, 194,  98, 209, 114, 209,  98, 225,
     98, 240,  98, 240,  82, 240,  98, 240,  98, 240,  98, 209,
    114, 209, 114, 193, 145, 193, 146, 161, 178, 129, 210,  82,
    246,   0,  24,  80,  49,  25,   0,  10,  28, 242, 115, 210,
    146, 194, 146, 179, 162, 162, 178, 162, 178, 162, 178, 147,
    178, 146, 194, 146, 194, 146, 179, 131, 178, 146, 194, 146,
    178, 162, 178, 147, 162, 162, 177, 178, 162, 178, 145, 195,
    114, 173,   0,  26,  64,  51,  24,   0,   9,  95,   1, 178,
    146, 178, 161, 163, 161, 163, 161, 162, 177, 162, 177, 147,
     81, 243,  81, 242,  82, 249, 227,  81, 243,  81, 242,  97,
    242,  97,  65, 147, 177, 147, 177, 146, 177, 162, 162, 147,
    161, 163, 131, 127,   2,   0,  24, 112,  49,  24,   0,   9,
     95,   1, 178, 131, 178, 146, 163, 146, 162, 161, 178, 161,
    178, 161, 163,  81, 242,  97, 242,  82, 248, 243,  81, 242,
     97, 242,  97, 242, 240,  99, 240,  99, 240,  98, 240, 114,
    240,  99, 240,  99, 240,  57,   0,  25, 112,  53,  23,   0,
      9, 117,  65, 178,  82,  18, 146, 129,  18, 130, 162, 130,
    178, 114, 194,  98, 210,  98, 209,  98, 240,  98, 240,  98,
    240,  82, 240,  98, 240,  98, 152,  66, 195,  98, 194, 114,
    194, 129, 179, 130, 163, 146, 131, 178,  82,  33, 198,  65,
      0,  24,  49,  27,   0,  10, 104,  56, 178, 146, 211, 131,
    210, 146, 226, 146, 226, 146, 211, 131, 211, 130, 226, 146,
    226, 146, 222, 211, 131, 210, 146, 226, 146, 211, 131, 211,
    131, 210, 146, 226, 146, 226, 146, 211, 131, 210, 146, 184,
     56,   0,  28,  28,  17,   0,   7,   9, 179, 226, 242, 227,
    227, 226, 242, 227, 227, 226, 242, 227, 227, 226, 242, 227,
    227, 226, 242, 227, 185,   0,  18,  48,  19,   0,   8,  24,
    227, 240,  19, 240,  18, 240,  34, 240,  34, 240,  19, 240,
     18, 240,  34, 240,  34, 240,  19, 240,  18, 240,  34, 240,
     19, 240,  19, 240,  18, 240,  34, 162,  67, 147,  66, 162,
     67, 161,  67, 197,   0,  20,  80,  64,  28,   0,  11,  24,
    102, 178, 163, 210, 161, 227, 130, 243, 113, 240,  34, 113,
    240,  50,  97, 240,  51,  81, 240,  67,  65, 240,  82,  51,
    240,  82,  33,  18, 240,  67,  17,  35, 240,  52,  66, 240,
     51,  83, 240,  34,  99, 240,  19, 114, 240,  19, 115, 242,
    131, 242, 146, 227, 147, 211, 147, 168,  87,   0,  29,  49,
     20,   0,   8,  25, 227, 240,  34, 240,  35, 240,  35, 240,
     34, 240,  50, 240,  35, 240,  35, 240,  34, 240,  50, 240,
     35, 240,  35, 240,  34, 240,  50, 145, 115, 145, 115, 145,
    114, 145, 130, 145, 115, 130, 115,  99,  95,   0,  20,  80,
     83,  32,   0,  12,  86, 213, 179, 195, 227, 177,  18, 209,
     18, 180, 209,  18, 161,  18, 225,  19, 129,  34, 225,  34,
    129,  34, 209,  50, 113,  35, 209,  50, 113,  34, 225,  50,
     97,  50, 225,  50,  81,  66, 225,  50,  81,  51, 209,  66,
     65,  66, 225,  66,  65,  66, 225,  66,  49,  82, 225,  66,
     49,  82, 209,  83,  17,  82, 225,  99,  98, 225,  99,  98,
    225,  98, 114, 210,  98,  99, 167,  65,  72,   0,  33,  66,
     28,   0,  11,  22, 119, 179, 146, 227, 145, 225,  19, 129,
    225,  34, 129, 225,  34, 129, 225,  35,  97, 225,  66,  97,
    225,  66,  97, 225,  67,  81, 225,  82,  65, 225,  98,  65,
    225,  99,  49, 225, 114,  49, 225, 114,  33, 225, 131,  17,
    225, 146,  17, 225, 146,  17, 225, 147, 225, 178, 226, 162,
    183, 130,   0,  29,  48,  49,  22,   0,   9,  69, 227,  67,
    178, 129, 162, 146, 130, 178,  98, 194,  82, 210,  82, 210,
     66, 226,  66, 226,  66, 226,  51, 210,  66, 226,  66, 211,
     66, 210,  82, 195,  82, 194, 113, 178, 130, 146, 161, 130,
    179,  67, 229,   0,  23,  80,  48,  23,   0,   9,  44, 226,
    114, 179, 130, 162, 146, 162, 146, 162, 146, 147, 146, 146,
    146, 162, 146, 162, 130, 163,  99, 186, 210, 240,  98, 240,
     83, 240,  83, 240,  82, 240,  98, 240,  83, 240,  83, 240,
     82, 240,  56,   0,  24, 112,  68,  22,   0,   9,  54, 227,
     66, 194, 114, 162, 146, 130, 177, 114, 194,  83, 194,  82,
    210,  67, 210,  66, 226,  66, 226,  51, 210,  66, 226,  66,
    226,  66, 210,  82, 210,  82, 194, 113,  82,  66, 130,  49,
     33,  34, 161,  33,  49,  18, 193,  17,  50, 246, 240,  97,
     81, 241,  81, 242,  49, 240,  22, 240,  21, 240,  51,   0,
      6,  80,  51,  23,   0,   9,  44, 226,  99, 179, 129, 178,
    146, 162, 146, 162, 146, 147, 131, 146, 146, 162, 130, 178,
     98, 201, 226,  98, 210, 114, 194, 114, 179, 114, 178, 130,
    178, 130, 178, 115, 163, 115, 162, 131,  49,  98, 131,  33,
     72, 100,   0,  23,  80,  52,  21,   0,   9,   5,  49, 162,
     81,  18, 146, 115, 130, 130, 145, 161, 130, 161, 130, 145,
    146, 240,  67, 240,  69, 240,  24, 240,  22, 240,  52, 240,
     66, 240,  66, 129, 162, 113, 178, 114, 146, 130, 145, 146,
    130, 130,  18,  66, 161,  54,   0,  22,  48,  55,  22,   0,
      8,  79,   2,  67,  83,  82,  65, 114, 113,  65, 114, 113,
     49, 115, 113,  49, 114, 113,  65, 114, 113, 194, 240,  67,
    240,  66, 240,  82, 240,  82, 240,  67, 240,  66, 240,  82,
    240,  82, 240,  67, 240,  66, 240,  82, 240,  82, 240,  67,
    250,   0,  23,  64,  51,  23,   0,   8, 104,  71,  99, 147,
    130, 177, 146, 161, 162, 161, 147, 161, 146, 177, 146, 161,
    162, 161, 147, 161, 146, 177, 146, 161, 162, 161, 147, 161,
    146, 177, 146, 161, 162, 161, 162, 145, 178, 130, 194,  98,
    226,  65, 240,  37,   0,  24, 112,  55,  23,   0,   8,  87,
    118,  83, 178, 114, 193, 131, 161, 147, 161, 147, 145, 163,
    129, 194, 129, 194, 113, 210, 113, 210,  97, 226,  81, 242,
     81, 243,  49, 240,  19,  33, 240,  35,  33, 240,  35,  17,
    240,  66,  17, 240,  67, 240,  82, 240,  98, 240,  97,   0,
     25,  32,  82,  31,   0,  11,  87,  71,  70,  82, 131, 146,
    114, 146, 145, 130, 146, 145, 130, 131, 129, 146, 131, 113,
    162, 113,  18, 113, 162, 113,  18,  97, 178,  97,  34,  97,
    178,  81,  50,  81, 194,  81,  50,  81, 195,  49,  66,  65,
    211,  49,  66,  65, 211,  33,  82,  49, 227,  33,  82,  33,
    243,  17,  99,  17, 243,  17, 100, 240,  20, 116, 240,  19,
    131, 240,  35, 131, 240,  34, 146, 240,  65, 146,   0,  33,
     62,  27,   0,  10, 104,  71, 179, 130, 227, 129, 243, 113,
    240,  35,  81, 240,  51,  65, 240,  82,  49, 240,  99,  17,
    240, 116, 240, 147, 240, 147, 240, 147, 240, 129,  18, 240,
    113,  35, 240,  81,  51, 240,  65,  83, 240,  49,  83, 240,
     33, 114, 240,  17, 131, 225, 147, 195, 148, 150, 119,   0,
     27, 112,  53,  24,   0,   9,   8, 133,  99, 178, 131, 177,
    162, 161, 179, 129, 195, 113, 226,  97, 243,  81, 243,  65,
    240,  19,  49, 240,  50,  33, 240,  68, 240,  83, 240, 114,
    240,  99, 240,  98, 240, 114, 240, 114, 240,  99, 240,  98,
    240, 114, 240,  72,   0,  25,  96,  49,  22,   0,   8, 126,
    132, 114, 146, 131, 145, 131, 145, 131, 161, 130, 177, 114,
    240,  66, 240,  67, 240,  51, 240,  51, 240,  66, 240,  66,
    240,  67, 240,  51, 113, 163, 113, 178, 129, 162, 145, 146,
    146, 131, 130, 131, 116, 142,   0,  23,  36,  15, 240, 132,
    177, 225, 209, 225, 225, 225, 209, 225, 225, 225, 209, 225,
    225, 225, 209, 225, 225, 225, 210, 209, 225, 225, 210, 209,
    225, 225, 210, 209, 225, 225, 212, 176,  25,  13, 240, 240,
    209,  65,  97,  65,  97,  65,  97,  81,  81,  81,  97,  81,
     99,  51,  67,  51,  66,  66,   0,  34,  96,  36,  14, 240,
    100, 209, 209, 193, 209, 209, 209, 193, 209, 209, 209, 193,
    209, 209, 209, 193, 209, 209, 209, 193, 209, 209, 209, 193,
    209, 209, 209, 193, 209, 209, 209, 163, 176,  15,  11, 240,
    240, 114, 131, 114,  18,  82,  49,  65,  97,   0,  34,  96,
      9,   6, 240,  66,  51,  50,   0,  20,  96,  14,   7, 240,
    145,  81,  81,  97,  81,  97,  99,  67,  66,   0,  19,  40,
     16,   0,  22,  84, 178,  33,  18, 114,  67,  98,  82,  98,
     98,  98,  98,  83,  97,  99,  82,  98,  98,  98,  98,  33,
     50,  82,  49,  50,  82,  49,  66,  34,  17,  33,  99,  66,
      0,  16,  80,  41,  13, 240, 240, 180, 177, 178, 178, 178,
    178, 162, 178, 178,  19, 115,  34,  83,  66,  66,  82,  66,
     82,  66,  82,  51,  82,  50,  83,  50,  82,  66,  82,  66,
     66,  82,  66,  98,  34, 131,   0,  14,  27,  13,   0,  18,
     68, 130,  49,  82,  66,  82,  66,  66, 178, 163, 162, 178,
    178, 178, 113,  65,  97,  82,  50, 116,   0,  13, 112,  49,
     17,   0,   7,  69, 242, 241, 242, 242, 242, 241, 242, 164,
     18, 146,  33,  18, 130,  66, 130,  82, 114,  98, 114,  98,
     99,  97, 115,  82, 114,  98, 114,  98,  33,  66,  82,  49,
     66,  67,  49,  82,  34,  17,  33, 115,  66,   0,  17,  96,
     29,  13,   0,  18,  68, 115,  34,  82,  81,  82,  81,  66,
     82,  66,  66,  71,  98, 178, 178, 178, 113,  50,  97,  82,
     50, 117,   0,  13,  96,  52,  18,   0,   8,  20, 210,  18,
    194, 240,  18, 240,  18, 242, 240,  18, 240,  18, 216, 195,
    242, 240,  18, 240,  18, 240,  18, 242, 240,  18, 240,  18,
    240,  18, 243, 242, 240,  18, 240,  18, 240,  18, 242, 240,
     18, 194,  33, 209,  34, 227,   0,   6,  32,  42,  17,   0,
     24,  36, 194,  33,  18, 130,  67, 114,  82, 114,  98, 114,
     98,  99,  98,  98,  98, 114,  98, 114,  98, 114,  82, 130,
     82, 146,  36, 163,  34, 226, 242, 242, 226, 130,  66, 165,
    240, 240, 240,  54,  18,   0,   7,  20, 240,  18, 240,  18,
    242, 240,  18, 240,  18, 240,  18, 242, 240,  18,  37, 146,
     17,  66, 131,  82, 115,  98, 114, 114, 114,  99, 114,  98,
    114, 114, 114,  98, 130,  98,  49,  66,  82,  65,  50,  98,
     49,  66,  98,  34,  66, 116,   0,  18,  80,  33,  10, 240,
    240, 242, 130,   0,   6, 115,  97,  34,  65,  50,  65,  50,
     65,  35, 114, 130, 114, 130, 115,  33,  66,  49,  66,  49,
     66,  33,  99,   0,  10,  80,  36,  15,   0,   8,  98, 210,
      0,  10,  83, 162,  34, 145,  50, 129,  66, 129,  66, 195,
    194, 210, 210, 195, 194, 210, 195, 194, 210, 210, 195, 194,
    130,  34, 148, 240, 240, 176,  47,  16,   0,   6,  52, 226,
    226, 226, 225, 226, 226, 226, 225,  83,  98,  50,  33,  98,
     33,  50,  98,  17, 178,  17, 195, 210,  19, 162,  50, 130,
     66, 130,  66, 130,  66,  33,  82,  66,  33,  66,  82,  17,
     82,  99,   0,  16,  80,  33,  10, 240, 240,  37, 115, 114,
    130, 130, 129, 130, 130, 130, 114, 130, 130, 130, 114, 130,
    130, 130, 114,  49,  66,  49,  66,  33,  82,  33,  99,   0,
     10,  96,  61,  26,   0,  36,   2,  68,  68, 113,  33,  33,
     50,  33,  50,  81,  49,  17,  66,  17,  66,  81,  35,  83,
     82,  81,  34,  98,  98, 130,  98,  98, 130,  98,  82, 130,
     98,  98, 130,  98,  98, 130,  98,  83,  33,  82,  98,  82,
     49,  66,  98,  98,  33,  82,  98,  98,  18,  82,  98, 115,
      0,  26,  80,  45,  18,   0,  25,   2,  68, 113,  33,  33,
     50,  81,  49,  17,  66,  81,  35,  82,  81,  34,  98, 130,
     98, 130,  82, 130,  98, 130,  98, 130,  83,  33,  82,  82,
     49,  66,  98,  33,  82,  98,  18,  82, 115,   0,  18,  80,
     32,  15,   0,  21,  52, 146,  50, 114,  82,  82,  98,  66,
    114,  66, 114,  51, 114,  50, 115,  50, 114,  66, 114,  66,
     98,  97,  82, 114,  50, 149,   0,  16,  49,  18,   0,  25,
     34,  67, 129,  33,  18,  34,  97,  51,  66,  81,  50,  82,
     81,  34,  98, 130,  98, 130,  98, 129,  99, 114,  98, 130,
     98, 130,  82, 146,  66, 146,  17,  34, 162,  20, 178, 242,
    240,  18, 240,  18, 240,  18, 230,   0,   6,  42,  15,   0,
     21,  36,  33, 114,  33,  18,  98,  67,  82,  82,  82,  98,
     82,  98,  67,  98,  67,  82,  82,  98,  82,  98,  82,  82,
     98,  67, 114,  36, 131,  34, 209, 210, 210, 210, 195, 167,
    240, 240,  80,  29,  15,   0,  20, 115,  36,  81,  33,  18,
     34,  49,  51,  50,  49,  35, 145,  34, 210, 210, 194, 210,
    210, 210, 194, 210, 210,   0,  16,  64,  26,  15,   0,  21,
     37, 130,  82,  97,  98,  82,  83,  82, 212, 198, 166, 211,
    210,  66, 114,  66, 113,  81,  98, 118,   0,  16,  31,  12,
      0,   8,  18, 162, 162, 162, 146, 162, 105, 114, 146, 162,
    162, 146, 162, 162, 162, 146,  65,  82,  65,  82,  49,  98,
     34, 116,   0,  12,  96,  43,  17,   0,  23,  83,  98,  82,
     18,  82,  81,  34,  82,  65,  50,  82,  65,  35,  66, 130,
     82, 130,  82, 115,  82, 114,  82, 130,  82, 130,  82,  33,
     82,  67,  33,  82,  49,  18,  17, 116,  51,   0,  17,  64,
     37,  15,   0,  20, 115,  82,  66,  18,  66,  65,  34,  66,
     49,  50,  81,  49,  35,  81,  98,  81, 114,  81,  99,  81,
     98,  97,  98,  81, 114,  81, 114,  65, 146,  34, 163,   0,
     16,  53,  21,   0,  29,  19,  98,  50,  66,  18,  82,  50,
     65,  34,  82,  50,  49,  50,  67,  65,  49,  35,  66,  81,
     98,  82,  81,  98,  82,  65,  99,  67,  65,  98,  82,  81,
     98,  82,  81,  98,  82,  65, 114,  67,  65, 130,  34,  18,
     33, 164,  51,   0,  21, 112,  37,  17,   0,  23, 115,  51,
     98,  49,  17,  49,  81,  67,  34,  65,  82, 145,  82, 226,
    242, 242, 242, 226,  81, 146,  81,  66,  35,  65,  81,  49,
     17,  50,  99,  51,   0,  17, 112,  48,  16,   0,  22,  35,
     98,  66,  18,  82,  65,  34,  82,  49,  50,  82,  49,  35,
     66, 114,  82, 114,  82,  99,  67,  98,  82, 114,  82, 114,
     82, 114,  67, 114,  51, 148,  18, 226, 210, 130,  66, 115,
     50, 130,  50, 164, 240, 240, 208,  29,  16,   0,  22,  83,
     65, 117,  33, 113,  67, 225, 225, 225, 225, 225, 225, 225,
    113,  97, 113, 100,  66,  97,  38,  97,  68,   0,  16, 112,
      8,  17,   0,  34,  14,   0,  34,  48,   9,  32,   0,  64,
     15,  14,   0,  64,  48,  19,  13, 240, 240, 194,  50,  98,
     50,  82,  50,  82,  50,  97,  65,  97,  65,   0,  39, 112,
     16,  13, 240, 240, 194,  65,  81,  17,  49,  81,  49,  17,
     81,  66,   0,  43,
};

//*****************************************************************************
//
// The font definition for the 32 point Cm italic font.
//
//*****************************************************************************
const tFont g_sFontCm32i =
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
    33,

    //
    // The baseline of the font.
    //
    25,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   33,   58,  144,  197,  282,  351,
         366,  402,  438,  469,  514,  529,  538,  548,
         618,  667,  696,  747,  796,  839,  887,  934,
         983, 1030, 1076, 1091, 1111, 1140, 1153, 1193,
        1233, 1311, 1369, 1417, 1468, 1517, 1568, 1617,
        1670, 1719, 1747, 1795, 1859, 1908, 1991, 2057,
        2106, 2154, 2222, 2273, 2325, 2380, 2431, 2486,
        2568, 2630, 2683, 2732, 2768, 2793, 2829, 2844,
        2853, 2867, 2907, 2948, 2975, 3024, 3053, 3105,
        3147, 3201, 3234, 3270, 3317, 3350, 3411, 3456,
        3488, 3537, 3579, 3608, 3634, 3665, 3708, 3745,
        3798, 3835, 3883, 3912, 3920, 3929, 3948,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cm32iData
};
