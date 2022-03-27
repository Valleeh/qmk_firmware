#include QMK_KEYBOARD_H
#include "qmk-vim/src/vim.h"


LEADER_EXTERNS();

enum {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
    LAYER5,
    TOG_VIM,
    COMMENT,
};
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Process case modes
    if (!process_vim_mode(keycode, record)) {
        return false;
    }

    // Regular user keycode case statement
    switch (keycode) {
        case KC_F14:
            if (record->event.pressed) {
                toggle_vim_mode();
            }
            return false;
        case LT(0,KC_X):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_X)); // Intercept hold function to send Ctrl-X
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_C):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_C)); // Intercept hold function to send Ctrl-C
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_V):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_V)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_Z):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_Z)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_A):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_A)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_B):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_B)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_S):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_S)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_F):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_F)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_D):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_D)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_G):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_G)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_Q):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_Q)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_W):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_W)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_E):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_E)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_R):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_R)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_T):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_T)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_Y):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_Y)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_U):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_U)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_I):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_I)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_O):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_O)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_P):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_P)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_H):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_H)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_J):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_J)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_K):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_K)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_L):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_L)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_N):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_N)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_M):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_M)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        default:
            return true;
    }
}

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
    SEQ_ONE_KEY(KC_1) {
      register_code(KC_LCTL);
      register_code(KC_1);
      unregister_code(KC_1);
      unregister_code(KC_LCTL);
    }
    SEQ_ONE_KEY(KC_2) {
      register_code(KC_LCTL);
      register_code(KC_2);
      unregister_code(KC_2);
      unregister_code(KC_LCTL);
    }
    SEQ_ONE_KEY(KC_3) {
      register_code(KC_LCTL);
      register_code(KC_3);
      unregister_code(KC_3);
      unregister_code(KC_LCTL);
    }
    SEQ_ONE_KEY(KC_4) {
      register_code(KC_LCTL);
      register_code(KC_4);
      unregister_code(KC_4);
      unregister_code(KC_LCTL);
    }
    SEQ_ONE_KEY(KC_U) {
      SEND_STRING(SS_LCTL("Z"));
    }
    SEQ_TWO_KEYS(KC_C, KC_C) {
      register_code(KC_HOME);
      unregister_code(KC_HOME);
      register_code(KC_LSFT);
      register_code(KC_END);
      unregister_code(KC_END);
      unregister_code(KC_LSFT);
      register_code(KC_DEL);
      unregister_code(KC_DEL);
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
    // Change Word
    SEQ_TWO_KEYS(KC_C, KC_W) {
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
    // change Language
    SEQ_TWO_KEYS(KC_C, KC_L) {
      register_code(KC_LGUI);
          register_code(KC_SPC);
          unregister_code(KC_SPC);
      unregister_code(KC_LGUI);
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
    SEQ_THREE_KEYS(KC_S, KC_P, KC_W) {
      SEND_STRING("WHAAATT");
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
#define _LAYER4 4
#define _LAYER5 5

enum {
    UNDO,
    COPY, 
    CUT, 
    PASTE, 
};
// Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // simple tap dance
    [COPY] = ACTION_TAP_DANCE_DOUBLE(KC_C, LCTL(KC_C)), // replace with your keycodes. BASIC codes only, no custom codes.
    [PASTE] = ACTION_TAP_DANCE_DOUBLE(KC_V, LCTL(KC_V)), // replace with your keycodes. BASIC codes only, no custom codes.
    [UNDO] = ACTION_TAP_DANCE_DOUBLE(KC_Z, LCTL(KC_Z)), // replace with your keycodes. BASIC codes only, no custom codes.
    [CUT] = ACTION_TAP_DANCE_DOUBLE(KC_X, LCTL(KC_X))

    // complex tap dance function (to specify what happens when key is pressed 3+ times, for example). See full docs for how to define
    // [YOUR_TAPDANCE_2] = ACTION_TAP_DANCE_FN(your_function_name),
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_LAYER0] = LAYOUT(KC_ESC,   LT(0,KC_1),      LT(0,KC_2),     LT(0,KC_3),     LT(0,KC_4),     LT(0,KC_5),                         LT(0,KC_6),     LT(0,KC_7),     LT(0,KC_8),     LT(0,KC_9),     LT(0,KC_0),     KC_BSPC,
                   KC_TAB,   LT(0,KC_Q),      LT(0,KC_W),     LT(0,KC_E),     LT(0,KC_R),     LT(0,KC_T),                         LT(0,KC_Y),     LT(0,KC_U),     LT(0,KC_I),     LT(0,KC_O),     LT(0,KC_P),     KC_LBRC,
                   KC_LCTL,  LT(0,KC_A),      LT(0,KC_S),     LT(0,KC_D),     LT(0,KC_F),     LT(0,KC_G),                         LT(0,KC_H),     LT(0,KC_J),     LT(0,KC_K),     LT(0,KC_L),     LT(0,KC_SCLN),  LT(0,KC_QUOT), 
                   KC_LSFT,  LT(0,KC_Z),      LT(0,KC_X),     LT(0,KC_C),     LT(0,KC_V),     LT(0,KC_B), KC_NO,   KC_LEAD, LT(0,KC_N),     LT(0,KC_M),     LT(0,KC_COMM),  LT(0,KC_DOT),   LT(0,KC_SLSH),  KC_ENT, 
                   KC_LGUI,  KC_LALT,   OSL(1),    KC_BSPC,                                                               KC_SPC,   MO(2),    KC_BSPC,  TG(3)),
 
[_LAYER1] = LAYOUT(TO(0),  KC_F1,     KC_F2,    KC_F3,    KC_F4,    KC_F5,                    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,
                   KC_F1,    KC_DQUO,   KC_F3,    KC_F4,    KC_F5,    KC_NO,                    KC_LBRC,  KC_RBRC,  KC_EQL,   KC_F10,   KC_F11,   KC_F12, 
                   KC_GRV,   KC_EXLM,   KC_AT,    KC_HASH,  KC_DLR,   KC_NO,                    KC_LPRN,  KC_RPRN,  KC_MINS,  KC_SLSH,  KC_HASH,  KC_TILD, 
                   KC_TRNS,  KC_TRNS,   TG(2),  TG(3),  TG(4),  KC_NO, KC_NO,      TO(0), KC_LCBR,  KC_RCBR,  KC_PLUS,  KC_BSLS,  KC_AMPR,  KC_PIPE, 
                   KC_TRNS,  KC_TRNS,   KC_ENT,  KC_ENT,                                                          KC_ENT,  MO(3),    KC_TRNS,  KC_TRNS),

[_LAYER2] = LAYOUT(TO(0), KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                   KC_GRV,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,                    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,  KC_TRNS, 
                   KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DEL,  KC_NO, 
                   KC_F7,   KC_F8,    KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_NO,  TO(0), KC_PLUS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, 
                   KC_TRNS, KC_TRNS,  MO(3),   KC_TRNS,                                                     KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS),

[_LAYER3] = LAYOUT(TO(0),   KC_NO,    KC_NO,   KC_NO,   KC_WH_L, KC_WH_R,                 KC_NO,   KC_7,     KC_8,     KC_9,   KC_NO,   KC_NO,   
                   KC_NO,   KC_BTN1,  KC_MS_U, KC_BTN2, KC_NO,   KC_WH_U,                 KC_NO,   KC_4,     KC_5,     KC_6,   KC_PLUS,     KC_NO, 
                   KC_NO,   KC_MS_L,  KC_MS_D, KC_MS_R, KC_BTN1, KC_WH_D,                 KC_MS_U, KC_1,     KC_2,     KC_3,   KC_ENT,   KC_NO, 
                   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,   TO(0), KC_NO,   KC_0,     KC_NO,   KC_COMM,   KC_NO,   KC_NO, 
                   KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,                                                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER4] = LAYOUT(KC_ESC,  KC_1,      KC_2,       KC_3,          KC_4,        KC_BSPC,                  KC_6,    KC_7,     KC_8,     KC_9,     KC_0,     KC_BSPC,
                   KC_TAB,  KC_DEL,    KC_PGUP,    LCTL(KC_SLSH), LCTL(KC_Y),  KC_F7,                    KC_HOME, KC_PGDN,  KC_PGUP,  KC_END,   KC_INS,  KC_TRNS, 
                   KC_LCTL, KC_HOME,   KC_PGDN,    KC_END,        LCTL(KC_F),  LALT(LSFT(KC_A)),         KC_LEFT, KC_DOWN,  KC_UP,    KC_RGHT,  KC_DEL,  KC_NO, 
                   KC_LSFT, LCTL(KC_Z),LCTL(KC_X), LCTL(KC_C),    LCTL(KC_V),  KC_SPC,  KC_NO,    TO(0), KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT, 
                   KC_LGUI, KC_LALT,   TO(0),      KC_ENT,                                               KC_SPC,   MO(2),    KC_BSPC,  TG(3)),
[_LAYER5] = LAYOUT(TO(0), KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                   KC_GRV,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,                    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,  KC_TRNS, 
                   KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DEL,  KC_NO, 
                   KC_F7,   KC_F8,    KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_NO,  TO(0), KC_PLUS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, 
                   KC_TRNS, KC_TRNS,  MO(3),   KC_TRNS,                                                     KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS),
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
