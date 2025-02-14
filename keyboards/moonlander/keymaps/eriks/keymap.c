#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_swedish.h"

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  SE_LSPO,
  SE_RSPC,
  TG_SHIFT,
  MY_GR,
};

enum tap_dance_codes {
  TD_CTRL_SHIFT = 0,
  TD_SUPER_SHIFT,
  TD_ALT_SHIFT,
  TD_SUPER_SE,
};

enum layers {
  _bas = 0,
  _sym,
  _num,
  _gam,
  _one,
  _mus,
  _sys,
  _se,
};

#define MOON_LED_LEVEL LED_LEVEL

#define CTL_ENT MT(MOD_LCTL, KC_ENTER)
#define ALT_TAB MT(MOD_LALT, KC_TAB)
#define SFT_ESC MT(MOD_LSFT, KC_ESCAPE)
#define OSM_SHFT OSM(MOD_LSFT)
#define NUM_BSPC LT(_num, KC_BSPACE)
#define SYM_SPC LT(_sym, KC_SPACE)
#define TD_CTLSH TD(TD_CTRL_SHIFT)
#define TD_SUPSE TD(TD_SUPER_SE)
#define TD_SUPSH TD(TD_SUPER_SHIFT)
#define TD_ALTSH TD(TD_ALT_SHIFT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_bas] = LAYOUT_moonlander(
    _______, _______,  _______, _______, _______, _______, _______,        _______, _______, _______, _______,  _______,  _______,  _______,
    _______, KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    _______,        _______, KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,     _______,
    _______, KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    _______,        _______, KC_H,    KC_J,    KC_K,     KC_L,     SE_MINS,  _______,
    _______, KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,                             KC_N,    KC_M,    KC_COMMA, KC_DOT,   TG_SHIFT, _______,
    _______, _______,  _______, TD_SUPSE,NUM_BSPC,         _______,        _______,          SYM_SPC, ALT_TAB,  _______,  _______,  _______,
    SFT_ESC, TG(_one), TG(_gam),                                                                                KC_NO,    TG(_mus), CTL_ENT
  ),
  [_sym] = LAYOUT_moonlander(
    _______, _______, _______, _______,   _______, _______, _______,         _______, _______, _______, _______, _______,  _______, _______,
    _______, KC_EXLM, SE_DQUO, KC_HASH,   SE_DLR,  KC_PERC, _______,         _______, SE_BSLS, SE_SLSH, SE_LPRN, SE_RPRN,  SE_EQL,  _______,
    _______, SE_CIRC, SE_LCBR, SE_LBRC,   SE_LESS, SE_GRV,  _______,         _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, SE_QUES, _______,
    _______, _______, SE_RCBR, SE_RBRC,   SE_GRTR, SE_ACUT,                           _______, SE_PLUS, SE_ASTR, _______,  _______, _______,
    _______, _______, _______, KC_DELETE, KC_SPACE,         _______,         TO(_bas),         _______, _______, _______,  _______, _______,
    _______, KC_NO,   KC_NO,                                                                                     KC_NO,    KC_NO,   _______
  ),
  [_num] = LAYOUT_moonlander(
    _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______,   _______, _______, _______,
    _______, _______, SE_QUOT, SE_PIPE, SE_SECT, _______, _______,        _______, SE_BSLS, KC_7,    KC_8,      KC_9,    _______, _______,
    _______, _______, SE_AT,   SE_AMPR, SE_TILD, _______, _______,        _______, KC_COMMA,KC_4,    KC_5,      KC_6,    _______, _______,
    _______, _______, _______, _______, SE_MU,   _______,                          KC_DOT,  KC_1,    KC_2,      KC_3,    _______, _______,
    _______, _______, _______, _______, _______,          _______,        TO(_bas),         KC_0,    A(KC_TAB), _______, _______, _______,
    _______, KC_NO,   KC_NO,                                                                                    KC_NO,   KC_NO,   C(KC_SPACE)
  ),
  [_se] = LAYOUT_moonlander(
    _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______,  _______,    _______,    _______, _______,
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,        _______, _______, SE_DLR,   SE_QUOT,    SE_DQUO,    _______, _______,
    _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,        _______, _______, SE_AA,    SE_ADIA,    SE_OSLH,    _______, _______,
    _______, KC_F11,  KC_F12,  _______, _______, _______,                          _______, S(SE_AA), S(SE_ADIA), S(SE_OSLH), _______, _______,
    _______, _______, _______, TG(_se), _______,          _______,        TO(_bas),         _______,  _______,    _______,    _______, _______,
    _______, KC_NO,   KC_NO,                                                                                      KC_NO,      KC_NO,   _______
  ),
  [_gam] = LAYOUT_moonlander(
    _______,  _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______,
    KC_TAB,   KC_T,    KC_Q,    KC_W,    KC_E,    KC_R,    _______,      _______, _______, _______, KC_UP,   _______, _______, _______,
    KC_LCTRL, KC_G,    KC_A,    KC_S,    KC_D,    KC_F,    _______,      _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT,_______, _______,
    KC_LSFT,  _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, KC_RSFT,
    _______,  _______, _______, KC_ESC,  KC_SPACE,         _______,      TO(_bas),         KC_SPACE,_______, _______, _______, _______,
    _______,  KC_NO,   _______,                                                                              KC_NO,   KC_NO,   _______
  ),
  [_one] = LAYOUT_moonlander(
    _______, _______, _______, _______, _______,  _______, _______,      _______, _______, _______, _______, _______, _______, _______,
    _______, KC_Q,    KC_F,    KC_UP,   KC_I,     KC_Y,    _______,      _______, _______, _______, _______, _______, _______, _______,
    _______, KC_O,    KC_LEFT, KC_DOWN, KC_RIGHT, KC_N,    _______,      _______, _______, _______, _______, _______, _______, _______,
    _______, G(KC_A), G(KC_S), MY_GR,   KC_D,     KC_P,                           _______, _______, _______, _______, _______, _______,
    _______, _______, _______, KC_TAB,  KC_SPACE,          _______,      TO(_bas),         _______, _______, _______, _______, _______,
    _______, _______, G(KC_K),                                                                               KC_NO,   KC_NO,   _______
  ),
  [_mus] = LAYOUT_moonlander(
    _______,  _______,_______,   _______,   _______,    _______,_______,    _______,_______,   _______,            _______,            _______,            _______,          _______,
    _______,  _______,KC_MS_BTN2,KC_MS_UP,  KC_MS_BTN1, KC_WH_U,_______,    _______,KC_NUMLOCK,KC_SCROLLLOCK,      KC_CAPSLOCK,        KC_PSCREEN,         KC_AUDIO_VOL_UP,  _______,
    _______,  _______,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_WH_D,_______,    _______,KC_PGUP,   KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_AUDIO_VOL_DOWN,_______,
    _______,  _______,_______,   KC_MS_BTN3,_______,    _______,                    KC_PGDOWN, KC_HOME,            KC_END,             KC_INSERT,          KC_AUDIO_MUTE,    _______,
    _______,  _______,_______,   _______,   TO(_bas),           _______,    TO(_bas),          TO(_bas),           _______,            _______,            _______,          _______,
    TO(_sys), KC_NO,  KC_NO,                                                                                                           KC_NO,              _______,          _______
  ),
  [_sys] = LAYOUT_moonlander(
    _______, _______, _______,            _______, _______, _______,       _______,     _______, _______,     _______, _______,           _______, _______, _______,
    KC_NO,   RGB_VAI, RGB_HUI,            RGB_SPI, RGB_SAI, KC_NO,         _______,     _______, C(A(KC_F1)), KC_NO,   MU_MOD,            AU_TOG,  MU_TOG,  _______,
    KC_NO,   RGB_VAD, RGB_HUD,            RGB_SPD, RGB_SAD, KC_NO,         _______,     _______, C(A(KC_F2)), RESET,   KC_NO,             KC_NO,   DT_UP,   _______,
    KC_NO,   RGB_SLD, TOGGLE_LAYER_COLOR, RGB_MOD, RGB_TOG, MOON_LED_LEVEL,                      C(A(KC_F7)), KC_NO,   MAGIC_TOGGLE_NKRO, DT_PRNT, DT_DOWN, _______,
    _______, _______, _______,            KC_NO,   TO(_bas),               _______,     TO(_bas),             TO(_bas),KC_NO,   _______,  _______, _______,
    KC_NO,   KC_NO,   KC_NO,                                                                                                    KC_NO,    KC_NO,   KC_NO
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

#define ____ {0,0,0}
#define WHIT {0,0,255}
#define BLUE {170,255,255}
#define YELL {41,255,255}
#define PINK {241,255,255}
#define HOTP {236,150,255}
#define CYAN {131,249,226}
#define REDD {0,255,255}
#define GREN {81,255,255}
#define MAGE {216,247,255}
#define LAYOUT_moonlander_color( \
    k00, k01, k02, k03, k04, k05, k06,   k60, k61, k62, k63, k64, k65, k66, \
    k10, k11, k12, k13, k14, k15, k16,   k70, k71, k72, k73, k74, k75, k76, \
    k20, k21, k22, k23, k24, k25, k26,   k80, k81, k82, k83, k84, k85, k86, \
    k30, k31, k32, k33, k34, k35,             k91, k92, k93, k94, k95, k96, \
    k40, k41, k42, k43, k44,      k53,   kb3,      ka2, ka3, ka4, ka5, ka6, \
                        k50, k51, k52,   kb4, kb5, kb6 \
) \
{ \
  k00, k10, k20, k30, k40,\
  k01, k11, k21, k31, k41,\
  k02, k12, k22, k32, k42,\
  k03, k13, k23, k33, k43,\
  k04, k14, k24, k34, k44,\
  k05, k15, k25, k35,\
  k06, k16, k26,\
  k50, k51, k52, k53,\
  k66, k76, k86, k96, ka6,\
  k65, k75, k85, k95, ka5,\
  k64, k74, k84, k94, ka4,\
  k63, k73, k83, k93, ka3,\
  k62, k72, k82, k92, ka2,\
  k61, k71, k81, k91,\
  k60, k70, k80,\
  kb6, kb5, kb4, kb3\
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
  [_sym] = LAYOUT_moonlander_color(
    ____, ____, ____, ____, ____, ____, ____,    ____, ____, ____, ____, ____, ____, ____,
    ____, BLUE, BLUE, BLUE, BLUE, BLUE, ____,    ____, BLUE, BLUE, BLUE, BLUE, BLUE, ____,
    ____, YELL, CYAN, HOTP, REDD, YELL, ____,    ____, HOTP, HOTP, HOTP, HOTP, CYAN, ____,
    ____, ____, CYAN, HOTP, REDD, YELL,                ____, YELL, YELL, ____, ____, ____,
    ____, ____, ____, GREN, YELL,       ____,    WHIT,       WHIT, ____, ____, ____, ____,
    ____, ____, ____,                                                    ____, ____, ____
  ),
  [_num] = LAYOUT_moonlander_color(
    ____, ____, ____, ____, ____, ____, ____,    ____, ____, ____, ____, ____, ____, ____,
    ____, ____, HOTP, CYAN, YELL, ____, ____,    ____, GREN, HOTP, HOTP, HOTP, ____, ____,
    ____, ____, GREN, CYAN, YELL, ____, ____,    ____, BLUE, HOTP, HOTP, HOTP, ____, ____,
    ____, ____, ____, ____, YELL, ____,                BLUE, HOTP, HOTP, HOTP, ____, ____,
    ____, ____, ____, ____, WHIT,       ____,    WHIT,       HOTP, CYAN, ____, ____, ____,
    ____, ____, ____,                                                    ____, ____, CYAN
  ),
  [_one] = LAYOUT_moonlander_color(
    ____, ____, ____, ____, ____, ____, ____,    ____, ____, ____, ____, ____, ____, ____,
    ____, HOTP, HOTP, CYAN, HOTP, HOTP, ____,    ____, ____, ____, ____, ____, ____, ____,
    ____, HOTP, CYAN, CYAN, CYAN, HOTP, ____,    ____, ____, ____, ____, ____, ____, ____,
    ____, GREN, GREN, BLUE, REDD, REDD,                ____, ____, ____, ____, ____, ____,
    ____, ____, ____, PINK, YELL,       ____,    WHIT,       ____, ____, ____, ____, ____,
    MAGE, WHIT, REDD,                                                    ____, ____, ____
  ),
  [_se] = LAYOUT_moonlander_color(
    ____, ____, ____, ____, ____, ____, ____,    ____, ____, ____, ____, ____, ____, ____,
    ____, CYAN, CYAN, CYAN, CYAN, CYAN, ____,    ____, ____, BLUE, YELL, BLUE, ____, ____,
    ____, CYAN, CYAN, CYAN, CYAN, CYAN, ____,    ____, ____, YELL, YELL, YELL, ____, ____,
    ____, CYAN, CYAN, ____, ____, ____,                ____, BLUE, YELL, BLUE, ____, ____,
    ____, ____, ____, WHIT, ____,       ____,    WHIT,       ____, ____, ____, ____, ____,
    ____, ____, ____,                                                    ____, ____, ____
  ),
  [_mus] = LAYOUT_moonlander_color(
    ____, ____, ____, ____, ____, ____, ____,    ____, ____, ____, ____, ____, ____, ____,
    ____, ____, PINK, HOTP, PINK, PINK, ____,    ____, MAGE, MAGE, MAGE, GREN, YELL, ____,
    ____, ____, HOTP, HOTP, HOTP, PINK, ____,    ____, CYAN, REDD, REDD, REDD, YELL, ____,
    ____, ____, ____, PINK, ____, ____,                CYAN, BLUE, BLUE, GREN, YELL, ____,
    ____, ____, ____, ____, WHIT,       ____,    WHIT,       WHIT, ____, ____, ____, ____,
    REDD, ____, ____,                                                    ____, WHIT, ____
  ),
  [_sys] = LAYOUT_moonlander_color(
    ____, ____, ____, ____, ____, ____, ____,    ____, ____, ____, ____, ____, ____, ____,
    ____, GREN, GREN, GREN, GREN, ____, ____,    ____, MAGE, ____, YELL, YELL, YELL, ____,
    ____, GREN, GREN, GREN, GREN, ____, ____,    ____, MAGE, REDD, ____, ____, CYAN, ____,
    ____, GREN, GREN, GREN, GREN, GREN,                MAGE, ____, HOTP, CYAN, CYAN, ____,
    ____, ____, ____, ____, WHIT,       ____,    WHIT,       WHIT, ____, ____, ____, ____,
    ____, ____, ____,                                                    ____, ____, ____
  ),
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
  uint8_t layer = biton32(layer_state);
  switch (layer) {
  case _one:
  case _sym:
  case _num:
  case _mus:
  case _sys:
  case _se:
    set_layer_color(layer);
    break;
  default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
    break;
  }
}

