#include QMK_KEYBOARD_H
#include "debug.h"
#include "action_layer.h"

#define BASE 0  // default layer
#define FUNK 1  // function keys
#define NUMC 2  // numpad
#define MOUS 3  // mouse keys

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Keymap 0: Basic layer
    [BASE] = LAYOUT_ergodox(
        // Left hand
        KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_PGUP,
        LCTL_T(KC_ESCAPE), KC_A, KC_S, KC_D, KC_F, KC_G,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_PGDN,
        KC_LCTL, KC_LALT, KC_RCTL, KC_RALT, KC_LGUI,
        KC_NO, KC_CAPS_LOCK,
        MO(FUNK),
        KC_SPACE, KC_ENTER, TG(NUMC),
        // Right hand
        KC_DEL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
        KC_UP, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
        KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENTER,
        KC_DOWN, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSFT,
        KC_LBRC, KC_RBRC, KC_MINUS, KC_EQUAL, KC_QUOTE,
        KC_ESCAPE, TT(MOUS),
        KC_TAB,
        KC_SPACE, KC_LEFT, KC_RIGHT),
    // Keymap 1: Function key layer
    [FUNK] = LAYOUT_ergodox(
        // Left hand
        KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRNS,
        KC_TRNS, KC_F11, KC_F12, KC_F13, KC_F14, KC_F15, KC_TRNS,
        KC_TRNS, KC_F21, KC_F22, KC_F23, KC_F24, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,
        // Right hand
        KC_TRNS, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS,
        KC_TRNS, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS),
    // Keymap 2: numkeys
    [NUMC] = LAYOUT_ergodox(
        // Left hand
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,
        // Right hand
        KC_TRNS, KC_TRNS, KC_TRNS, KC_NUM_LOCK, KC_KP_SLASH, KC_KP_ASTERISK, KC_BSPC,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_MINUS,
        KC_TRNS, KC_TRNS, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_PLUS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_ENTER,
        KC_TRNS, KC_KP_0, KC_KP_DOT, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS),
    // Keymap 3: mouse keys
    [MOUS] = LAYOUT_ergodox(
        //Left hand
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_WH_UP, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_RIGHT,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_ACCEL0, KC_MS_ACCEL1, KC_MS_ACCEL2, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,
        // Right hand
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_MS_BTN1, KC_MS_UP, KC_MS_BTN3, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_MS_BTN2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS),
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void){

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case FUNK:
            ergodox_right_led_1_on();
            break;
        case NUMC:
            ergodox_right_led_2_on();
            break;
        case MOUS:
            ergodox_right_led_3_on();
            break;
        default:
            // none
            break;
    }
};
