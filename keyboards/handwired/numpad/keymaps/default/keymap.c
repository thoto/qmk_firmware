/* Copyright 2020 Joel Schneider
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */

#include QMK_KEYBOARD_H

/* const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_numpad_3x8(
        KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,
        KC_P4,   KC_P5,   KC_P6, KC_PPLS,
        KC_P1,   KC_P2,   KC_P3,
                 KC_P0,   KC_PDOT, KC_PENT
    )
}; */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_numpad_3x8(
//		LT(1, KC_NUM),KC_PSLS, KC_PAST, KC_PMNS,
		OSL(1),       KC_PSLS, KC_PAST, KC_PMNS,
		KC_P7,        KC_P8,   KC_P9,
		KC_P4,        KC_P5,   KC_P6,   KC_PPLS,
		KC_P1,        KC_P2,   KC_P3,
		              KC_P0,   KC_PDOT, KC_PENT
	),
	[1] = LAYOUT_numpad_3x8(
		KC_NUM,       KC_NO,   KC_NO,   KC_NO,
		KC_NO,        KC_NO,   KC_NO,
		KC_NO,        KC_NO,   KC_NO,   KC_NO,
		KC_TRNS,      TG(2),   TG(3),
		              TO(0),   KC_TRNS, KC_TRNS
	),
	[2] = LAYOUT_numpad_3x8(
		OSL(1),       KC_F20,  KC_MUTE, KC_VOLD,
		KC_LGUI,      KC_RGUI, KC_APP,
		KC_TRNS,      KC_TRNS, KC_TRNS, KC_VOLU,
		PB_1,         PB_2,    PB_3,
		              TO(0),   KC_TRNS, KC_TRNS
	),
	[3] = LAYOUT_numpad_3x8(
		LT(1, OSL(1)),DB_TOGG, KC_NO,   QK_BOOT,
		BL_TOGG,      BL_ON,   BL_OFF,
		EE_CLR,       KC_NO,   KC_NO,   KC_NO,
		KC_TRNS,      KC_TRNS, KC_TRNS,
		              TO(0),   KC_TRNS, KC_TRNS
	)
};
