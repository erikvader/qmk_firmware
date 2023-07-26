#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_swedish.h"

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  SE_LSPO,
  SE_RSPC,
  TG_SHIFT,
};

enum tap_dance_codes {
  TD_CTRL_SHIFT = 0,
  TD_SUPER_SHIFT,
};

enum layers {
  _bas = 0,
  _sym,
  _num,
  _lmod,
  _rmod,
  _mus,
  _sys,
};

#define MOON_LED_LEVEL LED_LEVEL

#define CTL_ESC MT(MOD_LCTL, KC_ESCAPE)
#define OSM_SHFT OSM(MOD_LSFT)
#define TD_CTLSH TD(TD_CTRL_SHIFT)
#define TD_SUPSH TD(TD_SUPER_SHIFT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_bas] = LAYOUT_moonlander(
    KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_PSCREEN,
    KC_TAB,    KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_TRNS,        KC_TRNS, KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,    KC_BSPACE,
    CTL_ESC,   KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_TRNS,        KC_TRNS, KC_H,    KC_J,    KC_K,     KC_L,    SE_APOS, KC_ENTER,
    OSM_SHFT,  KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,                             KC_N,    KC_M,    KC_COMMA, KC_DOT,  SE_MINS, TG_SHIFT,
    KC_TRNS,   KC_TRNS,  KC_TRNS, TT(_sym),TT(_num),         TG(_sys),       KC_TRNS,          TT(_sym),TT(_num), KC_TRNS, KC_TRNS, KC_TRNS,
    KC_BSPACE, TD_CTLSH, TD_SUPSH,                                                                                KC_RGUI, KC_LALT, KC_SPACE
  ),
  [_sym] = LAYOUT_moonlander(
    KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
    KC_TRNS,   KC_EXLM, SE_DQUO, KC_HASH, SE_DLR,  KC_PERC, KC_TRNS,         KC_TRNS, SE_BSLS, SE_SLSH, SE_LPRN, SE_RPRN,  SE_EQL,  KC_DELETE,
    TO(_bas),  KC_TRNS, SE_AT,   SE_LBRC, SE_RBRC, SE_AMPR, KC_CAPSLOCK,     KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, SE_QUES, KC_TRNS,
    KC_TRNS,   KC_TRNS, SE_TILD, SE_LCBR, SE_RCBR, SE_CIRC,                           SE_PLUS, SE_UNDS, SE_LESS, SE_GRTR,  KC_TRNS, KC_TRNS,
    KC_TRNS,   KC_TRNS, KC_TRNS, TG(_sym),TO(_mus),         KC_NO,           TO(_bas),         TG(_sym),KC_NO,   KC_TRNS,  KC_TRNS, KC_TRNS,
    KC_DELETE, KC_TRNS, KC_TRNS,                                                                                 KC_TRNS,  KC_TRNS, KC_TRNS
  ),
  [_num] = LAYOUT_moonlander(
    KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_NUMLOCK, KC_TRNS, SE_GRV,  SE_ACUT, KC_TRNS, KC_TRNS,        KC_TRNS, SE_SLSH, KC_7,    KC_8,    KC_9,    SE_PLUS, KC_TRNS,
    TO(_bas),KC_TRNS,    SE_AA,   SE_ADIA, SE_OSLH, KC_TRNS, KC_TRNS,        KC_TRNS, SE_ASTR, KC_4,    KC_5,    KC_6,    SE_EQL,  KC_TRNS,
    KC_TRNS, KC_TRNS,    SE_PIPE, SE_SECT, SE_MU,   KC_TRNS,                          SE_MINS, KC_1,    KC_2,    KC_3,    KC_DOT,  KC_TRNS,
    KC_TRNS, KC_TRNS,    KC_TRNS, KC_NO,   TG(_num),         KC_NO,          TO(_bas),         TO(_mus),TG(_num),KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS,    KC_TRNS,                                                                                KC_TRNS, KC_TRNS, KC_0
  ),
  //NOTE: not in use
  [_lmod] = LAYOUT_moonlander(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,     KC_F6,     KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_NO,   KC_LALT, KC_LGUI, KC_LCTRL, KC_LSHIFT, KC_NO,     KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_F13,  KC_F14,  KC_F15,  KC_F16,   KC_F17,    KC_F18,                           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,              KC_TRNS,      TO(_bas),         KC_TRNS, MO(_num),KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                                                                                   KC_TRNS, KC_TRNS, KC_TRNS
  ),
  //NOTE: not in use
  [_rmod] = LAYOUT_moonlander(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_F7,    KC_F8,     KC_F9,    KC_F10,  KC_F11,  KC_F12,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_NO,    KC_LSHIFT, KC_LCTRL, KC_LGUI, KC_LALT, KC_NO,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                             KC_F19,   KC_F20,    KC_F21,   KC_F22,  KC_F23,  KC_F24,
    KC_TRNS, KC_TRNS, KC_TRNS, MO(_sym),KC_TRNS,          KC_TRNS,           TO(_bas),          KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                                                                                       KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [_mus] = LAYOUT_moonlander(
    KC_TRNS,   KC_TRNS,KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,KC_TRNS,    KC_TRNS,KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS,          KC_TRNS,
    KC_TRNS,   KC_TRNS,KC_MS_BTN2,KC_MS_UP,  KC_MS_BTN1, KC_TRNS,KC_TRNS,    KC_TRNS,KC_DELETE,KC_SCROLLLOCK,      KC_PAUSE,           KC_PSCREEN,         KC_AUDIO_VOL_UP,  KC_TRNS,
    TO(_bas),  KC_TRNS,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_TRNS,KC_TRNS,    KC_TRNS,KC_PGUP,  KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_AUDIO_VOL_DOWN,KC_TRNS,
    KC_TRNS,   KC_TRNS,KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,                    KC_PGDOWN,KC_HOME,            KC_END,             KC_INSERT,          KC_AUDIO_MUTE,    KC_TRNS,
    KC_TRNS,   KC_TRNS,KC_TRNS,   TO(_bas),  TO(_bas),           KC_NO,      TO(_bas),         TO(_bas),           TO(_bas),           KC_TRNS,            KC_TRNS,          KC_TRNS,
    KC_MS_BTN3,KC_TRNS,KC_TRNS,                                                                                                        KC_TRNS,            KC_TRNS,          KC_TRNS
  ),
  [_sys] = LAYOUT_moonlander(
    KC_NO,   KC_NO,  KC_NO,             KC_NO,  KC_NO,  KC_NO,         KC_NO,         KC_NO, KC_NO, KC_NO,KC_NO,KC_NO,  KC_NO,  KC_NO,
    KC_NO,   RGB_VAI,RGB_HUI,           RGB_SPI,RGB_SAI,KC_NO,         KC_NO,         KC_NO, KC_NO, KC_NO,KC_NO,AU_TOG, MU_TOG, MU_MOD,
    TO(_bas),RGB_VAD,RGB_HUD,           RGB_SPD,RGB_SAD,KC_NO,         KC_NO,         KC_NO, KC_NO, KC_NO,KC_NO,KC_NO,  DT_UP,  RESET,
    KC_NO,   RGB_SLD,TOGGLE_LAYER_COLOR,RGB_MOD,RGB_TOG,MOON_LED_LEVEL,                      KC_NO, KC_NO,KC_NO,DT_PRNT,DT_DOWN,MAGIC_TOGGLE_NKRO,
    KC_NO,   KC_NO,  KC_NO,             KC_NO,  KC_NO,                 KC_TRNS,       TO(_bas),     KC_NO,KC_NO,KC_NO,  KC_NO,  KC_NO,
    KC_NO,   KC_NO,  KC_NO,                                                                                     KC_NO,  KC_NO,  KC_NO
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

#define ____ {0,0,0}
#define WHITE {0,0,255}
#define BLUE {174,233,255}
#define YELLOW {41,255,255}
#define HOTPINK {236,150,255}
#define CYAN {131,249,226}
#define RED {0,255,255}
#define GREEN {81,255,255}
#define MAGENTA {216,247,255}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [_sym] = { ____, ____, WHITE, ____, ____, ____, BLUE, ____, ____, ____, ____, BLUE, YELLOW, YELLOW, ____, ____, BLUE, HOTPINK, HOTPINK, ____, ____, BLUE, HOTPINK, HOTPINK, CYAN, ____, BLUE, BLUE, YELLOW, ____, WHITE, RED, GREEN, ____, ____, ____, ____, GREEN, ____, ____, ____, ____, BLUE, CYAN, ____, ____, ____, BLUE, HOTPINK, YELLOW, ____, ____, BLUE, HOTPINK, YELLOW, ____, ____, BLUE, HOTPINK, YELLOW, ____, ____, BLUE, HOTPINK, YELLOW, ____, ____, ____, ____, ____, ____, WHITE },
    [_num] = { ____, ____, WHITE, ____, ____, ____, RED, ____, ____, ____, ____, ____, HOTPINK, YELLOW, ____, ____, CYAN, HOTPINK, YELLOW, ____, ____, CYAN, HOTPINK, YELLOW, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, BLUE, BLUE, BLUE, ____, ____, MAGENTA, MAGENTA, MAGENTA, ____, ____, MAGENTA, MAGENTA, MAGENTA, ____, ____, MAGENTA, MAGENTA, MAGENTA, CYAN, ____, BLUE, BLUE, BLUE, ____, ____, ____, MAGENTA, ____, ____, WHITE },
    [_lmod] = { ____, CYAN, ____, CYAN, ____, ____, CYAN, HOTPINK, CYAN, ____, ____, CYAN, HOTPINK, CYAN, ____, ____, CYAN, HOTPINK, CYAN, ____, ____, CYAN, HOTPINK, CYAN, ____, ____, CYAN, HOTPINK, CYAN, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, BLUE, ____, ____, ____, ____, GREEN, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, WHITE },
    [_rmod] = { ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, GREEN, ____, ____, ____, ____, BLUE, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, CYAN, ____, CYAN, ____, ____, CYAN, HOTPINK, CYAN, ____, ____, CYAN, HOTPINK, CYAN, ____, ____, CYAN, HOTPINK, CYAN, ____, ____, CYAN, HOTPINK, CYAN, ____, ____, CYAN, HOTPINK, CYAN, ____, ____, ____, ____, ____, ____, WHITE },
    [_mus] = { ____, ____, WHITE, ____, ____, ____, ____, ____, ____, ____, ____, HOTPINK, HOTPINK, ____, ____, ____, HOTPINK, HOTPINK, ____, WHITE, ____, HOTPINK, HOTPINK, ____, WHITE, ____, ____, ____, ____, ____, ____, ____, HOTPINK, ____, ____, ____, ____, ____, ____, ____, ____, ____, YELLOW, YELLOW, YELLOW, ____, ____, MAGENTA, RED, CYAN, ____, ____, MAGENTA, RED, CYAN, WHITE, ____, MAGENTA, RED, CYAN, WHITE, ____, CYAN, CYAN, CYAN, ____, ____, ____, ____, ____, ____, WHITE },
    [_sys] = { ____, ____, WHITE, ____, ____, ____, GREEN, GREEN, GREEN, ____, ____, GREEN, GREEN, GREEN, ____, ____, GREEN, GREEN, GREEN, ____, ____, GREEN, GREEN, GREEN, ____, ____, ____, ____, GREEN, ____, ____, ____, ____, ____, ____, BLUE, ____, YELLOW, RED, HOTPINK, ____, ____, YELLOW, CYAN, CYAN, ____, ____, YELLOW, ____, CYAN, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, WHITE },
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
  if (layer >= _sym && layer <= _sys) {
    set_layer_color(layer);
  } else if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
    rgb_matrix_set_color_all(0, 0, 0);
  }
}

