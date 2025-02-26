/* Copyright 2019 COSEYFANNITUTTI
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

// use atmega32a in QMK Toolkit


enum {
    _BASE = 0,
    _FN,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_65_ansi_iso_lshift(
    //  esc      1        2        3        4        5        6        7        8        9        0        -        =        bkspc    delete
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,
    //  tab      Q        W        E        R        T        Y        U        I        O        P        [        ]        \        page up
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,
    //  caps     A        S        D        F        G        H        J        K        L        ;        '             enter        pg down
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,      KC_ENT,      KC_PGDN,
    //  shift    soup     Z        X        C        V        B        N        M        ,        .        /        shift    up       end
        KC_LSFT, MO(_FN), KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_END,
    //  ctrl     win      alt                              space                         alt      fn       ctrl     left     down     right
        KC_LCTL, KC_LGUI, KC_LALT,                         KC_SPC,                       KC_RALT, MO(_FN), KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT
    ),

    [_FN] = LAYOUT_65_ansi_iso_lshift(
    //  esc      1        2        3        4        5        6        7        8        9        0        -        =        bkspc    delete
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,  KC_INS,
    //  tab      Q        W        E        R        T        Y        U        I        O        P        [        ]        \        page up
        _______, _______, _______, _______, RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    //  caps     A        S        D        F        G        H        J        K        L        ;        '             enter        pg down
        KC_CAPS, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, _______, _______,      _______,     _______,
    //  shift    soup     Z        X        C        V        B        N        M        ,        .        /        shift    up       end
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MPLY, KC_VOLU, KC_HOME,
    //  ctrl     win      alt                              space                         alt      fn       ctrl     left     down     right
        _______, _______, _______,                         _______,                      _______, _______, _______, KC_MPRV, KC_VOLD, KC_MNXT
    )



    /*
    [1] = LAYOUT_65_ansi_iso_lshift(
    //  esc      1        2        3        4        5        6        7        8        9        0        -        =        bkspc    delete
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    //  tab      Q        W        E        R        T        Y        U        I        O        P        [        ]        \        page up
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    //  caps     A        S        D        F        G        H        J        K        L        ;        '             enter        pg down
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,     _______,
    //  shift    soup     Z        X        C        V        B        N        M        ,        .        /        shift    up       end
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    //  ctrl     win      alt                              space                         alt      fn       ctrl     left     down     right
        _______, _______, _______,                         _______,                      _______, _______, _______, _______, _______, _______
    )
    */
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
    return true;
}


