// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2020 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

#include "gfx/legato/generated/le_gen_assets.h"

/*********************************
 * Legato Font Asset
 * Name:         NotoSans_Regular
 * Height:       16
 * Baseline:     15
 * Style:        Antialias
 * Glyph Count:  16
 * Range Count:  10
 * Glyph Ranges: 0x20
                 0x44
                 0x46
                 0x48
                 0x50
                 0x52
                 0x61
                 0x64-0x65
                 0x6D-0x6F
                 0x72-0x75
 *********************************/
/*********************************
 * font glyph kerning table description
 *
 * unsigned int - number of glyphs
 * for each glyph:
 *     unsigned short - codepoint         * the glyph's codepoint
 *     short          - width             * the glyph's width in pixels
 *     short          - height            * the glyph's height in pixels
 *     short          - advance           * the glyph's advance value in pixels
 *     short          - bearingX          * the glyph's bearing value in pixels on the X axis
 *     short          - bearingY          * the glyph's bearing value in pixels on the Y axis
 *     unsigned short - flags             * status flags for this glyph
 *     unsigned short - data row width    * the size of a row of glyph data in bytes
 *     unsigned int   - data table offset * the offset into the corresponding font data table
 ********************************/
const uint8_t NotoSans_Regular_glyphs[324] =
{
    0x10,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x00,0x0D,0x00,0x0E,0x00,0x0F,0x00,
    0x01,0x00,0x0E,0x00,0x00,0x00,0x0D,0x00,0x00,0x00,0x00,0x00,0x46,0x00,0x09,0x00,
    0x0E,0x00,0x0A,0x00,0x01,0x00,0x0E,0x00,0x00,0x00,0x09,0x00,0xB6,0x00,0x00,0x00,
    0x48,0x00,0x0C,0x00,0x0E,0x00,0x0F,0x00,0x01,0x00,0x0E,0x00,0x00,0x00,0x0C,0x00,
    0x34,0x01,0x00,0x00,0x50,0x00,0x0B,0x00,0x0E,0x00,0x0C,0x00,0x01,0x00,0x0E,0x00,
    0x00,0x00,0x0B,0x00,0xDC,0x01,0x00,0x00,0x52,0x00,0x0C,0x00,0x0E,0x00,0x0C,0x00,
    0x01,0x00,0x0E,0x00,0x00,0x00,0x0C,0x00,0x76,0x02,0x00,0x00,0x61,0x00,0x0A,0x00,
    0x0B,0x00,0x0B,0x00,0x00,0x00,0x0B,0x00,0x00,0x00,0x0A,0x00,0x1E,0x03,0x00,0x00,
    0x64,0x00,0x0A,0x00,0x0F,0x00,0x0C,0x00,0x01,0x00,0x0F,0x00,0x00,0x00,0x0A,0x00,
    0x8C,0x03,0x00,0x00,0x65,0x00,0x0A,0x00,0x0B,0x00,0x0B,0x00,0x01,0x00,0x0B,0x00,
    0x00,0x00,0x0A,0x00,0x22,0x04,0x00,0x00,0x6D,0x00,0x11,0x00,0x0B,0x00,0x13,0x00,
    0x01,0x00,0x0B,0x00,0x00,0x00,0x11,0x00,0x90,0x04,0x00,0x00,0x6E,0x00,0x0A,0x00,
    0x0B,0x00,0x0C,0x00,0x01,0x00,0x0B,0x00,0x00,0x00,0x0A,0x00,0x4B,0x05,0x00,0x00,
    0x6F,0x00,0x0B,0x00,0x0B,0x00,0x0C,0x00,0x01,0x00,0x0B,0x00,0x00,0x00,0x0B,0x00,
    0xB9,0x05,0x00,0x00,0x72,0x00,0x07,0x00,0x0B,0x00,0x08,0x00,0x01,0x00,0x0B,0x00,
    0x00,0x00,0x07,0x00,0x32,0x06,0x00,0x00,0x73,0x00,0x08,0x00,0x0B,0x00,0x0A,0x00,
    0x01,0x00,0x0B,0x00,0x00,0x00,0x08,0x00,0x7F,0x06,0x00,0x00,0x74,0x00,0x07,0x00,
    0x0E,0x00,0x07,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x07,0x00,0xD7,0x06,0x00,0x00,
    0x75,0x00,0x0A,0x00,0x0B,0x00,0x0C,0x00,0x01,0x00,0x0B,0x00,0x00,0x00,0x0A,0x00,
    0x39,0x07,0x00,0x00,
};