layer_state_t layer_state_set_user(layer_state_t state) {
  ML_LED_3(IS_LAYER_ON_STATE(state, _gam));
  return state;
}

static bool tg_shift_active = false;

static void update_tg_shift_led(void) {
  ML_LED_5(tg_shift_active);
}

static bool process_record_toggle_shift(uint16_t keycode, keyrecord_t *record) {
  switch(keycode) {
  case TG_SHIFT:
    if (!record->event.pressed) return false;
    if (tg_shift_active) {
      unregister_code(KC_LSHIFT);
    } else {
      register_code(KC_LSHIFT);
    }
    tg_shift_active = !tg_shift_active;
    update_tg_shift_led();
    return false;
  case KC_A ... KC_Z:
  case SE_MINS:
  case SE_UNDS:
  case KC_BSPACE:
  case SE_AA:
  case SE_ADIA:
  case SE_OSLH:
  case NUM_BSPC:
    return true;
  case SYM_SPC:
    if (tg_shift_active) {
      if (record->event.pressed) {
        register_code16(SE_UNDS);
      } else {
        unregister_code16(SE_UNDS);
      }
      return false;
    }
    return true;
  default:
    if (tg_shift_active) {
      tg_shift_active = false;
      unregister_code(KC_LSHIFT);
      update_tg_shift_led();
    }
    return true;
  }
}

