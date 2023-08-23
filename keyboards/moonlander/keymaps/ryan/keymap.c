#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_uk.h"
#include "keymap_steno.h"

#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_REDO LCTL(KC_Y)
#define KC_PC_CUT  LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PSTE LCTL(KC_V)

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // base
  [0] = LAYOUT_moonlander(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    KC_LBRC,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TG(8),                         XXXXXXX,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_RBRC,
    UK_GRV,         LGUI_T(KC_A),   LALT_T(KC_S),   LCTL_T(KC_D),   LSFT_T(KC_F),   RALT_T(KC_G),   TG(7),                         XXXXXXX,        RALT_T(KC_H),   RSFT_T(KC_J),   RCTL_T(KC_K),   LALT_T(KC_L),   RGUI_T(KC_SCOLON),UK_QUOT,
    UK_BSLS,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                                          KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLSH,        UK_HASH,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        LT(6,KC_DEL),                   XXXXXXX,                       XXXXXXX,                        LT(3,KC_ESC),   XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
                                                                    LT(4,KC_SPC),   LT(5,KC_TAB),   XXXXXXX,                       XXXXXXX,        LT(2,KC_ENT),   LT(1,KC_BSPC)
  ),

  // numbers
  [1] = LAYOUT_moonlander(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        KC_MINUS,       KC_7,           KC_8,           KC_9,           KC_EQUAL,       XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        KC_0,           KC_4,           KC_5,           KC_6,           UK_ASTR,        XXXXXXX,                       XXXXXXX,        KC_LALT,        KC_RSFT,        KC_RCTRL,       KC_LALT,        KC_RGUI,        XXXXXXX,
    XXXXXXX,        KC_DOT,         KC_1,           KC_2,           KC_3,           KC_SLSH,                                                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                        XXXXXXX,                       XXXXXXX,                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
                                                                    XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        _______
  ),
  // symbols
  [2] = LAYOUT_moonlander(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        KC_LCBR,        KC_AMPR,        UK_ASTR,        KC_LPRN,        KC_RCBR,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        UK_NOT,         UK_DLR,         UK_PERC,        UK_CIRC,        UK_PLUS,        XXXXXXX,                       XXXXXXX,        KC_LALT,        KC_RSFT,        KC_RCTRL,       KC_LALT,        KC_RGUI,        XXXXXXX,
    XXXXXXX,        UK_TILD,        KC_EXLM,        UK_DQUO,        UK_PND,         UK_PIPE,                                                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        UK_AT,                          XXXXXXX,                       XXXXXXX,                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
                                                                    KC_RPRN,        KC_UNDS,        XXXXXXX,                       XXXXXXX,        _______,        XXXXXXX
  ),
  // function
  [3] = LAYOUT_moonlander(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_PSCR,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_APP,         XXXXXXX,                       XXXXXXX,        KC_LALT,        KC_RSFT,        KC_RCTRL,       KC_LALT,        KC_RGUI,        XXXXXXX,
    XXXXXXX,        KC_F10,         KC_F1,          KC_F2,          KC_F3,          XXXXXXX,                                                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                        XXXXXXX,                       XXXXXXX,                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
                                                                    XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX
  ),

  // navigation
  [4] = LAYOUT_moonlander(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        KC_PC_REDO,     KC_PC_PSTE,     KC_PC_COPY,     KC_PC_CUT,      KC_PC_UNDO,     XXXXXXX,
    XXXXXXX,        KC_LGUI,        KC_LALT,        KC_LCTRL,       KC_LSFT,        KC_RALT,        XXXXXXX,                       XXXXXXX,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_CAPSLOCK,    XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                                       KC_INS,         KC_HOME,        KC_PGUP,        KC_PGDOWN,      KC_END,         XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                        XXXXXXX,                       XXXXXXX,                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
                                                                    _______,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX
  ),
  // mouse
  [5] = LAYOUT_moonlander(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        KC_PC_REDO,     KC_PC_PSTE,     KC_PC_COPY,     KC_PC_CUT,      KC_PC_UNDO,     XXXXXXX,
    XXXXXXX,        KC_LGUI,        KC_LALT,        KC_LCTRL,       KC_LSFT,        KC_RALT,        XXXXXXX,                       XXXXXXX,        KC_MS_L,        KC_MS_D,        KC_MS_U,        KC_MS_R,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                                       KC_WH_L,        KC_WH_D,        KC_WH_U,        KC_WH_R,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                        XXXXXXX,                       XXXXXXX,                        KC_BTN2,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
                                                                    XXXXXXX,        _______,        XXXXXXX,                       XXXXXXX,        KC_MS_BTN3,     KC_BTN1
  ),
  // xf86
  [6] = LAYOUT_moonlander(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        KC_LGUI,        KC_LALT,        KC_LCTRL,       KC_LSFT,        KC_RALT,        XXXXXXX,                       XXXXXXX,        KC_MPRV,        KC_VOLD,        KC_VOLU,        KC_MPRV,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                                       XXXXXXX,        KC_BRID,        KC_BRIU,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                        XXXXXXX,                       XXXXXXX,                        KC_MUTE,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
                                                                    XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        KC_MSTP,        KC_MPLY
  ),

  // board
  [7] = LAYOUT_moonlander(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       DT_PRNT,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       DT_UP,          XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        _______,                       DT_DOWN,        XXXXXXX,        XXXXXXX,        RGB_SAD,        RGB_SAI,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                                       XXXXXXX,        XXXXXXX,        RGB_HUD,        RGB_HUI,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                        RGB_MOD,                       RGB_TOG,                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        RESET,
                                                                    RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,            RGB_SLD,        RGB_SPD,        RGB_SPI
  ),
  // steno
  [8] = LAYOUT_moonlander(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        QK_STENO_BOLT,                 QK_STENO_GEMINI,STN_FN,         STN_RES1,       STN_RES2,       XXXXXXX,        XXXXXXX,        STN_PWR,
    XXXXXXX,        STN_N1,         STN_N2,         STN_N3,         STN_N4,         STN_N5,         _______,                       XXXXXXX,        STN_N6,         STN_N7,         STN_N8,         STN_N9,         STN_NA,         STN_NB,
    XXXXXXX,        STN_S1,         STN_TL,         STN_PL,         STN_HL,         STN_ST1,        XXXXXXX,                       XXXXXXX,        STN_ST3,        STN_FR,         STN_PR,         STN_LR,         STN_TR,         STN_DR,
    XXXXXXX,        STN_S2,         STN_KL,         STN_WL,         STN_RL,         STN_ST2,                                                       STN_ST4,        STN_RR,         STN_BR,         STN_GR,         STN_SR,         STN_ZR,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        STN_NC,                         XXXXXXX,                       XXXXXXX,                        STN_NC,         XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
                                                                    STN_A,          STN_O,          XXXXXXX,                       XXXXXXX,        STN_E,          STN_U
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204} },

    [1] = { {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204} },

    [2] = { {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204} },

    [3] = { {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204} },

    [4] = { {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204} },

    [5] = { {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204} },

    [6] = { {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204} },

    [7] = { {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {0,0,255}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {74,255,255}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204} },

    [8] = { {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {0,0,255}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return;
  }
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}
