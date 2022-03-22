#include QMK_KEYBOARD_H

LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_ONE_KEY(KC_S) {
      // Anything you can do in a macro.
      register_code(KC_LCTL);
      register_code(KC_S);
      unregister_code(KC_S);
      unregister_code(KC_LCTL);
    }
    SEQ_ONE_KEY(KC_F) {
      register_code(KC_F3);
      unregister_code(KC_F3);
    }
    SEQ_ONE_KEY(KC_U) {
      SEND_STRING(SS_LCTL("Z"));
    }
    SEQ_TWO_KEYS(KC_D, KC_D) {
      register_code(KC_HOME);
      unregister_code(KC_HOME);
      register_code(KC_LSFT);
      register_code(KC_END);
      unregister_code(KC_END);
      unregister_code(KC_LSFT);
      register_code(KC_DEL);
      unregister_code(KC_DEL);
    }
    SEQ_THREE_KEYS(KC_C, KC_I, KC_W) {
      register_code(KC_LCTL);
          register_code(KC_LEFT);
          unregister_code(KC_LEFT);
          register_code(KC_LSFT);
              register_code(KC_RIGHT);
              unregister_code(KC_RIGHT);
          unregister_code(KC_LSFT);
      unregister_code(KC_LCTL);
      register_code(KC_DEL);
      unregister_code(KC_DEL);
    }
    SEQ_THREE_KEYS(KC_D, KC_D, KC_S) {
      SEND_STRING("https://start.duckduckgo.com\n");
    }
    SEQ_THREE_KEYS(KC_G, KC_C, KC_C) {
      SEND_STRING(SS_LCTL("/"));
    }
    SEQ_TWO_KEYS(KC_A, KC_S) {
      register_code(KC_LGUI);
      register_code(KC_S);
      unregister_code(KC_S);
      unregister_code(KC_LGUI);
    }
  }
}

#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_LAYER0] = LAYOUT(KC_ESC,   KC_1,      KC_2,     KC_3,     KC_4,     KC_5,                     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_BSPC,
                   KC_TAB,   KC_Q,      KC_W,     KC_E,     KC_R,     KC_T,                     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,
                   KC_LCTL,  KC_A,      KC_S,     KC_D,     KC_F,     KC_G,                     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT, 
                   KC_LSFT,  KC_Z,      KC_X,     KC_C,     KC_V,     KC_B, KC_NO,     KC_LEAD, KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT, 
                   KC_LGUI,  KC_LALT,   MO(1),    KC_ENT,                                                           KC_SPC,   MO(2),    KC_BSPC,  TG(3)),
 
[_LAYER1] = LAYOUT(KC_TRNS,  KC_F1,     KC_F2,    KC_F3,    KC_F4,    KC_F5,                    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,
                   KC_F1,    KC_DQUO,   KC_F3,    KC_F4,    KC_F5,    KC_NO,                    KC_LBRC,  KC_RBRC,  KC_EQL,   KC_F10,   KC_F11,   KC_F12, 
                   KC_GRV,   KC_EXLM,   KC_AT,    KC_HASH,  KC_DLR,   KC_NO,                    KC_LPRN,  KC_RPRN,  KC_MINS,  KC_SLSH,  KC_HASH,  KC_TILD, 
                   KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NO, KC_NO,    KC_TRNS, KC_LCBR,  KC_RCBR,  KC_PLUS,  KC_BSLS,  KC_AMPR,  KC_PIPE, 
                   KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,                                                          KC_TRNS,  MO(3),    KC_TRNS,  KC_TRNS),

[_LAYER2] = LAYOUT(KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                   KC_GRV,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,                    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,  KC_TRNS, 
                   KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DEL,  KC_NO, 
                   KC_F7,   KC_F8,    KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_NO,  KC_TRNS, KC_PLUS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, 
                   KC_TRNS, KC_TRNS,  MO(3),   KC_TRNS,                                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER3] = LAYOUT(KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_WH_L, KC_WH_R,                 KC_NO,   KC_7,     KC_8,     KC_9,   KC_NO,   KC_NO,   
                   KC_NO,   KC_BTN1,  KC_MS_U, KC_BTN2, KC_NO,   KC_WH_U,                 KC_NO,   KC_4,     KC_5,     KC_6,   KC_PLUS,     KC_NO, 
                   KC_NO,   KC_MS_L,  KC_MS_D, KC_MS_R, KC_BTN1, KC_WH_D,                 KC_MS_U, KC_1,     KC_2,     KC_3,   KC_ENT,   KC_NO, 
                   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_NO, KC_NO,   KC_0,     KC_NO,   KC_COMM,   KC_NO,   KC_NO, 
                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS) 

};

