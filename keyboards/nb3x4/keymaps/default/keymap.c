#include "nb3x4.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BaseL 0
#define _AL 1

#define _______ KC_TRNS
#define KC_COPY LCTL(KC_C)
#define KC_PASTE LCTL(KC_V)

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
	TG(_AL),		KC_UP,		_______,		KC_VOLU,
	KC_LEFT,		KC_DOWN,	KC_RIGHT,		KC_VOLD),

//-----------------------------------------------------------------------------
[_AL] = KEYMAP(
	_______,		KC_P,		KC_T,			KC_W,
	_______,		_______,	_______,		_______,
	_______,		_______,	_______,		M(0))

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
				SEND_STRING("What the fuck did you just fucking say about me, you little bitch? I’ll have you know I graduated top of my class in the Navy Seals, and I’ve been involved in numerous secret raids on Al-Quaeda, and I have over 300 confirmed kills. I am trained in gorilla warfare and I’m the top sniper in the entire US armed forces. You are nothing to me but just another target. I will wipe you the fuck out with precision the likes of which has never been seen before on this Earth, mark my fucking words. You think you can get away with saying that shit to me over the Internet? Think again, fucker. As we speak I am contacting my secret network of spies across the USA and your IP is being traced right now so you better prepare for the storm, maggot. The storm that wipes out the pathetic little thing you call your life. You’re fucking dead, kid. I can be anywhere, anytime, and I can kill you in over seven hundred ways, and that’s just with my bare hands. Not only am I extensively trained in unarmed combat, but I have access to the entire arsenal of the United States Marine Corps and I will use it to its full extent to wipe your miserable ass off the face of the continent, you little shit. If only you could have known what unholy retribution your little “clever” comment was about to bring down upon you, maybe you would have held your fucking tongue. But you couldn’t, you didn’t, and now you’re paying the price, you goddamn idiot. I will shit fury all over you and you will drown in it. You’re fucking dead, kiddo.");
			return false;
		}
	}
	return MACRO_NONE;
};
