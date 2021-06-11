/* Copyright 2020 Wikkles
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
#define _BASE 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
					KC_N,			KC_M,	 	C(KC_Z), 		C(S(KC_Z)),  
        DF(_FN), 	C(S(KC_LBRC)),	C(KC_BSLS),	C(S(KC_RBRC)),	KC_SPC
    ),
	/* FN */
	
    [_FN] = LAYOUT(
					KC_N,			KC_M,	 	C(KC_Z), 		C(S(KC_Z)),  
        DF(_BASE), 	C(S(KC_LBRC)),	C(KC_BSLS),	C(S(KC_RBRC)),	KC_SPC
    )
};

/*bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        
    }
    return true;
}*/


void encoder_update_user(uint16_t index, bool clockwise) {
	if(IS_LAYER_ON(_BASE)) {
		if (clockwise) {
			tap_code16(LCTL(KC_WH_U));
		} else {
			tap_code16(LCTL(KC_WH_D));
		}
	} else if (IS_LAYER_ON(_FN)) {
		if (clockwise) {
			tap_code16(LALT(KC_WH_U));
		} else {
			tap_code16(LALT(KC_WH_D));
		}
	}			
}