// enum layer_number {
//   _QWERTY = 0,
//   _LOWER,
//   _RAISE,
//   _ADJUST,
// };

//const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

///* QWERTY
// * ,-----------------------------------------.                    ,-----------------------------------------.
// * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
// * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
// * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
// * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
// * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   l,  |   .  |   /  |RShift|
// * `-----------------------------------------/       /     \      \-----------------------------------------'
// *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
// *                   |      |      |      |/       /         \      \ |      |      |      |
// *                   `----------------------------'           '------''--------------------'
// */

// [_QWERTY] = LAYOUT(
//  KC_ESCl,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
//  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
//  KC_LCTRL, KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
//  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_NO,  KC_LEAD,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
//                        KC_LALT, KC_LGUI, MO(_LOWER), KC_ENT, KC_SPC, MO(_RAISE), KC_BSPC, KC_RGUI
//),
///* LOWER
// * ,-----------------------------------------.                    ,-----------------------------------------.
// * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
// * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
// * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// * |   `  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   -  |
// * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
// * |      |      |      |      |      |      |-------|    |-------|      |   _  |   +  |   {  |   }  |   |  |
// * `-----------------------------------------/       /     \      \-----------------------------------------'
// *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
// *                   |      |      |      |/       /         \      \ |      |      |      |
// *                   `----------------------------'           '------''--------------------'
// */
//[_LOWER] = LAYOUT(
//  _______, _______, _______, _______, _______, _______,                   _______, _______, _______,_______, _______, _______,
//  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
//  KC_GRV, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,
//  _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
//                             _______, _______, _______, _______, _______,  _______, _______, _______
//),
///* RAISE
// * ,-----------------------------------------.                    ,-----------------------------------------.
// * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
// * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |
// * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |-------.    ,-------|      | Left | Down |  Up  |Right |      |
// * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
// * |  F7  |  F8  |  F9  | F10  | F11  | F12  |-------|    |-------|   +  |   -  |   =  |   [  |   ]  |   \  |
// * `-----------------------------------------/       /     \      \-----------------------------------------'
// *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
// *                   |      |      |      |/       /         \      \ |      |      |      |
// *                   `----------------------------'           '------''--------------------'
// */

//[_RAISE] = LAYOUT(
//  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
//  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
//  KC_F1,  KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,                       XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,
//  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   _______, _______,  KC_PLUS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
//                             _______, _______, _______,  _______, _______,  _______, _______, _______
//),
///* ADJUST
// * ,-----------------------------------------.                    ,-----------------------------------------.
// * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
// * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
// * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
// * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
// * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
// * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
// * `-----------------------------------------/       /     \      \-----------------------------------------'
// *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
// *                   |      |      |      |/       /         \      \ |      |      |      |
// *                   `----------------------------'           '------''--------------------'
// */
//  [_ADJUST] = LAYOUT(
//  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//                             _______, _______, _______, _______, _______,  _______, _______, _______
//  )
//};

//layer_state_t layer_state_set_user(layer_state_t state) {
//  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
//}

////SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
//#ifdef OLED_ENABLE

//oled_rotation_t oled_init_user(oled_rotation_t rotation) {
//  if (!is_keyboard_master())
//    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
//  return rotation;
//}

//// When you add source files to SRC in rules.mk, you can use functions.
//const char *read_layer_state(void);
//const char *read_logo(void);
//void set_keylog(uint16_t keycode, keyrecord_t *record);
//const char *read_keylog(void);
//const char *read_keylogs(void);

//// const char *read_mode_icon(bool swap);
//// const char *read_host_led_state(void);
//// void set_timelog(void);
//// const char *read_timelog(void);

//bool oled_task_user(void) {
//  if (is_keyboard_master()) {
//    // If you want to change the display of OLED, you need to change here
//    oled_write_ln(read_layer_state(), false);
//    oled_write_ln(read_keylog(), false);
//    oled_write_ln(read_keylogs(), false);
//    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
//    //oled_write_ln(read_host_led_state(), false);
//    //oled_write_ln(read_timelog(), false);
//  } else {
//    oled_write(read_logo(), false);
//  }
//    return false;
//}
//#endif // OLED_ENABLE

//bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//  if (record->event.pressed) {
//#ifdef OLED_ENABLE
//    set_keylog(keycode, record);
//#endif
//    // set_timelog();
//  }
//  return true;
//}
