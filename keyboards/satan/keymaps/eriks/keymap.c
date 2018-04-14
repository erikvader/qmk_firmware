#include "satan.h"


// Used for SHIFT_ESC
#define MODS_CTRL_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0
#define _AL 1
#define _NL 2
#define _FL 3
#define _HL 4

#define _______ KC_TRNS

#define CTL_ESC MT(MOD_LCTL, KC_ESC)

#define KC_ARIN RALT(KC_LBRC)
#define KC_ADOT RALT(KC_QUOT)
#define KC_ODOT RALT(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: (Base Layer) Default Layer
   * ,-----------------------------------------------------------.
   * |Esc~| 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
   * |-----------------------------------------------------------|
   * |CAPS   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |
   * |-----------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space            |Alt |Gui |FN  |Ctrl |
   * `-----------------------------------------------------------'
   */
[_BL] = KEYMAP(
  KC_ESC,  KC_1,    KC_2,    KC_3,   KC_4,    KC_5,    KC_6,    KC_7,     KC_8, KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_DEL, MO(_FL), \
  KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,    KC_Y,    KC_U,     KC_I, KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC, \
  CTL_ESC, KC_A,    KC_S,    KC_D,   KC_F,    KC_G,    KC_H,    KC_J,     KC_K, KC_L,    KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,  \
  KC_LSFT, KC_NUBS, KC_Z,    KC_X,   KC_C,    KC_V,    KC_B,    KC_N,     KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_LSFT, \
  KC_LCTL, KC_LGUI, KC_LALT,                           KC_SPC,                           KC_RALT, KC_RGUI, KC_NO,   KC_RCTL),

[_AL] = KEYMAP(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_UP, \
  _______, _______, _______,                   _______,                                     _______, KC_LEFT, KC_DOWN, KC_RGHT),

[_NL] = KEYMAP(
     F(0), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, KC_BTN2, KC_MS_U, KC_BTN1, KC_WH_U, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, KC_BTN3, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______,                   _______,                                     _______, _______, _______, _______),
  /* Keymap _FL: Function Layer
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |  RESET|
   * |-----------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |   |BL-|BL+|BL   |
   * |-----------------------------------------------------------|
   * |      |   |   |   |   |   |   |       |   |   |   |        |
   * |-----------------------------------------------------------|
   * |        | F1|F2 | F3|F4 | F5| F6| F7| F8|   |   |          |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */
[_FL] = KEYMAP(
  KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, \
  _______, _______, _______, KC_END,  _______, _______, _______, KC_PGUP, KC_INS,  _______, KC_PSCR, _______, KC_VOLU, _______, \
  KC_CAPS, _______, _______, KC_PGDN, _______, _______, KC_HOME, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, KC_VOLD, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, KC_MUTE, _______, _______, _______, _______, _______, \
  _______, _______, _______,                      F(0),                                     _______, _______, MO(_HL), _______),

[_HL] = KEYMAP(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, BL_INC , _______, _______, _______, \
  RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, TG(_AL), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, BL_TOGG, _______, _______, _______, _______, BL_DEC,  _______, _______, \
  _______, _______, _______,                   _______,                                     _______, _______, MO(_HL), _______),
};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

enum function_id {
  TOGGLE_NUMBER
};

const uint16_t PROGMEM fn_actions[] = {
  [0]  = ACTION_FUNCTION(TOGGLE_NUMBER),
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  // static uint8_t is_ctrl;
  switch (id) {
  case TOGGLE_NUMBER:
     // is_ctrl = get_mods()&MODS_CTRL_MASK;
     if(record->event.pressed) {
        if(IS_LAYER_ON(_NL)){
           layer_off(_NL);
           led_set_kb(0);
        }else{
           layer_on(_NL);
           led_set_kb(1<<USB_LED_CAPS_LOCK);
        }
        // if(default_layer_state&(1UL << _AL)){
           // if(is_ctrl){
               // persistent_default_layer_set(1UL << _BL);
           // }else{
              // default_layer_set(1UL << _BL);
           // }
        // }else{
           // if(is_ctrl){
               // persistent_default_layer_set(1UL << _AL);
           // }else{
              // default_layer_set(1UL << _AL);
           // }
        // }
     }
     break;
    // case TOGGLE_ARROWS:
    //   shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
    //   if (record->event.pressed) {
    //     if (shift_esc_shift_mask) {
    //       add_key(KC_GRV);
    //       send_keyboard_report();
    //     } else {
    //       add_key(KC_ESC);
    //       send_keyboard_report();
    //     }
    //   } else {
    //     if (shift_esc_shift_mask) {
    //       del_key(KC_GRV);
    //       send_keyboard_report();
    //     } else {
    //       del_key(KC_ESC);
    //       send_keyboard_report();
    //     }
    //   }
    //   break;
  }
}

void led_set_kb(uint8_t usb_led) {
   if (IS_LAYER_ON(_NL)) {
        // Turn capslock on
        PORTB &= ~(1<<2);
    } else {
        // Turn capslock off
        PORTB |= (1<<2);
    }
}

void matrix_init_user(void){
   layer_on(_AL);
}
