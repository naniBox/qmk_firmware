#include "nb3x4.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0

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
[_BL] = KEYMAP(
  KC_F1,  KC_F2,  KC_F3,  KC_F4, \
  KC_F5,  KC_F6,  KC_F7,  KC_F8, \
  KC_F9, KC_F10, KC_F11, KC_F12)
};

/*enum function_id {
};*/

const uint16_t PROGMEM fn_actions[] = {
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch (id) {
  }
}

