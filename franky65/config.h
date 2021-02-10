/*
Copyright 2021 Peter Sun

This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <https://unlicense.org>
*/

#pragma once

// product description
#define VENDOR_ID       0x0000
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0000
#define MANUFACTURER    Peter Sun
#define PRODUCT         Franky65
#define DESCRIPTION     "SUPER" 

// matrix information
// Due to limited space, the pins are not in orde
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

#define MATRIX_ROW_PINS { F5, D5, D7, C4, E0 }
#define MATRIX_COL_PINS { B1, E7, B3, B0, B2, E6, D2, D3, F0, F1, F2, C2, F3, F7, C7, D4 }

#define DEBOUNCE 5
#define DIODE_DIRECTION COL2ROW
