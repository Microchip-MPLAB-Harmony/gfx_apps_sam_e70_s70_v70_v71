#include "gfx/legato/generated/le_gen_assets.h"

uint16_t leGlobalPalette_data[256] =
{
    0x0000,0x0841,0x1082,0x18C3,0x2104,0x2945,0x3186,0x39C7,0x4208,0x4A49,0x52AA,0x5ACB,0x630C,0x6B4D,0x03D0,0x738E,
    0x03D1,0x0411,0x0412,0x0C32,0x7BCF,0x1452,0x0452,0x0C53,0xE8E6,0x0473,0xE926,0x1473,0x2473,0xE927,0x0C93,0x8430,
    0x2C93,0xE988,0x14B3,0x24B3,0xF800,0x34B3,0xE9C8,0x2CB3,0x3CB3,0xE9E9,0x44B3,0x14B4,0x24B4,0x1CD4,0x34B4,0xEA29,
    0x3CB4,0x8C71,0x44D4,0x24F4,0x34F4,0x4CD4,0xEA6A,0x3CF4,0xEAAB,0x54F4,0x8C92,0x4514,0x4D14,0x2D15,0x001F,0xEACC,
    0x5514,0x5D14,0x94B2,0x4535,0x5515,0x6514,0x5D15,0x4D35,0x6D14,0x6515,0xEB0D,0x7514,0x5D35,0x5555,0xF30C,0x4556,
    0x4D36,0x6D35,0x6555,0x9CF3,0xF30D,0x5556,0x4D56,0x8534,0x6D55,0x7555,0xEB8E,0xF34D,0xEB6F,0x5D56,0x8D34,0x5576,
    0x6556,0x7D55,0xF36E,0x9534,0x6D56,0x5D96,0x8555,0x7556,0x9D34,0x5577,0x7D56,0xF38F,0x8D55,0xA534,0x9555,0x5D97,
    0xF3CF,0x7D76,0x6597,0xA554,0x8576,0x65B7,0x8D76,0xF3F0,0xA555,0x07E0,0x6DB7,0x9576,0x75B7,0x8597,0xF430,0x9D76,
    0x8DB6,0x7DB7,0xAD55,0x8D97,0x65D8,0xA576,0x85B7,0x9D96,0x6DD8,0x8DB7,0xA596,0xF472,0x95B7,0x75F8,0xAD96,0x9DB7,
    0x7DF8,0x8DD8,0x85F8,0xA5B7,0x95D8,0xF4B2,0x9DF7,0xB5B6,0x9DD8,0xA5D7,0x8E18,0x95F8,0x7E19,0xF4D3,0x9DF8,0xADF7,
    0x8639,0xB5D7,0xA5F8,0xF513,0x9E38,0xADF8,0xBDD7,0x8E39,0x9639,0xA619,0xBE17,0x8E79,0xAE38,0xB618,0x9E39,0x9659,
    0xAE19,0xF554,0x8E5A,0xA639,0xBE18,0x965A,0xAE39,0xA679,0xB639,0x969A,0xC638,0x9E7A,0xAE79,0xF576,0xA67A,0xB679,
    0xAE7A,0xBE59,0x9EBA,0x9E9B,0xF5B6,0xC659,0xA6BA,0xB67A,0xA69B,0xBE7A,0xA6DB,0xCE79,0xC67A,0xF5F7,0xAEDB,0xBEBA,
    0xC6BA,0xBEBB,0xCE9A,0xB6FB,0xD69A,0xF638,0xBEFB,0xC6DB,0xFE18,0xB6FC,0xD6DA,0xC6FB,0xFE58,0xCEFB,0xBF1C,0xD6FB,
    0xFE59,0xC73C,0xCF1C,0xDEFB,0xD6FC,0xFE9A,0xCF5C,0xD73C,0xDF1C,0xCF5D,0xDF5C,0xFEDB,0xE73C,0xFEFB,0xD77D,0xDF5D,
    0xE75D,0xFF3B,0xDF9E,0xE79D,0xEF7D,0xFF7C,0xF77D,0xE7BE,0xFF7D,0xEF9E,0xEFDE,0xFF9E,0xF7BE,0xFFDE,0xF7FF,0xFFFF,
};

const lePalette leGlobalPalette =
{
    {
        LE_STREAM_LOCATION_ID_INTERNAL, // data location id
        (void*)leGlobalPalette_data, // data variable pointer
        512, // data size
    },
    256,
    LE_COLOR_MODE_RGB_565
};
