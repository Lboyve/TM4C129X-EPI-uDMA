//*****************************************************************************
//
// fontcmss22i.c - Font definition for the 22pt Cmss italic font.
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
//     Size: 22 point
//     Bold: no
//     Italic: yes
//     Memory usage: 2488 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 22 point Cmss italic font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cmss22iData[2285] =
{
      5,   9,   0,  23,  80,  19,   7, 162,  82,  81,  97,  82,
     82,  81,  97,  82,  82,  81, 240,  66,  82, 240, 240, 160,
     15,   9, 162,  34,  50,  34,  50,  34,  49,  49,  49,  49,
      0,  17,  48,  41,  17, 240, 177,  49, 177,  65, 177,  49,
    177,  65, 177,  49, 177,  65, 177,  49, 126, 113,  65, 177,
     49, 177,  65, 126,  97,  65, 177,  49, 177,  65, 177,  49,
    177,  65, 177,  65, 177,  49, 240, 208,  33,  12,  98, 149,
     82,  17,  33,  81,  33, 114,  33, 114,  18, 114,  17, 133,
    148, 148, 114,  18, 113,  34, 113,  34, 113,  18,  66,  33,
     17, 101, 145,   0,   7,  48,  16, 240,  67, 113,  50,  34,
     81,  66,  34,  65,  66,  50,  49,  82,  35,  33,  98,  34,
     49, 116,  49, 225, 225,  51, 129,  50,  18,  97,  65,  34,
     81,  66,  34,  81,  66,  34,  65,  82,  33,  65,  98,  18,
     49, 131,   0,   8,  64,  37,  16, 240, 131, 178,  34, 161,
     50, 146,  50, 146,  34, 162,  18, 180, 194, 113,  83,  98,
     66,  18,  66,  66,  34,  65,  66,  66,  33,  82,  68,  98,
     68, 118,  22,   0,  10,  32,  10,   5,  98,  50,  50,  49,
     49,   0,   9, 112,  24,  10,  98, 114, 114, 129, 130, 114,
    130, 114, 130, 130, 130, 114, 130, 130, 130, 130, 130, 130,
    145, 146, 145, 112,  24,  10,  81, 146, 145, 146, 130, 130,
    130, 130, 130, 130, 114, 130, 130, 130, 114, 130, 114, 129,
    130, 114, 114, 128,  19,  10,  65, 145,  97,  33,  33,  50,
     20,  82, 101,  66,  17,  18,  97, 145,   0,  15,  96,  21,
     16,   0,   7,   1, 241, 225, 241, 241, 241, 241, 142, 129,
    241, 241, 241, 225, 241,   0,   9,  32,  10,   5,   0,   8,
    114,  50,  49,  49, 240,  64,   8,   8,   0,  11,   6,   0,
      9,  32,   8,   4,   0,   7,   2,  34, 240, 112,  24,  14,
    177, 193, 209, 193, 209, 193, 209, 193, 209, 193, 193, 209,
    193, 209, 193, 209, 193, 209, 193, 193, 209, 208,  32,  12,
    240, 228,  98,  35,  66,  66,  65,  82,  50,  82,  50,  82,
     50,  82,  34,  82,  50,  82,  50,  82,  50,  66,  66,  66,
     67,  34, 100,   0,   8,  48,  20,   9, 240, 145,  69, 113,
    129, 114, 114, 114, 113, 129, 114, 114, 114, 113,  87,   0,
      5, 112,  22,  12, 240, 212, 113,  51,  65,  82,  65,  82,
    162, 146, 162, 146, 146, 130, 146, 146, 146, 168,   0,   8,
     24,  12, 240, 213,  98,  50,  65,  82, 162, 146, 146, 131,
    178, 178, 162, 162,  49,  82,  66,  50, 101,   0,   8,  32,
     26,  11, 240, 226, 131, 115, 114,  17,  98,  18,  98,  18,
     82,  34,  66,  49,  66,  65,  73, 114, 146, 145, 161,   0,
      7,  64,  24,  12, 240, 199,  81, 177, 162, 162, 166,  98,
     50,  81,  66, 162, 162, 161,  65,  82,  66,  50, 100,   0,
      8,  48,  28,  12, 240, 229,  98, 146, 146, 146, 162,  20,
     83,  50,  51,  66,  50,  82,  50,  82,  50,  81,  66,  66,
     67,  34, 100,   0,   8,  48,  19,  11, 240, 136, 145, 146,
    130, 130, 145, 146, 130, 146, 130, 146, 145, 146, 146,   0,
      8,  31,  11, 240, 180,  97,  50,  66,  65,  65,  66,  65,
     66,  66,  34,  99, 113,  49,  82,  50,  50,  66,  50,  66,
     50,  50,  66,  50,  84,   0,   7,  80,  29,  12, 240, 228,
     98,  49,  82,  66,  66,  66,  50,  82,  50,  82,  50,  82,
     50,  67,  51,  35,  84,  18, 146, 161, 161, 101,   0,   8,
     48,  13,   6, 240, 240, 226,  66, 240, 240,  34,  66, 240,
    240,  64,  14,   6, 240, 240, 226,  66, 240, 240,  49,  81,
     81,  65, 240, 128,  18,   7, 240, 240, 242, 193,  82,  82,
     81,  97,  82,  82,  82,  81,  97,  82,  82, 192,  11,  16,
      0,  16,  29,   0,   6,  45,   0,  16,  48,  20,   9,   0,
      7,  50, 240,  17, 129, 114, 113, 114,  98,  98, 114,  98,
    114, 114,  65,  53, 192,  20,  10, 197,  65,  66, 130, 130,
    114, 114, 114, 114, 129, 145, 130, 240, 209, 130,   0,   7,
     32,  40,  15, 240, 101, 146,  50,  98,  97,  82,  54,  65,
     50,  35,  50,  34,  50,  50,  49,  81,  50,  34,  66,  50,
     34,  66,  50,  34,  65,  66,  35,  33,  82,  52, 114, 226,
     81, 134,   0,  10,  16,  32,  14, 240, 114, 179, 177,  17,
    162,  17, 146,  33, 146,  34, 114,  50, 114,  50,  98,  66,
     98,  66,  89,  81,  98,  66, 114,  34, 130,  34, 130,   0,
      9,  33,  15, 240,  56, 114,  82,  98,  98,  82,  98,  81,
    114,  66,  98,  82,  82, 103, 130,  82,  97, 114,  66, 114,
     66, 114,  66,  98,  81,  98,  88,   0,  10,  32,  23,  14,
    240,  86,  98,  81,  82, 178, 178, 194, 193, 194, 194, 194,
    194, 194, 210, 210,  66, 117,   0,   9,  64,  34,  15, 240,
     55, 114,  83,  82,  98,  82, 114,  65, 130,  50, 130,  50,
    130,  50, 130,  50, 130,  49, 130,  50, 130,  50, 114,  66,
     98,  82,  82, 103,   0,  10,  48,  21,  14, 240,  41,  81,
    209, 194, 194, 194, 194, 185,  82, 194, 194, 194, 178, 194,
    201,   0,   9,  48,  21,  14, 240,  41,  81, 209, 194, 194,
    194, 194, 184,  98, 194, 194, 193, 194, 194, 194,   0,  10,
     32,  27,  14, 240,  86,  98,  81,  82, 178, 193, 194, 193,
    194, 194, 194,  84,  50, 114,  50, 113,  82,  97,  98,  66,
    118,   0,   9,  48,  34,  15, 240,  50, 113,  82,  98,  81,
    114,  66, 114,  66, 114,  66, 113,  82,  98,  75,  66, 114,
     66, 114,  66, 113,  81, 114,  66, 114,  66, 114,  66, 113,
      0,  10,  20,   7, 162,  82,  81,  82,  82,  82,  82,  81,
     82,  82,  82,  82,  81,  82,  82, 240, 240, 160,  22,  12,
    240,  82, 162, 162, 161, 162, 162, 162, 161, 162, 162, 162,
    162, 161,  81,  66,  85,   0,   8,  48,  36,  16, 240,  66,
     99,  82,  82, 113,  82, 114,  66, 130,  50, 146,  34, 162,
     19, 146,  20, 148,  18, 146,  66, 130,  66, 129,  98,  98,
     98,  98, 114,  82, 114,   0,  10,  80,  20,  10, 210, 130,
    129, 130, 130, 130, 130, 114, 130, 130, 130, 130, 114, 130,
    136,   0,   6,  64,  58,  19, 240, 115, 131,  83, 131,  83,
    113,  17,  82,  17, 100,  82,  17,  97,  18,  82,  17,  82,
     18,  81,  34,  65,  34,  81,  34,  50,  33,  82,  34,  49,
     34,  82,  34,  34,  34,  82,  34,  33,  50,  81,  65,  18,
     49,  82,  65,  17,  65,  82,  67,  50,  82,  66,  66,   0,
     12,  64,  44,  15, 240,  51,  97,  83,  97,  81,  17,  82,
     66,  18,  66,  66,  18,  66,  66,  18,  65,  81,  49,  65,
     66,  50,  34,  66,  50,  34,  66,  50,  34,  66,  65,  33,
     81,  84,  66,  84,  66,  84,  66,  98,   0,  10,  33,  16,
    240, 117, 146,  66, 114,  98,  82, 130,  65, 146,  50, 146,
     49, 162,  34, 162,  34, 146,  50, 146,  50, 130,  66, 130,
     82,  98,  99,  51, 149,   0,  11,  28,  14, 240,  39,  98,
     82,  82,  98,  66,  98,  66,  98,  65, 114,  50,  98,  66,
     82,  87, 114, 178, 194, 194, 194, 193,   0,  10,  48,  38,
     16, 240, 117, 146,  66, 114,  98,  82, 130,  65, 146,  50,
    146,  50, 146,  34, 162,  34, 161,  50, 146,  50, 146,  50,
     66,  34,  82,  50,  18, 114,  51, 150, 242, 226,   0,   6,
     96,  34,  15, 240,  56, 114,  82,  98,  98,  82,  98,  81,
    114,  66,  98,  82,  82, 103, 129,  66, 114,  66, 114,  81,
    114,  82,  98,  82,  97, 113,  82, 114,   0,   9, 112,  24,
     13, 240,  54,  98,  65,  81, 178, 178, 179, 180, 165, 179,
    178, 178, 178,  49,  98,  66,  66, 102,   0,   8, 112,  19,
     14, 236, 114, 193, 194, 194, 194, 194, 193, 194, 194, 194,
    194, 193, 194, 194,   0,  10,  35,  14, 240,  18, 113,  66,
    113,  66,  98,  66,  98,  50, 114,  50, 113,  66,  98,  66,
     98,  50, 114,  50, 113,  66, 113,  66,  98,  66,  97,  98,
     50, 132,   0,   9,  96,  32,  14, 225, 146,  34, 129,  50,
    114,  50, 113,  66,  98,  66,  97,  82,  82,  97,  66, 114,
     49, 130,  34, 130,  33, 146,  18, 146,  17, 179, 178,   0,
     10,  56,  21, 240,  98, 114,  98,  49,  99,  97,  65,  99,
     82,  66,  68,  81,  82,  65,  18,  66,  82,  50,  18,  65,
     98,  49,  34,  50,  98,  34,  34,  49, 114,  33,  50,  34,
    114,  18,  65,  33, 130,  17,  81,  18, 132,  81,  17, 147,
     97,  17, 147,  98, 162, 114,   0,  14,  32,  32,  16, 240,
     66, 114,  98,  82, 114,  66, 146,  34, 162,  33, 196, 195,
    210, 212, 178,  18, 162,  50, 130,  66, 129,  98,  98,  98,
     82, 130,   0,  10,  64,  27,  15, 243, 130,  50, 114,  66,
    113,  98,  82,  98,  66, 130,  34, 146,  18, 164, 194, 210,
    210, 209, 210, 210, 210,   0,  10,  80,  21,  15, 240,  58,
    195, 194, 194, 194, 195, 179, 194, 194, 194, 195, 194, 194,
    194, 203,   0,   9, 112,  23,  10, 228,  98, 129, 145, 130,
    130, 130, 129, 130, 130, 130, 129, 145, 130, 130, 129, 145,
    130, 130, 131, 112,  15,   9, 177,  49,  49,  49,  50,  34,
     50,  34,  50,  34,   0,  17,  32,  23,  10, 243, 130, 130,
    129, 145, 130, 130, 130, 129, 145, 130, 130, 129, 145, 130,
    130, 130, 129, 145, 100,  96,  11,   9, 194, 100,  66,  33,
     50,  50,   0,  18,  32,   7,   4, 130,  34,   0,   8,  96,
     10,   5, 113,  49,  50,  50,  50,   0,   9,  96,  21,  11,
      0,  10,   5,  81,  66, 146, 146,  86,  50,  50,  50,  66,
     50,  51,  53,  17,   0,   7,  48,  29,  11, 225, 146, 146,
    145, 161, 146, 146,  20,  67,  35,  49,  82,  49,  82,  34,
     82,  34,  81,  50,  66,  50,  50,  65,  20,   0,   7,  64,
     18,  11,   0,  10,  21,  66,  65,  50, 145, 146, 146, 146,
    162,  49, 101,   0,   7,  48,  29,  13, 240, 114, 177, 193,
    178, 178, 178, 100,  17,  98,  50,  82,  66,  81,  82,  66,
     82,  66,  81,  82,  81,  83,  50, 103,   0,   8,  96,  19,
     11,   0,  10,   5,  82,  50,  50,  66,  41,  34, 146, 146,
    162,  49, 100,   0,   7,  64,  20,  10, 243,  97, 129, 130,
    130, 130, 102,  97, 130, 130, 129, 145, 145, 130, 130,   0,
      7,  32,  26,  14,   0,  12, 119,  82,  50,  98,  66,  98,
     66,  98,  50, 117, 129, 231, 105,  67,  82,  66,  98,  67,
     66, 102, 240,  96,  29,  11, 226, 145, 161, 146, 146, 146,
    145,  20,  82,  50,  50,  66,  50,  66,  50,  65,  65,  66,
     65,  66,  50,  66,  50,  65,   0,   7,  48,  18,   7, 240,
     34,  82, 240, 162,  81,  97,  82,  82,  82,  81,  82,  82,
    240, 240, 160,  22,  11, 240, 226, 146, 240, 240, 178, 146,
    145, 161, 146, 146, 145, 161, 146, 146, 145, 146, 100, 240,
     48,  28,  10, 209, 130, 130, 130, 129, 145, 130,  50,  50,
     34,  66,  18,  81,  18, 100,  83,  18,  66,  49,  66,  50,
     49,  66,   0,   6,  80,  20,   7, 162,  82,  81,  97,  82,
     82,  82,  81,  82,  82,  82,  81,  97,  82,  82, 240, 240,
    160,  34,  16,   0,  14,  18,  20,  21,  51,  35,  50,  50,
     50,  66,  49,  66,  66,  34,  66,  65,  50,  65,  66,  50,
     65,  66,  49,  66,  66,  49,  66,  65,   0,  10,  64,  25,
     11,   0,   9, 113,  20,  82,  50,  50,  66,  50,  66,  50,
     65,  65,  66,  65,  66,  50,  66,  50,  65,   0,   7,  48,
     23,  12,   0,  11,   4,  98,  50,  66,  82,  49,  98,  34,
     98,  34,  98,  34,  82,  66,  50, 100,   0,   8,  32,  28,
     12,   0,  10,  98,  20,  83,  35,  66,  66,  65,  82,  50,
     82,  50,  81,  66,  66,  66,  50,  81,  20,  82, 162, 162,
    161, 240, 128,  26,  11,   0,  10,   4,  17,  66,  50,  50,
     66,  49,  82,  34,  82,  34,  81,  50,  81,  51,  50,  71,
    145, 161, 146, 146, 240,  17,   8,   0,   7,  18,  18,  52,
     66,  98,  97,  98,  98,  98,  97,   0,   5, 112,  17,  10,
      0,   9,  21,  50, 130, 131, 132, 131, 130,  49,  66,  53,
      0,   6, 112,  20,   8, 240, 240,  66,  98,  98,  70,  50,
     98,  98,  97,  98,  98,  98,  33,  52, 240, 240, 224,  25,
     11,   0,   9, 113,  66,  50,  66,  50,  66,  50,  65,  65,
     66,  50,  66,  50,  66,  50,  50,  69,  17,   0,   7,  48,
     23,  11,   0,   9,  82,  82,  34,  66,  65,  65,  81,  50,
     82,  33,  98,  18,  98,  17, 116, 130,   0,   7,  96,  35,
     15,   0,  13,  18,  66,  65,  34,  51,  50,  34,  51,  49,
     65,  36,  34,  65,  33,  18,  33,  81,  18,  33,  18,  81,
     17,  49,  17,  99,  51,  98,  66,   0,  10,  16,  22,  11,
      0,   9,  98,  81,  66,  49,  97,  33, 115, 145, 147, 113,
     34,  81,  65,  65,  82,   0,   7,  32,  26,  13,   0,  11,
     82,  82,  81,  66,  97,  65, 114,  34, 114,  33, 130,  18,
    145,  17, 162, 178, 177, 178, 177, 147, 240, 128,  16,  11,
      0,   9, 119, 130, 130, 130, 130, 130, 130, 130, 151,   0,
      7,  48,   8,  12,   0,  15,  10,   0,  15,  32,   8,  23,
      0,  28, 111,   6,   0,  29,  13,   9, 177,  34,  50,  33,
     65,  34,  50,  33,   0,  18,  64,  10,   9, 240,  67,  33,
     34,  19,   0,  19,  64,
};

//*****************************************************************************
//
// The font definition for the 22 point Cmss italic font.
//
//*****************************************************************************
const tFont g_sFontCmss22i =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    20,

    //
    // The height of the font.
    //
    21,

    //
    // The baseline of the font.
    //
    16,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   24,   39,   80,  113,  161,  198,
         208,  232,  256,  275,  296,  306,  314,  322,
         346,  378,  398,  420,  444,  470,  494,  522,
         541,  572,  601,  614,  628,  646,  657,  677,
         697,  737,  769,  802,  825,  859,  880,  901,
         928,  962,  982, 1004, 1040, 1060, 1118, 1162,
        1195, 1223, 1261, 1295, 1319, 1338, 1373, 1405,
        1461, 1493, 1520, 1541, 1564, 1579, 1602, 1613,
        1620, 1630, 1651, 1680, 1698, 1727, 1746, 1766,
        1792, 1821, 1839, 1861, 1889, 1909, 1943, 1968,
        1991, 2019, 2045, 2062, 2079, 2099, 2124, 2147,
        2182, 2204, 2230, 2246, 2254, 2262, 2275,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cmss22iData
};