static bool process_record_ML(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case RGB_SLD:
    if (record->event.pressed) {
      rgblight_mode(1);
    }
    return false;
  }
  return true;
}

static bool process_record_my_macros(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case MY_GR:
    if (record->event.pressed) {
      send_string("gr");
    }
    return false;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return process_record_my_macros(keycode, record)
    && process_record_ML(keycode, record)
    && process_record_toggle_shift(keycode, record);
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case TD_SUPSE:
  case TD_CTLSH:
  case TD_SUPSH:
  case TD_ALTSH:
    return TAPPING_TERM + 100;
  default:
    return TAPPING_TERM;
  }
}

#define MOD_ESC_EACH(name) mod_escalator_##name##_each
#define MOD_ESC_RESET(name) mod_escalator_##name##_reset
#define MOD_ESCALATOR(name, one_tap, two_tap)                           \
  void MOD_ESC_EACH(name) (qk_tap_dance_state_t *state, void *user_data) { \
    switch (state->count) {                                             \
    case 1:                                                             \
      register_code(one_tap);                                           \
      break;                                                            \
    case 2:                                                             \
      register_code(two_tap);                                           \
      break;                                                            \
    }                                                                   \
  }                                                                     \
  void MOD_ESC_RESET(name) (qk_tap_dance_state_t *state, void *user_data) { \
    if (state->count >= 2) {                                            \
      unregister_code(two_tap);                                         \
    }                                                                   \
    unregister_code(one_tap);                                           \
  }
