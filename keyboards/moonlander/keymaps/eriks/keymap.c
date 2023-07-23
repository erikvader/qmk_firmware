#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_174_233_255,
  HSV_250_63_255,
  HSV_0_0_255,
  SE_LSPO,
  SE_RSPC,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PSCREEN,     
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSPACE,      
    MT(MOD_LCTL, KC_ESCAPE),KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           SE_APOS,        KC_ENTER,       
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         SE_MINS,        KC_RSHIFT,      
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(3),          MO(2),          TG(6),                                                                                                          KC_TRANSPARENT, MO(1),          MO(4),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_BSPACE,      KC_LCTRL,       KC_LGUI,                        KC_RGUI,        KC_LALT,        KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        SE_DQUO,        KC_HASH,        SE_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, SE_BSLS,        SE_SLSH,        SE_LPRN,        SE_RPRN,        SE_EQL,         KC_DELETE,      
    TO(0),          KC_TRANSPARENT, SE_AT,          SE_LBRC,        SE_RBRC,        SE_AMPR,        KC_CAPSLOCK,                                                                    KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       SE_QUES,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, SE_TILD,        SE_LCBR,        SE_RCBR,        SE_CIRC,                                        SE_PLUS,        SE_MINS,        SE_LESS,        SE_GRTR,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(5),          KC_NO,                                                                                                          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NUMLOCK,     KC_TRANSPARENT, SE_GRV,         SE_ACUT,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, SE_SLSH,        KC_7,           KC_8,           KC_9,           SE_PLUS,        KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, SE_AA,          SE_ADIA,        SE_OSLH,        KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, SE_ASTR,        KC_4,           KC_5,           KC_6,           SE_EQL,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, SE_PIPE,        SE_SECT,        SE_MU,          KC_TRANSPARENT,                                 SE_MINS,        KC_1,           KC_2,           KC_3,           KC_DOT,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,                                                                                                          TO(0),          TO(5),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_0
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_LALT,        KC_LGUI,        KC_LCTRL,       KC_LSHIFT,      CAPS_WORD,      KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_F13,         KC_F14,         KC_F15,         KC_F16,         KC_F17,         KC_F18,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 TO(0),          KC_TRANSPARENT, MO(2), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, OSM(MOD_LSFT),  KC_LSHIFT,      KC_LCTRL,       KC_LGUI,        KC_LALT,        KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_F19,         KC_F20,         KC_F21,         KC_F22,         KC_F23,         KC_F24,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(1), KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_UP,       KC_MS_BTN1,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_DELETE,      KC_SCROLLLOCK,  KC_PAUSE,       KC_PSCREEN,     KC_AUDIO_VOL_UP,KC_TRANSPARENT, 
    TO(0),          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PGUP,        KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_AUDIO_VOL_DOWN,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PGDOWN,      KC_HOME,        KC_END,         KC_INSERT,      KC_AUDIO_MUTE,  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          TO(0),          KC_NO,                                                                                                          TO(0),          TO(0),          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_VAI,        RGB_HUI,        RGB_SPI,        RGB_SAI,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, HSV_174_233_255,KC_TRANSPARENT, KC_TRANSPARENT, AU_TOG,         MU_TOG,         MU_MOD,         
    TO(0),          RGB_VAD,        RGB_HUD,        RGB_SPD,        RGB_SAD,        KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, HSV_250_63_255, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DT_UP,          RESET,          
    KC_TRANSPARENT, RGB_SLD,        TOGGLE_LAYER_COLOR,RGB_MOD,        RGB_TOG,        MOON_LED_LEVEL,                                 HSV_0_0_255,    KC_TRANSPARENT, KC_TRANSPARENT, DT_PRNT,        DT_DOWN,        MAGIC_TOGGLE_NKRO,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 TO(0),          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [1] = { {0,0,0}, {0,0,0}, {145,57,250}, {0,0,0}, {0,0,0}, {0,0,0}, {174,233,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,233,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {174,233,255}, {236,150,255}, {236,150,255}, {0,0,0}, {0,0,0}, {174,233,255}, {236,150,255}, {236,150,255}, {130,150,255}, {0,0,0}, {174,233,255}, {174,233,255}, {41,255,255}, {0,0,0}, {0,0,255}, {0,255,255}, {81,157,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {81,157,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,233,255}, {130,150,255}, {0,0,0}, {0,0,0}, {0,0,0}, {174,233,255}, {236,150,255}, {41,255,255}, {0,0,0}, {0,0,0}, {174,233,255}, {236,150,255}, {41,255,255}, {0,0,0}, {0,0,0}, {174,233,255}, {236,150,255}, {41,255,255}, {0,0,0}, {0,0,0}, {174,233,255}, {236,150,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {236,150,255}, {41,255,255}, {0,0,0}, {0,0,0}, {130,150,255}, {236,150,255}, {41,255,255}, {0,0,0}, {0,0,0}, {130,150,255}, {236,150,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,233,255}, {174,233,255}, {174,233,255}, {0,0,0}, {0,0,0}, {216,247,255}, {216,247,255}, {216,247,255}, {0,0,0}, {0,0,0}, {216,247,255}, {216,247,255}, {216,247,255}, {0,0,0}, {0,0,0}, {216,247,255}, {216,247,255}, {216,247,255}, {130,150,255}, {0,0,0}, {174,233,255}, {174,233,255}, {174,233,255}, {0,0,0}, {0,0,0}, {0,0,0}, {216,247,255}, {0,0,0}, {0,0,0}, {0,0,255} },

    [3] = { {0,0,0}, {130,150,255}, {0,0,0}, {130,150,255}, {0,0,0}, {0,0,0}, {130,150,255}, {236,150,255}, {130,150,255}, {0,0,0}, {0,0,0}, {130,150,255}, {236,150,255}, {130,150,255}, {0,0,0}, {0,0,0}, {130,150,255}, {236,150,255}, {130,150,255}, {0,0,0}, {0,0,0}, {130,150,255}, {236,150,255}, {130,150,255}, {0,0,0}, {0,0,0}, {130,150,255}, {236,150,255}, {130,150,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,233,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,233,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,150,255}, {0,0,0}, {130,150,255}, {0,0,0}, {0,0,0}, {130,150,255}, {236,150,255}, {130,150,255}, {0,0,0}, {0,0,0}, {130,150,255}, {236,150,255}, {130,150,255}, {0,0,0}, {0,0,0}, {130,150,255}, {236,150,255}, {130,150,255}, {0,0,0}, {0,0,0}, {130,150,255}, {236,150,255}, {130,150,255}, {0,0,0}, {0,0,0}, {130,150,255}, {236,150,255}, {130,150,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {236,150,255}, {236,150,255}, {0,0,0}, {0,0,0}, {0,0,0}, {236,150,255}, {236,150,255}, {0,0,0}, {0,0,0}, {0,0,0}, {236,150,255}, {236,150,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {145,57,250}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {236,150,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {46,218,204}, {46,218,204}, {46,218,204}, {0,0,0}, {0,0,0}, {219,218,204}, {250,249,226}, {131,249,226}, {0,0,0}, {0,0,0}, {219,218,204}, {250,249,226}, {131,249,226}, {0,0,255}, {0,0,0}, {219,218,204}, {250,249,226}, {131,249,226}, {145,57,250}, {0,0,0}, {131,249,226}, {131,249,226}, {131,249,226}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,206}, {74,255,206}, {74,255,206}, {0,0,0}, {0,0,0}, {74,255,206}, {74,255,206}, {74,255,206}, {0,0,0}, {0,0,0}, {74,255,206}, {74,255,206}, {74,255,206}, {0,0,0}, {0,0,0}, {74,255,206}, {74,255,206}, {74,255,206}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,206}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,233,255}, {0,0,0}, {41,255,255}, {0,245,245}, {236,150,255}, {0,0,0}, {0,0,0}, {41,255,255}, {126,218,204}, {126,218,204}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {126,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,218,204}, {236,150,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_174_233_255:
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(174,233,255);
        }
        return false;
      case HSV_250_63_255:
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(250,63,255);
        }
        return false;
      case HSV_0_0_255:
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,0,255);
        }
        return false;
    }
  return true;
}



