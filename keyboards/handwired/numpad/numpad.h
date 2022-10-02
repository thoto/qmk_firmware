/* Copyright 2019
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

#pragma once

#include "quantum.h"

// R0:         4 5 6 D CHECK
// R1: E       7 8 9 + CHECK
// R2: 1 2 3 0 / N * - CHECK
//     0 1 2 3 4 5 6 7


#define LAYOUT_numpad_3x8( \
	K26, K24, K25, K27, \
	K14, K16, K15,      \
	K04, K06, K05, K17, \
	K20, K21, K22,      \
	     K23, K07, K10  \
) { \
	{ KC_NO, KC_NO, KC_NO, KC_NO, K04,   K05,   K06,   K07 }, \
	{ K10,   KC_NO, KC_NO, KC_NO, K14,   K15,   K16,   K17 }, \
	{ K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27 } \
}
