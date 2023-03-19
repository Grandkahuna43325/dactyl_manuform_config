#include QMK_KEYBOARD_H
#include keymap_polish.h


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [QWERTY] = LAYOUT_5x6(
        KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  , KC_BSPC,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  , KC_BSLS,
        KC_LSFT, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  , KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
                         KC_LBRC,LCTL(KC_C),                                                       LCTL(KC_V), KC_RBRC,
                                         KC_SPC, KC_LGUI,                        KS_RGUI, KC_ENT,
                                         KC_MINS,DF(MOUSE),                    KC_GRV, KC_EQL,
                                         KC_DEL, KC_GRV,                        KC_LGUI, KC_RALT
    ),

    [MOUSE] = LAYOUT_5x6(
       _______ , _______ , _______ , _______ , _______ , _______ ,                _______  , _______ , _______ , _______ ,_______ ,_______ ,
       _______ , _______ , KC_MS_U , _______ , _______ , _______ ,                _______  , _______ , KC_P7 , KC_P8 , KC_P9 ,_______ ,
       _______ , KC_MS_L , KC_MS_D , KC_MS_R , _______ , _______ ,                KC_BTN1  , KC_BTN2 , KC_P4 , KC_P5 , KC_P6 ,_______ ,
       _______ , _______ , DF(QWERTY),DF(RESET), _______ , _______ ,            _______  , _______ , KC_P1 , KC_P2 , KC_P3 ,_______ ,
                         _______ , _______,                                                   _______, _______,

                                                 KC_BRIU , KC_BRID ,             KC_VOLD, KC_VOLU,
                                                  KC_WH_U , _______,            _______, KC_WH_D ,
                                                  _______ , _______,            _______ , _______,
    ),

    [RESET] = LAYOUT_5x6(
       QK_BOOT , _______ , _______ , _______ , _______ , _______ ,                _______  , _______ , _______ , _______ ,_______ ,_______ ,
       DF(QWERTY) , _______ , _______ , _______ , _______ , _______ ,            _______  , _______ , _______ , _______ ,_______ ,_______ ,
       _______ , _______ , _______ , _______ , _______ , _______ ,                _______  , _______ , _______ , _______ ,_______ ,_______ ,
       _______ , _______ , _______ , _______ , _______ , _______ ,                _______  , _______ , _______ , _______ ,_______ ,_______ ,
                         _______,_______,                                                       _______, _______,

                                                  _______ , _______,            _______ , _______,
                                                  _______ , _______,            _______ , _______,
                                                  _______ , _______,            _______ , _______
    )
};
