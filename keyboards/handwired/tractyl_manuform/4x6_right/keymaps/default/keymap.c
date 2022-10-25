/* Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
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

#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT_4x6_right(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RALT, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_BSPC, KC_DEL, KC_SPC, KC_LCTL, KC_HOME, KC_ENT, TT(2), KC_LSFT, KC_LGUI, TT(1)),

[_LAYER1] = LAYOUT_4x6_right(QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PAST, KC_P7, KC_P8, KC_P9, KC_MINS, KC_EQL, KC_TRNS, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_PGDN, KC_PSLS, KC_P4, KC_P5, KC_P6, KC_PLUS, KC_PIPE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1, KC_P2, KC_P3, KC_TRNS, KC_UNDS, KC_TRNS, KC_PSCR, KC_P0, KC_DOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER2] = LAYOUT_4x6_right(KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_TRNS, KC_SCRL, DRGSCRL, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, DPI_MOD, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN4, KC_BTN5, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, DPI_RMOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, SNIPING, KC_TRNS, KC_TRNS, KC_EQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_UNDS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS) 

};
