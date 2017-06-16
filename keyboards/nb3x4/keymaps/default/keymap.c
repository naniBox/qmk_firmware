#include "nb3x4.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BaseL 0
#define _AL 1

#define _______ 	KC_TRNS
#define KC_COPY 	LCTL(KC_C)
#define KC_PASTE 	LCTL(KC_V)
#define KC_UNDO 	LCTL(KC_Z)

//-----------------------------------------------------------------------------
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

//-----------------------------------------------------------------------------
[_BaseL] = KEYMAP(
	KC_ESCAPE,		KC_COPY,	KC_PASTE,		KC_MUTE,
	TG(_AL),		KC_UP,		KC_UNDO,		KC_VOLU,
	KC_LEFT,		KC_DOWN,	KC_RIGHT,		KC_VOLD),

//-----------------------------------------------------------------------------
[_AL] = KEYMAP(
	_______,		KC_P,		KC_T,			KC_W,
	_______,		KC_ENT,		KC_L,			_______,
	KC_DELT,		KC_BSPC,	KC_SPC,			M(0))

};

//-----------------------------------------------------------------------------
/*
enum function_id 
{
};
*/

//-----------------------------------------------------------------------------
const uint16_t PROGMEM fn_actions[] = 
{
};

//-----------------------------------------------------------------------------
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) 
{
	switch (id) 
	{
	}
}

//-----------------------------------------------------------------------------
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
	if (record->event.pressed) 
	{
		switch(id) 
		{
			case 0:
				SEND_STRING("Teapot!!");
			return false;
		}
	}
	return MACRO_NONE;
};
