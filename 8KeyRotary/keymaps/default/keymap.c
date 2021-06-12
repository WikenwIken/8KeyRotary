#include QMK_KEYBOARD_H
#define _BASE 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
					KC_N,			KC_M,	 	C(KC_Z), 		C(S(KC_Z)),  
        DF(_FN), 	C(S(KC_LBRC)),	C(KC_BSLS),	C(S(KC_RBRC)),	RESET
    ),
	/* FN */
	
    [_FN] = LAYOUT(
					KC_Z,			KC_M,	 	C(KC_Z), 		C(S(KC_Z)),  
        DF(_BASE), 	C(S(KC_LBRC)),	C(KC_BSLS),	C(S(KC_RBRC)),	KC_SPC
    )
};


	void encoder_update_user(uint16_t index, bool clockwise) {
		
		switch(layer_state) {
			case _BASE:
				
				if (clockwise) {
					
					tap_code(KC_LCTL);
					tap_code(KC_WH_U);
				} else {
					
					tap_code(KC_LCTL);
					tap_code(KC_WH_D);
				}
			case _FN:
				if (clockwise) {
					
					tap_code(KC_LALT);
					tap_code(KC_WH_U);
				} else {
					
					tap_code(KC_LALT);
					tap_code(KC_WH_D);
				}
		}
	}
	
		
	
