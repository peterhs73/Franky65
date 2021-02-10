#pragma once

#include "quantum.h"

// keyboard layout
// the values are used in keymaps
// empty keyspots are filled with KC_NO
#define LAYOUT( \
      K00, K01, K02, K03, K04, K05, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
      K10, K11, K12, K13, K14, K15, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F,   K1G, \
      K20, K21, K22, K23, K24, K25,           K29, K2A, K2B, K2C, K2D, K2E, K2F,   K2G, \
      K30, K31, K32, K33, K34, K35,           K39, K3A, K3B, K3C, K3D, K3E, K3F,       \
                     K43, K44, K45,                K4A, K4B,           K4E, K4F,   K4G \
) { \
    { K00,   K01,   K02,   K03, K04, K05, K07,   K08,   K09,   K0A, K0B, K0C,   K0D,   K0E, KC_NO, KC_NO }, \
    { K10,   K11,   K12,   K13, K14, K15, K17,   K18,   K19,   K1A, K1B, K1C,   K1D,   K1E, K1F,   K1G }, \
    { K20,   K21,   K22,   K23, K24, K25, KC_NO, KC_NO, K29,   K2A, K2B, K2C,   K2D,   K2E, K2F,   K2G  }, \
    { K30,   K31,   K32,   K33, K34, K35, KC_NO, KC_NO, K39,   K3A, K3B, K3C,   K3D,   K3E, K3F,   KC_NO }, \
    { KC_NO, KC_NO, KC_NO, K43, K44, K45, KC_NO, KC_NO, KC_NO, K4A, K4B, KC_NO, KC_NO, K4E, K4F,   K4G} \
}
