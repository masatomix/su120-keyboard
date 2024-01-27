// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q      , KC_W    ,  KC_E    , KC_R     , KC_T,
        KC_A      , KC_S    ,  KC_D    , KC_F     , KC_G,
        KC_Z      , KC_X    ,  KC_C    , KC_V     , KC_B,
        _______   , KC_SPC  ,  _______ , KC_LGUI  , KC_LALT
    )
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW( KC_PAGE_DOWN,KC_PAGE_UP), ENCODER_CCW_CW(KC_VOLU,KC_VOLD)  }
    //                  Encoder 1                                     Encoder 2
};
#endif



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
// コンソールが有効化されている場合、マトリックス上の位置とキー押下状態を出力します
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif
  return true;
}


bool encoder_update_user(uint8_t index, bool clockwise) {
    #ifdef CONSOLE_ENABLE
    uprintf("EN: index: %u, clockwise: %u\n", index, clockwise);
#endif
    // if (index == 0) { /* First encoder */
    //     if (clockwise) {
    //         tap_code(KC_PGDN);
    //     } else {
    //         tap_code(KC_PGUP);
    //     }
    // } else if (index == 1) { /* Second encoder */
    //     if (clockwise) {
    //         tap_code(KC_PGDN);
    //     } else {
    //         tap_code(KC_PGUP);
    //     }
    // }
    // return false;
    return true;
}
