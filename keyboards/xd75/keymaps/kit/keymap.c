/* Copyright 2017 Wunder
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
#include "xd75.h"

// Layer shorthand
#define _BASE 0
#define _L1 1
#define _L2 2
#define _L3 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = { /* QWERTY */
    { KC_ESC  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    ,  KC_6    , KC_7      , KC_8      , KC_9     , KC_0    , KC_BSPC , KC_MINS , KC_F12  , KC_PLUS    } ,
    { KC_TAB  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    ,  KC_Y    , KC_U      , KC_I      , KC_O     , KC_P    , KC_DEL  , KC_HOME , KC_UP   , KC_PGUP    } ,
    { KC_LCTL , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    ,  KC_H    , KC_J      , KC_K      , KC_L     , KC_SCLN , KC_ENT  , KC_LEFT , KC_ENT  , KC_RIGHT   } ,
    { KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    ,  KC_N    , KC_M      , KC_COMM   , KC_DOT   , KC_SLSH , KC_RSFT , KC_END  , KC_DOWN , KC_PGDOWN  } ,
    { KC_LALT , KC_LCTL , KC_F12  , KC_LSFT , MO(_L1) , KC_SPC  , KC_SPC   , MO(_L2)   , KC_RSFT   , MO(_L1)  , KC_RCTL , KC_RALT , KC_SPC  , KC_TAB  , KC_SPC     } ,
  }                                                                                                                                                                  ,

  [_L1] = {
    { KC_TRNS , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   ,  KC_F6   , KC_F7     , KC_F8     , KC_F9    , KC_F10  , KC_F11  , KC_TRNS , KC_F11  , KC_NUMLOCK } ,
    { KC_ESC  , KC_7    , KC_8    , KC_9    , KC_0    , KC_RPRN ,  KC_LPRN , KC_RPRN   , KC_SLSH   , KC_ASTR  , KC_GRV  , KC_DEL  , KC_KP_7 , KC_KP_8 , KC_KP_9    } ,
    { KC_TRNS , KC_4    , KC_5    , KC_6    , KC_ENT  , KC_RCBR ,  KC_LCBR , KC_RCBR   , KC_EQL    , KC_UNDS  , KC_QUOT , KC_TRNS , KC_KP_4 , KC_KP_5 , KC_KP_6    } ,
    { KC_TRNS , KC_1    , KC_2    , KC_3    , KC_SLSH , KC_ASTR ,  KC_LBRC , KC_RBRC   , KC_MINS   , KC_PLUS  , KC_BSLS , KC_TRNS , KC_KP_1 , KC_KP_2 , KC_KP_3    } ,
    { KC_TRNS , KC_TRNS , KC_F11  , KC_TRNS , KC_TRNS , KC_BSPC ,  KC_BSPC , KC_TRNS   , KC_TRNS   , KC_TRNS  , KC_TRNS , KC_TRNS , KC_KP_0 , KC_TRNS , KC_DOT     } ,
  }                                                                                                                                                                  ,

  [_L2] = {
    { KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,  KC_TRNS , KC_TRNS   , KC_TRNS   , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , RESET      } ,
    { KC_ESC  , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_VOLU ,  KC_HOME , KC_PGUP   , KC_PGUP   , KC_END   , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS    } ,
    { KC_TRNS , KC_F4   , KC_F5   , KC_F6   , KC_TRNS , KC_VOLD ,  KC_LEFT , KC_DOWN   , KC_UP     , KC_RIGHT , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS    } ,
    { KC_TRNS , KC_F1   , KC_F2   , KC_F3   , KC_TRNS , KC_MUTE ,  KC_HOME , KC_PGDOWN , KC_PGDOWN , KC_END   , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS    } ,
    { KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,  KC_TRNS , KC_TRNS   , MO(_L3)   , KC_TRNS  , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS    } ,
  }                                                                                                                                                                  ,

  [_L3] = {
    { KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,  KC_TRNS , KC_TRNS   , KC_TRNS   , KC_TRNS  , KC_TRNS , KC_TRNS ,KC_TRNS  , KC_TRNS , KC_TRNS    } ,
    { KC_TRNS , KC_TRNS , RGB_VAI , RGB_SAI , KC_TRNS , KC_TRNS ,  KC_TRNS , KC_TRNS   , KC_TRNS   , KC_TRNS  , KC_TRNS , KC_TRNS ,KC_TRNS  , KC_TRNS , KC_TRNS    } ,
    { KC_TRNS , RGB_HUD , RGB_TOG , RGB_HUI , KC_TRNS , KC_TRNS ,  KC_TRNS , KC_TRNS   , KC_TRNS   , KC_TRNS  , KC_TRNS , KC_TRNS ,KC_TRNS  , KC_TRNS , KC_TRNS    } ,
    { KC_TRNS , RGB_SAD , RGB_VAD , KC_TRNS , KC_TRNS , KC_TRNS ,  KC_TRNS , KC_TRNS   , KC_TRNS   , KC_TRNS  , KC_TRNS , KC_TRNS ,KC_TRNS  , KC_TRNS , KC_TRNS    } ,
    { KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,  KC_TRNS , KC_TRNS   , KC_TRNS   , KC_TRNS  , KC_TRNS , KC_TRNS ,KC_TRNS  , KC_TRNS , KC_TRNS    } ,
  }

};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
