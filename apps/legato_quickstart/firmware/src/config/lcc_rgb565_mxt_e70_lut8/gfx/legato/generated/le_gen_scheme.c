#include "gfx/legato/generated/le_gen_scheme.h"

const leScheme WhiteScheme = 
{
    {
        { { 0xFF, 0xCF, 0xFF, 0x80, 0x40, 0xFF, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0x0, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0xFF, 0xBA, 0xFF, 0x92, 0x49, 0xFF, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0x0, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0xFFFF, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0xFFFF, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0x0, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0xFFFF, 0xC675, 0xFFFF, 0x8421, 0x4211, 0xFFFF, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0x1, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xFFFFFF, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0xFFFFFF, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0x0, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xFFFFFFFF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFFFFFFFF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFFFFFFFF, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFF000000, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0xFF, 0xCC, 0xFF, 0x1F, 0x8, 0xFF, 0xE4, 0x1F, 0xFF, 0xE4, 0xCC, 0x0, 0x3E, 0xFF, 0xE4, 0x3A } }, // INDEX_8
    },
};
const leScheme RedScheme = 
{
    {
        { { 0x36, 0xCF, 0xFF, 0x80, 0x40, 0x36, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0x36, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0xE0, 0xBA, 0xFF, 0x92, 0x49, 0xE0, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0xE0, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0xF800, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0xF800, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0xF800, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0xF801, 0xC675, 0xFFFF, 0x8421, 0x4211, 0xF801, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0xF801, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xFF0000, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0xFF0000, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0xFF0000, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xFF0000FF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFF0000FF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFF0000FF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFFFF0000, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFFFF0000, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFFFF0000, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0x24, 0xCC, 0xFF, 0x1F, 0x8, 0x24, 0xE4, 0x1F, 0xFF, 0xE4, 0xCC, 0x24, 0x3E, 0xFF, 0xE4, 0x3A } }, // INDEX_8
    },
};
const leScheme GreenScheme = 
{
    {
        { { 0xB6, 0xCF, 0xFF, 0x80, 0x40, 0xB6, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0xB6, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0x1C, 0xBA, 0xFF, 0x92, 0x49, 0x1C, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0x1C, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0x7E0, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0x7E0, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0x7E0, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0x7C1, 0xC675, 0xFFFF, 0x8421, 0x4211, 0x7C1, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0x7C1, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xFF00, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0xFF00, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0xFF00, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xFF00FF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFF00FF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFF00FF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFF00FF00, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFF00FF00, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFF00FF00, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0x79, 0xCC, 0xFF, 0x1F, 0x8, 0x79, 0xE4, 0x1F, 0xFF, 0xE4, 0xCC, 0x79, 0x3E, 0xFF, 0xE4, 0x3A } }, // INDEX_8
    },
};
const leScheme BlueScheme = 
{
    {
        { { 0x12, 0xCF, 0xFF, 0x80, 0x40, 0x12, 0xE1, 0x80, 0xFF, 0xE1, 0xCF, 0x12, 0x12, 0xFF, 0xE1, 0x91 } }, // GS_8
        { { 0x3, 0xBA, 0xFF, 0x92, 0x49, 0x3, 0xDB, 0x92, 0xFF, 0xDB, 0xBA, 0x3, 0x3, 0xFF, 0xDB, 0x92 } }, // RGB_332
        { { 0x1F, 0xC67A, 0xFFFF, 0x8410, 0x4208, 0x1F, 0xD71C, 0x8410, 0xFFFF, 0xD71C, 0xC67A, 0x1F, 0x1F, 0xFFFF, 0xD71C, 0x8C92 } }, // RGB_565
        { { 0x3F, 0xC675, 0xFFFF, 0x8421, 0x4211, 0x3F, 0xD739, 0x8421, 0xFFFF, 0xD739, 0xC675, 0x3F, 0x3F, 0xFFFF, 0xD739, 0x8CA5 } }, // RGBA_5551
        { { 0xFF, 0xC8D0D4, 0xFFFFFF, 0x808080, 0x404040, 0xFF, 0xD6E3E7, 0x808080, 0xFFFFFF, 0xD6E3E7, 0xC8D0D4, 0xFF, 0xFF, 0xFFFFFF, 0xD6E3E7, 0x8C9294 } }, // RGB_888
        { { 0xFFFF, 0xC8D0D4FF, 0xFFFFFFFF, 0x808080FF, 0x404040FF, 0xFFFF, 0xD6E3E7FF, 0x808080FF, 0xFFFFFFFF, 0xD6E3E7FF, 0xC8D0D4FF, 0xFFFF, 0xFFFF, 0xFFFFFFFF, 0xD6E3E7FF, 0x8C9294FF } }, // RGBA_8888
        { { 0xFF0000FF, 0xFFC8D0D4, 0xFFFFFFFF, 0xFF808080, 0xFF404040, 0xFF0000FF, 0xFFD6E3E7, 0xFF808080, 0xFFFFFFFF, 0xFFD6E3E7, 0xFFC8D0D4, 0xFF0000FF, 0xFF0000FF, 0xFFFFFFFF, 0xFFD6E3E7, 0xFF8C9294 } }, // ARGB_8888
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        { { 0x3E, 0xCC, 0xFF, 0x1F, 0x8, 0x3E, 0xE4, 0x1F, 0xFF, 0xE4, 0xCC, 0x3E, 0x3E, 0xFF, 0xE4, 0x3A } }, // INDEX_8
    },
};
