#include QMK_KEYBOARD_H

// Default keymaps
// The two top right buttons and the arrow buttons are in the 15th, 16th and 17th column 
enum layer_names {
  _QWERTY,
  _FUNC,
  _QUANTUM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * |-------------------------------------------------|    |-------------------------------------------------|
 * | ESC  |   1  |   2  |   3  |   4  |   5  |   -   |    |    =  |   6  |   7  |   8  |   9  |   0  |  `   |             
 * |------+------+------+------+------+------|-------|    |-------|------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   [   |    |    ]  |   Y  |   U  |   I  |   O  |   P  |  BS  |  BS  | MOD  |
 * |------+------+------+------+------+------|-------|    |-------|------+------+------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |                    |   H  |   J  |   K  |   L  |   ;  |  '   |  |   | RALT |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------+------|------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |                    |   N  |   M  |   ,  |   .  |   /  | Enter|  up  | 
 * |-----------------------------------------|     |------|       |-----------------------------------------+------+------|
 *                   | LGUI |  Space  |            | MOD  |              | Space   | RGUI |          |right | down | left |
 *                   |----------------|            |------|              |----------------|          |--------------------|
 */

[_QWERTY] = LAYOUT( \
  KC_ESC,           KC_1,   KC_2,         KC_3,     KC_4,    KC_5,    KC_MINS,  KC_EQL,    KC_6,     KC_7,    KC_8,     KC_9,    KC_0,     KC_GRV,  \
  KC_TAB,           KC_Q,   KC_W,         KC_E,     KC_R,    KC_T,    KC_LBRC,  KC_RBRC,   KC_Y,     KC_U,    KC_I,     KC_O,    KC_P,     KC_BSPC,   KC_BSPC,  MO(_QUANTUM), \
  KC_LCTRL,         KC_A,   KC_S,         KC_D,     KC_F,    KC_G,                         KC_H,     KC_J,    KC_K,     KC_L,    KC_SCLN,  KC_QUOT,   KC_BSLS,  KC_RALT, \
  KC_LSFT,          KC_Z,   KC_X,         KC_C,     KC_V,    KC_B,                         KC_N,     KC_M,    KC_COMM,  KC_DOT,  KC_SLSH,  KC_ENT,    KC_UP,\
                                          KC_LGUI,  KC_SPC,  MO(_FUNC),                              KC_SPC,  KC_RGUI,                     KC_LEFT,   KC_DOWN,  KC_RGHT  \
),

 [_FUNC] = LAYOUT( \
  KC_ESC,           KC_EXLM,  KC_AT,         KC_HASH,  KC_DLR,  KC_PERC,  KC_UNDS, KC_PLUS,   KC_CIRC,  KC_AMPR, KC_ASTR,  KC_LPRN, KC_RPRN,  KC_TILD, \
  SFT_T(KC_TAB),    KC_F1,    KC_F2,         KC_F3,    KC_F4,   KC_F5,    KC_LCBR, KC_RCBR,   KC_F6,    KC_F7,   KC_F8,    KC_F9,   KC_F10,   KC_BSPC,  KC_BSPC, LGUI(KC_EQL),  \
  KC_CAPS,          KC_TRNS,  KC_TRNS,       KC_TRNS,  KC_TRNS, KC_TRNS,                      KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, LGUI(KC_MINS), \
  KC_TRNS,          KC_TRNS,  KC_TRNS,       KC_TRNS,  KC_TRNS, KC_TRNS,                      KC_TRNS,  KC_MAIL, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_MSTP, \
                                             KC_TRNS,  KC_SPC , KC_TRNS,                                KC_SPC,  KC_TRNS,                     KC_MRWD,  KC_MPLY, KC_MFFD \
),                        

 [_QUANTUM] = LAYOUT( \
  RESET,          KC_TRNS,  KC_TRNS,       KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, \
  KC_TRNS,        KC_TRNS,  KC_TRNS,       KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, \
  KC_TRNS,        KC_TRNS,  KC_TRNS,       KC_TRNS,  KC_TRNS, KC_TRNS,                      KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, \
  KC_TRNS,        KC_TRNS,  KC_TRNS,       KC_TRNS,  KC_TRNS, KC_TRNS,                      KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_VOLU, \
                                           KC_TRNS,  KC_TRNS, KC_TRNS,                                KC_TRNS, KC_TRNS,                     KC_MPRV,  KC_VOLD, KC_TRNS \
)    
};