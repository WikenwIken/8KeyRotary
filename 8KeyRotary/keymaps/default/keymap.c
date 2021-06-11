#include "ultipad.h"

#define _BASE     0
#define _SUB      1
#define _SUB2     2

enum custom_keycodes {
  LUL = SAFE_RANGE,
  RED_FLAME,
	DARK_FLAME,
	TEN_SIGN,
	LIGHTER,
	DANCE,
	NIGHTBOT,
	DANCE_HF,
	TD,
	YEA,
	NAY,
	DR_WORM,
	LAZER,
	SNARF,
	PARTY,
	PEARLS,
	NINETEN,
	BABIES,
	LORD,
	UNITY,
	TIE,
	MODS,
	BANANA,
	FACEPALM,
	ROCK,
	LOVE,
	mitchLIGHTER,
	mitchDANCE,
	POLO,
	HYPE,
	SOGOOD,
	CLAP,
	LAUGH
	
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_UltiPad(
		KC_F1, KC_F2, KC_F3, KC_F4, 
		KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_MUTE, 
		KC_P7, KC_P8, KC_P9, 
		KC_P4, KC_P5, KC_P6, KC_PPLS, 
		KC_P1, KC_P2, KC_P3, 
		KC_P0, KC_PDOT, KC_PENT, DF(1), DF(2)),

  [_SUB] = LAYOUT_UltiPad(
		RESET,     YEA, 		NAY,  	  BABIES, 
		PARTY,     NINETEN, 	NIGHTBOT,   mitchLIGHTER,  KC_MUTE, 
		DR_WORM,   LAZER, 		SNARF, 
		DANCE,     DANCE_HF, 	TEN_SIGN, LIGHTER, 
		RED_FLAME, DARK_FLAME,  TD, 
		LUL,       UNITY, 		KC_PENT,  		   DF(0),   DF(2)),

  [_SUB2] = LAYOUT_UltiPad(
		RESET, 		KC_TRNS, 	KC_TRNS, KC_TRNS, 
		TIE,   		MODS,    	PEARLS,  BANANA, KC_MUTE, 
		FACEPALM,   ROCK,	 	LOVE, 
		mitchDANCE, POLO,  		HYPE,	  mitchLIGHTER, 
		RED_FLAME,  DARK_FLAME, SOGOOD, 
		LAUGH,		CLAP,		KC_PENT, 			DF(1), DF(0)),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
//SCOTT EMOTES
	case UNITY:
		if (record->event.pressed) {                
			SEND_STRING("TwitchUnity ");
		} else {                			
		}
		break;	
	case PEARLS:
		if (record->event.pressed) {                
			SEND_STRING("::gasps:: My Pearls! ");
		} else {                			
		}
		break;
	case NIGHTBOT:
		if (record->event.pressed) {                
			SEND_STRING("scottk2Nightbot ");
		} else {                			
		}
		break;
	case LORD:
		if (record->event.pressed) {                
			SEND_STRING("LORD?!");
		} else {                			
		}
		break;	
	case BABIES:
		if (record->event.pressed) {                
			SEND_STRING("!babies");
		} else {                			
		}
		break;
	case NINETEN:
		if (record->event.pressed) {                
			SEND_STRING("9 / scottk2Ten ");
		} else {                			
		}
		break;	
	case LUL:
		if (record->event.pressed) {                
			SEND_STRING("LUL ");
		} else {                			
		}
		break;
	case PARTY:
		if (record->event.pressed) {                
			SEND_STRING("scottk2Party ");
		} else {                			
		}
		break;            
	case LAZER:
		if (record->event.pressed) {                
			SEND_STRING("scottk2Lazer ");
		} else {                			
		}
		break;
	case SNARF:
		if (record->event.pressed) {
			SEND_STRING("scottk2Snarf ");
		} else {
		}
		break;
	case NAY:
		if (record->event.pressed) {                
			SEND_STRING("VoteNay ");
		} else {                			
		}
		break;
	case YEA:
		if (record->event.pressed) {                
			SEND_STRING("VoteYea ");
		} else {                			
		}
		break;
	case LIGHTER:
		if (record->event.pressed) {                
			SEND_STRING("scottk2Lighter scottk2Lighter scottk2Lighter scottk2Lighter scottk2Lighter scottk2Lighter_HF scottk2Lighter_HF scottk2Lighter_HF scottk2Lighter_HF scottk2Lighter_HF scottk2Lighter scottk2Lighter scottk2Lighter scottk2Lighter scottk2Lighter ");
		} else {                			
		}
		break;
	case DR_WORM:
		if (record->event.pressed) {                
			SEND_STRING("Squid1 Squid2 Squid2 Squid4 mitchbLOVE ");
		} else {                			
		}
		break;
	case TD:
		if (record->event.pressed) {                
			SEND_STRING("FBtouchdown ");
		} else {                			
		}
		break;
	case DANCE_HF:
		if (record->event.pressed) {                
			SEND_STRING("scottk2Dance_HF ");
		} else {                			
		}
		break;
	case DANCE:
		if (record->event.pressed) {                
			SEND_STRING("scottk2Dance ");
		} else {                			
		}
		break;
	case RED_FLAME:
		if (record->event.pressed) {
			SEND_STRING("CurseLit ");
		} else {                
		}
		break;
	case DARK_FLAME:
	    if (record->event.pressed) {
			SEND_STRING("TwitchLit ");
	    } else {
	    }
	    break;
	case TEN_SIGN:
	    if (record->event.pressed) {
			SEND_STRING("scottk2Ten ");
	    } else {
	    }
	    break;
//MITCH EMOTES
	case TIE:
		if (record->event.pressed) {
			SEND_STRING("mitchbTIE ");
		} else {
		}
		break;
	case MODS:
		if (record->event.pressed) {
			SEND_STRING("mitchbMODS ");
		} else {
		}
		break;	
	case BANANA:
		if (record->event.pressed) {
			SEND_STRING("mitchbBANANA ");
		} else {
		}
		break;
	case FACEPALM:
		if (record->event.pressed) {
			SEND_STRING("mitchbFACEPALM ");
		} else {
		}
		break;
	case ROCK:
		if (record->event.pressed) {
			SEND_STRING("mitchbROCK ");
		} else {
		}
		break;
	case LOVE:
		if (record->event.pressed) {
			SEND_STRING("mitchbLOVE ");
		} else {
		}
		break;
	case mitchLIGHTER:
		if (record->event.pressed) {
			SEND_STRING("mitchbLIGHTER ");
		} else {
		}
		break;
	case mitchDANCE:
		if (record->event.pressed) {
			SEND_STRING("mitchbDANCE ");
		} else {
		}
		break;
	case POLO:
		if (record->event.pressed) {
			SEND_STRING("mitchbPOLO ");
		} else {
		}
		break;
	case HYPE:
		if (record->event.pressed) {
			SEND_STRING("mitchbHYPE ");
		} else {
		}
		break;
	case SOGOOD:
		if (record->event.pressed) {
			SEND_STRING("mitchbSOGOOD ");
		} else {
		}
		break;
	case CLAP:
		if (record->event.pressed) {
			SEND_STRING("mitchbCLAP ");
		} else {
		}
		break;
	case LAUGH:
		if (record->event.pressed) {
			SEND_STRING("mitchbLAUGH ");
		} else {
		}
		break;
	}
    return true;
}

//bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
/*
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif 

  return true;
}
*/
uint32_t layer_state_set_user(uint32_t state) {
  switch (biton32(layer_state)) {		//added layer_ to state
    case _BASE:
      writePinLow(LAYER_INDICATOR_LED_0);
      writePinLow(LAYER_INDICATOR_LED_1);
      break;
    case _SUB:
      writePinHigh(LAYER_INDICATOR_LED_1);
	  writePinLow(LAYER_INDICATOR_LED_0);
      break;
    case _SUB2:
      writePinHigh(LAYER_INDICATOR_LED_0);
	  writePinLow(LAYER_INDICATOR_LED_1);
      break;
  }
  return state;
}

void keyboard_pre_init_user() {		//changed post to pre
  // Customise these values to desired behaviour
  //debug_enable = true;
  //debug_matrix = true;
  //debug_keyboard = true;
  //debug_mouse = true;
  setPinOutput(LAYER_INDICATOR_LED_0);
  setPinOutput(LAYER_INDICATOR_LED_1);
  //setPinOutput(LED_NUMLOCK_PIN);
}

void shutdown_user() {
  
}


void matrix_init_user() {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {
    DDRB |= (1 << 3); 

    if (usb_led & (1<<USB_LED_NUM_LOCK)) {
        PORTB |= (1 << 3);
    } else {
        PORTB &= ~(1 << 3);
    }
}


void encoder_update_user(uint8_t index, bool clockwise) {
  /*  Custom encoder control - handles CW/CCW turning of encoder
   *  Cusotom behavior:
   *    main layer:
   *       CW: volume up
   *      CCW: volume down
   *    sub layer:
   *       CW: next media track
   *      CCW: prev media track
   *    debug layer:
   *       CW: brightness up
   *      CCW: brightness down
   */
  if (index == 0) {
    switch (biton32(layer_state)) {
      case _BASE:
        // main layer - volume up (CW) and down (CCW)
        if (clockwise) {
          tap_code(KC_VOLU);
        } else {
          tap_code(KC_VOLD);
        }
        break;

      case _SUB:
        // sub layer - next track (CW) and previous track (CCW)
        if (clockwise) {
          tap_code(KC_VOLU);
        } else {
          tap_code(KC_VOLD);
        }
        break;

      case _SUB2:
        // debug layer - brightness up (CW) and brightness down (CCW)
        if (clockwise) {
          tap_code(KC_VOLU);
        } else {
          tap_code(KC_VOLD);
        }
        break;

      default:
        // any other layer (shouldn't exist..) - volume up (CW) and down (CCW)
        if (clockwise) {
          tap_code(KC_VOLU);
        } else {
          tap_code(KC_VOLD);
        }
        break;   
    }
  }
}
