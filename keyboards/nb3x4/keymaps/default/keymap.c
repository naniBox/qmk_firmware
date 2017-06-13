#include "nb3x4.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0
#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: (Base Layer) Default Layer
 * .-------------------.
 * |  F1|  F2|  F3|  F4|
 * |-------------------|
 * |  F5|  F6|  F7|  F8|
 * |-------------------|
 * |  F9| F10| F11| F12|
 * '-------------------'
   */
/*
[_BL] = KEYMAP(
  KC_1,		KC_2,		KC_3,		KC_4, \
  KC_5,		KC_6, 		KC_7,		KC_8, \
  KC_9,		KC_0,		KC_A,		KC_B)
*/
[_BL] = KEYMAP(
  KC_ESCAPE,		KC_COPY,		KC_PASTE,			KC_MUTE, \
  KC_TAB,			_______, 		KC_MS_WH_UP,		KC_VOLU, \
  _______,			KC_CALC,		KC_MS_WH_DOWN,		KC_VOLD)

/*
[_BL] = KEYMAP(
  KC_ESCAPE,		KC_COPY,		KC__MUTE, 		_______, \
  KC_TAB,			KC_PASTE, 		KC__VOLUP, 	_______, \
  _______,			_______,		KC__VOLDOWN, 	_______)
  */

};

/*enum function_id {
};*/

const uint16_t PROGMEM fn_actions[] = {
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch (id) {
  }
}