#define MOD_ESC_TD(name) ACTION_TAP_DANCE_FN_ADVANCED(MOD_ESC_EACH(name), NULL, MOD_ESC_RESET(name))

MOD_ESCALATOR(TD_CTRL_SHIFT, KC_LCTRL, KC_LSHIFT)
MOD_ESCALATOR(TD_SUPER_SHIFT, KC_LGUI, KC_LSHIFT)
MOD_ESCALATOR(TD_ALT_SHIFT, KC_LALT, KC_LSHIFT)

static int super_se_state = 0;

void super_se_finished(qk_tap_dance_state_t *state, void *user_data) {
  super_se_state = 0;
  switch (state->count) {
  case 1:
    if (state->pressed) {
      register_code(KC_LGUI);
      super_se_state = 1;
    } else {
      set_oneshot_layer(_se, ONESHOT_START);
      super_se_state = 2;
    }
    break;
  case 2:
    if (state->pressed) {
      register_code(KC_LGUI);
      register_code(KC_LSHIFT);
      super_se_state = 3;
    }
    break;
  }
}

void super_se_reset(qk_tap_dance_state_t *state, void *user_data) {
  switch (super_se_state) {
  case 1:
    unregister_code(KC_LGUI);
    break;
  case 2:
    clear_oneshot_layer_state(ONESHOT_PRESSED);
    break;
  case 3:
    unregister_code(KC_LGUI);
    unregister_code(KC_LSHIFT);
    break;
  }
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_CTRL_SHIFT] = MOD_ESC_TD(TD_CTRL_SHIFT),
  [TD_SUPER_SHIFT] = MOD_ESC_TD(TD_SUPER_SHIFT),
  [TD_ALT_SHIFT] = MOD_ESC_TD(TD_ALT_SHIFT),
  [TD_SUPER_SE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, super_se_finished, super_se_reset),
};