/*********************************
 * raw font glyph data
 ********************************/
const uint8_t NotoSans_Regular_data[1959] =
{
    0x10,0xFF,0xFF,0xFF,0xFF,0xFA,0xE2,0xBC,0x68,0x0C,0x00,0x00,0x00,0x10,0xFF,0xDA,
    0x74,0x74,0x7B,0x98,0xDB,0xFF,0xDE,0x37,0x00,0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,
    0x00,0x01,0x60,0xF7,0xED,0x20,0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,
    0x62,0xFF,0xAA,0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xE1,0xF8,
    0x11,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xA5,0xFF,0x3B,0x10,0xFF,
    0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8B,0xFF,0x55,0x10,0xFF,0xBC,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x8F,0xFF,0x53,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xAC,0xFF,0x3B,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xEB,
    0xF8,0x08,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x79,0xFF,0x9D,0x00,0x10,
    0xFF,0xBC,0x00,0x00,0x00,0x00,0x06,0x76,0xFC,0xE5,0x1A,0x00,0x10,0xFF,0xDA,0x74,
    0x74,0x81,0xA4,0xE8,0xFF,0xD4,0x29,0x00,0x00,0x10,0xFF,0xFF,0xFF,0xFF,0xF6,0xE1,
    0xAE,0x5A,0x05,0x00,0x00,0x00,0x10,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEC,0x10,
    0xFF,0xDA,0x74,0x74,0x74,0x74,0x74,0x6A,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,
    0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,
    0x00,0x00,0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0xFF,0xC5,0x24,
    0x24,0x24,0x24,0x24,0x13,0x10,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8C,0x10,0xFF,
    0xD1,0x50,0x50,0x50,0x50,0x50,0x2B,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,
    0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,
    0x00,0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0xFF,0xBC,0x00,0x00,
    0x00,0x00,0x00,0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xDC,
    0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xDC,0x10,0xFF,0xBC,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xDC,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xF0,0xDC,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xDC,
    0x10,0xFF,0xC5,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0xF2,0xDC,0x10,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDC,0x10,0xFF,0xD1,0x50,0x50,0x50,0x50,0x50,
    0x50,0x50,0xF5,0xDC,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xDC,
    0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xDC,0x10,0xFF,0xBC,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xDC,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xF0,0xDC,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xDC,
    0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xDC,0x10,0xFF,0xFF,0xFF,
    0xFF,0xF5,0xD9,0x9B,0x28,0x00,0x00,0x10,0xFF,0xDA,0x74,0x76,0x8D,0xC2,0xFF,0xF7,
    0x3D,0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x5C,0xFF,0xCD,0x00,0x10,0xFF,0xBC,
    0x00,0x00,0x00,0x00,0x00,0xE5,0xFF,0x08,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,
    0xDD,0xFD,0x06,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x31,0xFE,0xC8,0x00,0x10,0xFF,
    0xC5,0x24,0x27,0x3B,0x75,0xE9,0xFB,0x3F,0x00,0x10,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,
    0xC6,0x3A,0x00,0x00,0x10,0xFF,0xD1,0x50,0x4C,0x39,0x17,0x00,0x00,0x00,0x00,0x10,
    0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0xFF,0xBC,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x10,0xFF,0xFF,0xFF,0xFF,0xF7,0xDD,0xA2,0x30,0x00,
    0x00,0x00,0x10,0xFF,0xDA,0x74,0x74,0x87,0xB4,0xFD,0xFA,0x44,0x00,0x00,0x10,0xFF,
    0xBC,0x00,0x00,0x00,0x00,0x4A,0xFF,0xD0,0x00,0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,
    0x00,0x00,0xE2,0xFF,0x07,0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0xDA,0xFF,
    0x08,0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x29,0xFC,0xD0,0x00,0x00,0x10,0xFF,
    0xC5,0x24,0x24,0x36,0x66,0xE1,0xF8,0x41,0x00,0x00,0x10,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xBB,0x30,0x00,0x00,0x00,0x10,0xFF,0xD1,0x50,0x50,0x75,0xFF,0xA2,0x00,0x00,
    0x00,0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,0xB3,0xFF,0x46,0x00,0x00,0x00,0x10,0xFF,
    0xBC,0x00,0x00,0x00,0x20,0xF6,0xDE,0x0A,0x00,0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,
    0x00,0x7B,0xFF,0x8B,0x00,0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x06,0xD8,0xFC,
    0x32,0x00,0x10,0xFF,0xBC,0x00,0x00,0x00,0x00,0x00,0x43,0xFF,0xCE,0x03,0x00,0x00,
    0x37,0x9C,0xDF,0xFA,0xF2,0xBE,0x3D,0x00,0x00,0x00,0xB2,0xF1,0x9F,0x7B,0xA0,0xFB,
    0xF6,0x23,0x00,0x00,0x23,0x0E,0x00,0x00,0x00,0x77,0xFF,0x78,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x33,0xFF,0x94,0x00,0x00,0x00,0x00,0x0A,0x1D,0x23,0x3F,0xFF,0x98,
    0x00,0x04,0x78,0xD8,0xFE,0xFF,0xFF,0xFF,0xFF,0x98,0x00,0x9D,0xFF,0xCF,0x76,0x58,
    0x50,0x68,0xFF,0x98,0x07,0xFB,0xE4,0x09,0x00,0x00,0x00,0x3A,0xFF,0x98,0x04,0xF9,
    0xD6,0x01,0x00,0x00,0x01,0xA7,0xFF,0x98,0x00,0xAF,0xFF,0xBB,0x7C,0x8C,0xD7,0xB5,
    0xF6,0x98,0x00,0x11,0x97,0xE5,0xF9,0xDE,0x81,0x06,0xC9,0x98,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x28,0xFF,0x98,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0xFF,0x98,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0xFF,0x98,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x28,0xFF,0x98,0x00,0x08,0x83,0xDE,0xF9,0xE0,0x7F,0x29,0xFF,0x98,0x02,0xB9,
    0xFF,0xC8,0x7C,0x88,0xDA,0xC1,0xFF,0x98,0x59,0xFF,0xB8,0x02,0x00,0x00,0x08,0xD5,
    0xFF,0x98,0xAE,0xFF,0x40,0x00,0x00,0x00,0x00,0x6D,0xFF,0x98,0xD8,0xFF,0x08,0x00,
    0x00,0x00,0x00,0x3E,0xFF,0x98,0xE4,0xF2,0x00,0x00,0x00,0x00,0x00,0x28,0xFF,0x98,
    0xD8,0xFE,0x06,0x00,0x00,0x00,0x00,0x35,0xFF,0x98,0xB0,0xFF,0x36,0x00,0x00,0x00,
    0x00,0x5C,0xFF,0x98,0x5E,0xFF,0xAD,0x00,0x00,0x00,0x04,0xC8,0xFF,0x98,0x03,0xBF,
    0xFF,0xC3,0x7B,0x84,0xD2,0xBE,0xFF,0x98,0x00,0x0A,0x87,0xE1,0xFA,0xE1,0x85,0x07,
    0xE5,0x98,0x00,0x00,0x5E,0xCA,0xF3,0xED,0xB7,0x3D,0x00,0x00,0x00,0x8C,0xFF,0xBD,
    0x80,0x8D,0xE5,0xFD,0x50,0x00,0x3A,0xFF,0x86,0x00,0x00,0x00,0x14,0xEB,0xE3,0x02,
    0x9B,0xFF,0x35,0x24,0x24,0x24,0x24,0xB3,0xFF,0x2B,0xCF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0x42,0xE2,0xFA,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x15,0xD1,0xFF,
    0x14,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xA1,0xFF,0x5A,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x3D,0xFF,0xDB,0x13,0x00,0x00,0x00,0x00,0x1D,0x00,0x00,0x84,0xFF,0xE8,
    0x90,0x7B,0x97,0xCF,0xC8,0x00,0x00,0x00,0x4F,0xBA,0xEB,0xFC,0xED,0xBB,0x5A,0x00,
    0x4C,0xFF,0x32,0x59,0xCE,0xF8,0xE8,0x9B,0x10,0x09,0x83,0xDE,0xF7,0xD7,0x78,0x04,
    0x00,0x4C,0xFF,0xB6,0xEA,0x8F,0x7F,0xC7,0xFF,0xBB,0xB9,0xDF,0x91,0x84,0xD9,0xFF,
    0x87,0x00,0x4C,0xFF,0xFA,0x23,0x00,0x00,0x02,0xD2,0xFF,0xDC,0x10,0x00,0x00,0x10,
    0xEF,0xE9,0x00,0x4C,0xFF,0xB2,0x00,0x00,0x00,0x00,0x8D,0xFF,0x77,0x00,0x00,0x00,
    0x00,0xB8,0xFF,0x0C,0x4C,0xFF,0x88,0x00,0x00,0x00,0x00,0x7C,0xFF,0x51,0x00,0x00,
    0x00,0x00,0xA8,0xFF,0x14,0x4C,0xFF,0x75,0x00,0x00,0x00,0x00,0x7C,0xFF,0x44,0x00,
    0x00,0x00,0x00,0xA8,0xFF,0x14,0x4C,0xFF,0x74,0x00,0x00,0x00,0x00,0x7C,0xFF,0x44,
    0x00,0x00,0x00,0x00,0xA8,0xFF,0x14,0x4C,0xFF,0x74,0x00,0x00,0x00,0x00,0x7C,0xFF,
    0x44,0x00,0x00,0x00,0x00,0xA8,0xFF,0x14,0x4C,0xFF,0x74,0x00,0x00,0x00,0x00,0x7C,
    0xFF,0x44,0x00,0x00,0x00,0x00,0xA8,0xFF,0x14,0x4C,0xFF,0x74,0x00,0x00,0x00,0x00,
    0x7C,0xFF,0x44,0x00,0x00,0x00,0x00,0xA8,0xFF,0x14,0x4C,0xFF,0x74,0x00,0x00,0x00,
    0x00,0x7C,0xFF,0x44,0x00,0x00,0x00,0x00,0xA8,0xFF,0x14,0x4C,0xFF,0x32,0x4F,0xC4,
    0xF5,0xE8,0xB8,0x33,0x00,0x4C,0xFF,0xB4,0xF2,0x99,0x7B,0xA0,0xFB,0xF8,0x2B,0x4C,
    0xFF,0xFD,0x2E,0x00,0x00,0x00,0x64,0xFF,0x8E,0x4C,0xFF,0xB7,0x00,0x00,0x00,0x00,
    0x14,0xFF,0xB4,0x4C,0xFF,0x8A,0x00,0x00,0x00,0x00,0x00,0xFF,0xBC,0x4C,0xFF,0x75,
    0x00,0x00,0x00,0x00,0x00,0xFF,0xBC,0x4C,0xFF,0x74,0x00,0x00,0x00,0x00,0x00,0xFF,
    0xBC,0x4C,0xFF,0x74,0x00,0x00,0x00,0x00,0x00,0xFF,0xBC,0x4C,0xFF,0x74,0x00,0x00,
    0x00,0x00,0x00,0xFF,0xBC,0x4C,0xFF,0x74,0x00,0x00,0x00,0x00,0x00,0xFF,0xBC,0x4C,
    0xFF,0x74,0x00,0x00,0x00,0x00,0x00,0xFF,0xBC,0x00,0x00,0x5F,0xC7,0xF3,0xF2,0xC9,
    0x63,0x00,0x00,0x00,0x00,0x98,0xFF,0xD0,0x83,0x7F,0xC7,0xFF,0xA3,0x00,0x00,0x48,
    0xFF,0xBA,0x03,0x00,0x00,0x00,0xA4,0xFF,0x58,0x00,0xA7,0xFF,0x3D,0x00,0x00,0x00,
    0x00,0x22,0xFE,0xBB,0x00,0xD6,0xFF,0x07,0x00,0x00,0x00,0x00,0x00,0xE9,0xEB,0x00,
    0xE2,0xF3,0x00,0x00,0x00,0x00,0x00,0x00,0xD3,0xFD,0x00,0xCE,0xFF,0x09,0x00,0x00,
    0x00,0x00,0x00,0xEA,0xF0,0x00,0x9B,0xFF,0x43,0x00,0x00,0x00,0x00,0x26,0xFF,0xBE,
    0x00,0x38,0xFE,0xBE,0x04,0x00,0x00,0x00,0xA6,0xFF,0x5C,0x00,0x00,0x81,0xFF,0xD2,
    0x82,0x7E,0xC6,0xFF,0xA8,0x00,0x00,0x00,0x00,0x52,0xC1,0xF1,0xF6,0xCC,0x69,0x02,
    0x00,0x00,0x4C,0xFF,0x30,0x33,0xBF,0xF5,0xD6,0x4C,0xFF,0x7D,0xF5,0xB5,0x7C,0x6C,
    0x4C,0xFF,0xFF,0x6A,0x00,0x00,0x00,0x4C,0xFF,0xC6,0x00,0x00,0x00,0x00,0x4C,0xFF,
    0x84,0x00,0x00,0x00,0x00,0x4C,0xFF,0x74,0x00,0x00,0x00,0x00,0x4C,0xFF,0x74,0x00,
    0x00,0x00,0x00,0x4C,0xFF,0x74,0x00,0x00,0x00,0x00,0x4C,0xFF,0x74,0x00,0x00,0x00,
    0x00,0x4C,0xFF,0x74,0x00,0x00,0x00,0x00,0x4C,0xFF,0x74,0x00,0x00,0x00,0x00,0x04,
    0x6B,0xCC,0xEF,0xF2,0xD5,0x94,0x23,0x99,0xFF,0xBA,0x7E,0x88,0xB2,0xF5,0x23,0xF1,
    0xCC,0x00,0x00,0x00,0x00,0x08,0x00,0xDE,0xEF,0x25,0x00,0x00,0x00,0x00,0x00,0x52,
    0xF7,0xF9,0xA0,0x3A,0x00,0x00,0x00,0x00,0x23,0x98,0xF3,0xFF,0xD1,0x47,0x00,0x00,
    0x00,0x00,0x0D,0x6E,0xEB,0xFD,0x45,0x00,0x00,0x00,0x00,0x00,0x31,0xFF,0xA2,0x17,
    0x00,0x00,0x00,0x00,0x2F,0xFF,0x9B,0xF0,0xBF,0x94,0x7A,0x93,0xEA,0xFA,0x37,0x76,
    0xCF,0xF4,0xFA,0xE1,0xA7,0x32,0x00,0x00,0x00,0x41,0x4C,0x00,0x00,0x00,0x00,0x00,
    0xBD,0x98,0x00,0x00,0x00,0x00,0x14,0xFA,0x98,0x00,0x00,0x00,0x68,0xEF,0xFF,0xFF,
    0xFF,0xFF,0xB4,0x4F,0x89,0xFF,0xC7,0x74,0x74,0x51,0x00,0x28,0xFF,0x98,0x00,0x00,
    0x00,0x00,0x28,0xFF,0x98,0x00,0x00,0x00,0x00,0x28,0xFF,0x98,0x00,0x00,0x00,0x00,
    0x28,0xFF,0x98,0x00,0x00,0x00,0x00,0x28,0xFF,0x98,0x00,0x00,0x00,0x00,0x26,0xFF,
    0x9A,0x00,0x00,0x00,0x00,0x13,0xFF,0xC5,0x00,0x00,0x00,0x00,0x00,0xC7,0xFF,0xAD,
    0x7A,0x74,0x00,0x00,0x1F,0xB5,0xF4,0xF5,0xA0,0x6C,0xFF,0x5C,0x00,0x00,0x00,0x00,
    0x18,0xFF,0xA8,0x6C,0xFF,0x5C,0x00,0x00,0x00,0x00,0x18,0xFF,0xA8,0x6C,0xFF,0x5C,
    0x00,0x00,0x00,0x00,0x18,0xFF,0xA8,0x6C,0xFF,0x5C,0x00,0x00,0x00,0x00,0x18,0xFF,
    0xA8,0x6C,0xFF,0x5C,0x00,0x00,0x00,0x00,0x18,0xFF,0xA8,0x6C,0xFF,0x5C,0x00,0x00,
    0x00,0x00,0x1A,0xFF,0xA8,0x6C,0xFF,0x5C,0x00,0x00,0x00,0x00,0x30,0xFF,0xA8,0x65,
    0xFF,0x6D,0x00,0x00,0x00,0x00,0x5E,0xFF,0xA8,0x40,0xFF,0xBB,0x00,0x00,0x00,0x06,
    0xCD,0xFF,0xA8,0x03,0xD4,0xFF,0xC2,0x7E,0x87,0xD7,0xC5,0xFD,0xA8,0x00,0x15,0x97,
    0xDD,0xF8,0xDF,0x8B,0x0D,0xDD,0xA8,
};

leRasterFont NotoSans_Regular =
{
    {
        {
            LE_STREAM_LOCATION_ID_INTERNAL, // data location id
            (void*)NotoSans_Regular_data, // data address pointer
            1959, // data size
        },
        LE_RASTER_FONT,
    },
    16,
    15,
    LE_FONT_BPP_8, // bits per pixel
    NotoSans_Regular_glyphs, // glyph table
};