static bool tg_shift_active = false;

void update_tg_shift_led(void) {
  ML_LED_5(tg_shift_active);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case RGB_SLD:
    if (record->event.pressed) {
      rgblight_mode(1);
    }
    return false;
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
  case KC_SPACE:
  case KC_ENTER:
  case CTL_ESC:
    if (tg_shift_active) {
      tg_shift_active = false;
      unregister_code(KC_LSHIFT);
      update_tg_shift_led();
    }
    return true;
  }
  return true;
}

void td_ctrl_shift_each(qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
  case 1:
    register_code(KC_LCTRL);
    break;
  case 2:
    register_code(KC_LSHIFT);
    break;
  }
}
void td_ctrl_shift_reset(qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
  case 2:
    unregister_code(KC_LSHIFT);
  case 1:
    unregister_code(KC_LCTRL);
  }
}

void td_super_shift_each(qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
  case 1:
    register_code(KC_LGUI);
    break;
  case 2:
    register_code(KC_LSHIFT);
    break;
  }
}
void td_super_shift_reset(qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
  case 2:
    unregister_code(KC_LSHIFT);
  case 1:
    unregister_code(KC_LGUI);
  }
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_CTRL_SHIFT] = ACTION_TAP_DANCE_FN_ADVANCED(td_ctrl_shift_each, NULL, td_ctrl_shift_reset),
  [TD_SUPER_SHIFT] = ACTION_TAP_DANCE_FN_ADVANCED(td_super_shift_each, NULL, td_super_shift_reset),
};
