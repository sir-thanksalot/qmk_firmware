#include "piit79.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_preonic_grid( \
        KC_GRV,    KC_1,     KC_2,     KC_3,    KC_4,     KC_5,     KC_6,     KC_7,      KC_8,     KC_9,     KC_0,    KC_BSPC, \
        THRD_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,     KC_T,     KC_Y,     KC_U,      KC_I,     KC_O,     KC_P,    KC_DEL,  \
        LCTL_ESC,  KC_A,     KC_S,     KC_D,    KC_F,     KC_G,     KC_H,     KC_J,      KC_K,     KC_L,    KC_SCLN,  KC_QUOT, \
        KC_LSFT,   KC_Z,     KC_X,     KC_C,    KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT,  \
        FN1_WAKE,  KC_LCTL,  KC_LGUI,  KC_LALT, LOWER,   NAV_SPC,  NAV_SPC,   RAISE,    KC_LEFT,  KC_DOWN,   KC_UP,   KC_RGHT  \
    ),
    [_LOWER] = LAYOUT_preonic_grid( \
        KC_TILD,  KC_EXLM,   KC_AT,   KC_HASH,   KC_DLR,  KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_BSPC, \
        KC_TILD,  KC_EXLM,   KC_AT,   KC_HASH,   KC_DLR,  KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_DEL,  \
        KC_DEL,    KC_F1,    KC_F2,    KC_F3,    KC_F4,   KC_F5,    KC_F6,    KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_PIPE, \
        _______,   KC_F7,    KC_F8,    KC_F9,    KC_F10,  KC_F11,   KC_F12,   S(NUHS),  S(NUBS),  KC_HOME,  KC_END,   _______, \
        _______,  _______,  _______,  _______,  _______,  KC_SPC,   KC_SPC,   _______,  _______,  KC_RALT,  KC_APP,   _______  \
    ),
    [_RAISE] = LAYOUT_preonic_grid( \
        KC_GRV,    KC_1,     KC_2,     KC_3,     KC_4,    KC_5,     KC_6,      KC_7,     KC_8,     KC_9,     KC_0,    KC_BSPC, \
        KC_GRV,    KC_1,     KC_2,     KC_3,     KC_4,    KC_5,     KC_6,      KC_7,     KC_8,     KC_9,     KC_0,    KC_DEL,  \
        KC_DEL,    KC_F1,    KC_F2,    KC_F3,    KC_F4,   KC_F5,    KC_F6,    KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS, \
        _______,   KC_F7,    KC_F8,    KC_F9,    KC_F10,  KC_F11,   KC_F12,   KC_NUHS,  KC_NUBS,  KC_PGUP,  KC_PGDN,  _______, \
        _______,  _______,  _______,  _______,  _______,  KC_SPC,   KC_SPC,   _______,  KC_MPLY,  KC_VOLD,  KC_VOLU,  KC_MNXT  \
    ),
    [_NAV] = LAYOUT_preonic_grid( \
        KC_GRV,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_PGDN,   KC_UP,   KC_PGUP,  _______,  _______, \
        _______,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,   KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______, \
        _______,   KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,  KC_HOME,  _______,  KC_END,   _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______  \
    ),
    [_FN1] = LAYOUT_preonic_grid( \
        _______,  _______,  _______,  _______,  KC_SLEP,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______  \
    ),
    [_THIRD] = LAYOUT_preonic_grid( \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_BTN1,  KC_MS_U,  KC_BTN2,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MS_L,  KC_MS_D,  KC_MS_R,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______  \
    ),
    [_ADJ] = LAYOUT_preonic_grid( \
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RESET,   \
        _______,  _______,   DEBUG,   _______,  _______,  _______,  _______,  TERM_ON,  KC_VOLU,  _______,  _______,  KC_DEL,  \
        _______,  _______,   MU_MOD,   AU_ON,    AU_OFF,  AG_NORM,  AG_SWAP,  KC_MPRV,  KC_MPLY,  KC_MNXT,  _______,  _______, \
        _______,   MUV_DE,   MUV_IN,   MU_ON,    MU_OFF,   MI_ON,    MI_OFF,  _______,  KC_VOLD,  _______,  _______,  _______, \
        _______,  _______,  _______,  _______,  _______,   KC_SPC,   KC_SPC,  _______,  _______,  _______,  _______,  VERSION  \
    )
};


bool dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0:
            if (active) {
                layer_on(_ADJ);
            } else {
                layer_off(_ADJ);
            }
            break;
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
            }
    }
    return true;
}


void matrix_scan_keymap(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}

bool music_mask_keymap(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}
