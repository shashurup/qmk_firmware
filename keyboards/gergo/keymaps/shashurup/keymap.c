/* Good on you for modifying your layout! if you don't have
 * time to read the QMK docs, a list of keycodes can be found at
 *
 * https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
 *
 * There's also a template for adding new layers at the bottom of this file!
 */

#include QMK_KEYBOARD_H

#define BASE 0 // default layer
#define SYMB 1 // symbols
#define NUMB 2 // numbers/motion

// Blank template at the bottom

enum customKeycodes {
	URL  = 1
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,---------------------------------------------.                         ,---------------------------------------------.
 * |   Tab    |   Q  |   W  |   E  |   R  |   T  |                         |   Y  |   U  |   I  |   O  |   P  |    \ |   |
 * |----------+------+------+------+------+------|------.           .------|------+------+------+------+------+----------|
 * |  Caps    |   A  |   S  |   D  |   F  |   G  |   [  |           |  ]   |   H  |   J  |   K  |   L  | ;  : |    ' "   |
 * |----------+------+------+------+------+------|------|           |------|------+------+------+------+------+----------|
 * | LShift/( |   Z  |   X  |   C  |   V  |   B  |   =  |           |  -   |   N  |   M  | ,  < | . >  | /  ? | RShift/( |
 * `----------+------+------+------+------+-------------'           `-------------+------+------+------+------+----------'
 *                                              ,-------.           ,-------.
 *                                              | LCtrl |           | RCtrl |
 *      .------.   .---------.          ,-------|-------|           |-------|-------.  .----------.   .-----------.
 *      | LAlt |   | Space/1 |          | Esc/2 | LGUI  |           | RGUI  | Ent/2 |  | Space/1  |   | RAlt/Bspc |
 *      '------'   '---------'          `---------------'           `---------------'  `----------'   '-----------'
 */
[BASE] = LAYOUT_gergo(
    KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,                                             KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_BSLS,
    KC_CAPS, KC_A,  KC_S,  KC_D,  KC_F,  KC_G, KC_LBRACKET,                KC_RBRACKET,    KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_QUOT,
    KC_LSPO, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B, KC_EQL,   KC_LCTRL,   KC_RCTRL, KC_MINS,    KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSPC,
                  KC_LALT, LT(1, KC_SPC), LT(2, KC_ESC), KC_LGUI,    KC_RGUI, LT(2, KC_ENT), LT(1, KC_SPC), RALT_T(KC_BSPACE)
    ),
/* Keymap 1: Symbols layer
 *
 * ,-------------------------------------------.                         ,-------------------------------------------.
 * |   ~    |  1   |  2   |  3   |  4   |  5   |                         |   6  |  7   |  8   |  9   |  0   |        |
 * |--------+------+------+------+------+------|------.           .------|------+------+------+------+------+--------|
 * |   `    |  !   |  @   |  #   |  $   |  %   |      |           |      |   ^  |  &   |  *   |  (   |  )   |        |
 * |--------+------+------+------+------+------|------|           |------|------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *                        .------.   .------.                                 .------.   .-----.
 *                        |      |   |      |                                 |      |   |     |
 *                        '------'   '------'                                 `------.   '-----'
 *                                        ,-------.                     ,-------.
 *                                        |       |                     |       |
 *                                 ,------|-------|                     |-------|------.
 *                                 |      |       |                     |       |      |
 *                                 |      |       |                     |       |      |
 *                                 |      |       |                     |       |      |
 *                                 `--------------'                     `--------------'
 */
[SYMB] = LAYOUT_gergo(
    KC_TILD,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,                                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,
    KC_GRAVE, KC_EXLM, KC_AT,   KC_HASH, KC_DLR, KC_PERC,  KC_TRNS,                       KC_TRNS,  KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS,
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
/* Keymap 2: Pad/Function layer
 *
 * ,-------------------------------------------.                         ,-------------------------------------------.
 * |        |      |      |      |      |      |                         | Home | PgDn | PgUp | End  |      |        |
 * |--------+------+------+------+------+------|------.           .------|------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      | Left | Down |  Up  |Right |      |        |
 * |--------+------+------+------+------+------|------|           |------|------+------+------+------+------+--------|
 * |        |  F1  | F2   |  F3  |  F4  |  F5  |  F6  |           |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *                        .------.   .------.                                 .------.   .-----.
 *                        |      |   |      |                                 |      |   |     |
 *                        '------'   '------'                                 `------.   '-----'
 *                                        ,-------.                     ,-------.
 *                                        |       |                     |       |
 *                                 ,------|-------|                     |-------|------.
 *                                 |      |       |                     |       |      |
 *                                 |      |       |                     |       |      |
 *                                 |      |       |                     |       |      |
 *                                 `--------------'                     `--------------'
 */
[NUMB] = LAYOUT_gergo(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                          KC_HOME, KC_PGDOWN, KC_PGUP, KC_END,   KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_LEFT, KC_DOWN,   KC_UP,   KC_RIGHT, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,  KC_TRNS,      KC_TRNS,  KC_F7,   KC_F8,   KC_F9,     KC_F10,  KC_F11,   KC_F12,  KC_TRNS,
                                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
    ),
};

/* Keymap template
 *
 * ,-------------------------------------------.                         ,-------------------------------------------.
 * |        |      |      |      |      |      |                         |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|------.           .------|------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|------|           |------|------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *                        .------.   .------.                                 .------.   .-----.
 *                        |      |   |      |                                 |      |   |     |
 *                        '------'   '------'                                 `------.   '-----'
 *                                        ,-------.       ,-------.
 *                                        |       |       |       |
 *                                 ,------|-------|       |-------|------.
 *                                 |      |       |       |       |      |
 *                                 |      |       |       |       |      |
 *                                 |      |       |       |       |      |
 *                                 `--------------'       `--------------'
[SYMB] = LAYOUT_gergo(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
 */
