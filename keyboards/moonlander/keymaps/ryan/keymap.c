#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_uk.h"
#include "keymap_steno.h"

#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_REDO LCTL(KC_Y)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // base
  [0] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TG(8),                         KC_NO,          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_NO,
    KC_NO,MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),MT(MOD_RALT, KC_G),TG(7),                    KC_NO,MT(MOD_RALT, KC_H),MT(MOD_RSFT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_LALT, KC_L),MT(MOD_RGUI, KC_SCOLON),KC_NO,
    KC_NO,          KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                                          KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          LT(6,KC_DELETE),                KC_NO,                         KC_NO,                          LT(4,KC_ESCAPE),KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                    LT(1,KC_SPACE), LT(5,KC_TAB),   KC_NO,                         KC_NO,          LT(3,KC_ENTER), LT(2,KC_BSPACE)
  ),
  // navigation
  [1] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                         KC_NO,          KC_PC_REDO,     KC_PC_PASTE,    KC_PC_COPY,     KC_PC_CUT,      KC_PC_UNDO,     KC_NO,
    KC_NO,          KC_LGUI,        KC_LALT,        KC_LCTRL,       KC_LSHIFT,      KC_RALT,        KC_NO,                         KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_CAPSLOCK,    KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                         KC_INSERT,      KC_HOME,        KC_PGUP,        KC_PGDOWN,      KC_END,         KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                          KC_NO,                         KC_NO,                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                    KC_TRANSPARENT, KC_NO,          KC_NO,                         KC_NO,          KC_NO,          KC_NO
  ),
  // numbers
  [2] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_LBRACKET,    KC_7,           KC_8,           KC_9,           KC_RBRACKET,    KC_NO,                         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          UK_GRV,         KC_4,           KC_5,           KC_6,           KC_EQUAL,       KC_NO,                         KC_NO,          KC_LALT,        KC_RSHIFT,      KC_RCTRL,       KC_LALT,        KC_RGUI,        KC_NO,
    KC_NO,          UK_HASH,        KC_1,           KC_2,           KC_3,           UK_BSLS,                                                       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          UK_QUOT,                        KC_NO,                         KC_NO,                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                    KC_0,           KC_MINUS,       KC_NO,                         KC_NO,          KC_NO,          KC_TRANSPARENT
  ),
  // symbols
  [3] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_LCBR,        KC_AMPR,        UK_ASTR,        KC_LPRN,        KC_RCBR,        KC_NO,                         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          UK_NOT,         UK_DLR,         UK_PERC,        UK_CIRC,        UK_PLUS,        KC_NO,                         KC_NO,          KC_LALT,        KC_RSHIFT,      KC_RCTRL,       KC_LALT,        KC_RGUI,        KC_NO,
    KC_NO,          UK_TILD,        KC_EXLM,        UK_DQUO,        UK_PND,         UK_PIPE,                                                       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          UK_AT,                          KC_NO,                         KC_NO,                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                    KC_RPRN,        KC_UNDS,        KC_NO,                         KC_NO,          KC_TRANSPARENT, KC_NO
  ),
  // function
  [4] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_PSCREEN,     KC_NO,                         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_APPLICATION, KC_NO,                         KC_NO,          KC_LALT,        KC_RSHIFT,      KC_RCTRL,       KC_LALT,        KC_RGUI,        KC_NO,
    KC_NO,          KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_NO,                                                         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                          KC_NO,                         KC_NO,                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                    KC_NO,          KC_NO,          KC_NO,                         KC_NO,          KC_NO,          KC_NO
  ),
  // mouse
  [5] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                         KC_NO,          LCTL(KC_Y),     KC_PC_PASTE,    KC_PC_COPY,     KC_PC_CUT,      KC_PC_UNDO,     KC_NO,
    KC_NO,          KC_LGUI,        KC_LALT,        KC_LCTRL,       KC_LSHIFT,      KC_RALT,        KC_NO,                         KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                         KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                          KC_NO,                         KC_NO,                          KC_MS_BTN2,     KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                    KC_NO,          KC_TRANSPARENT, KC_NO,                         KC_NO,          KC_MS_BTN3,     KC_MS_BTN1
  ),
  // xf86
  [6] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_LGUI,        KC_LALT,        KC_LCTRL,       KC_LSHIFT,      KC_RALT,        KC_NO,                         KC_NO,          KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_NEXT_TRACK,KC_NO, KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                         KC_NO,          KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_NO,      KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                          KC_NO,                         KC_NO,                          KC_AUDIO_MUTE,  KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                    KC_NO,          KC_NO,          KC_NO,                         KC_NO,          KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE
  ),
  // board
  [7] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                         DT_PRNT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                         DT_UP,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          AC_ON,          AC_OFF,         AC_TOGG,        KC_NO,          KC_TRANSPARENT,                DT_DOWN,        KC_NO,          KC_NO,          RGB_SAD,        RGB_SAI,        KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                         KC_NO,          KC_NO,          RGB_HUD,        RGB_HUI,        KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                          RGB_MOD,                       RGB_TOG,                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          RESNO 
                                                                    RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,            RGB_SLD,        RGB_SPD,        RGB_SPI
  ),
  // steno
  [8] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_STENO_BOLT,                 QK_STENO_GEMINI,STN_FN,         STN_RES1,       STN_RES2,       KC_NO,          KC_TRANSPARENO,
    KC_NO,          STN_N1,         STN_N2,         STN_N3,         STN_N4,         STN_N5,         KC_TRANSPARENT,                KC_NO,          STN_N6,         STN_N7,         STN_N8,         STN_N9,         STN_NA,    NO,
    KC_NO,          STN_S1,         STN_TL,         STN_PL,         STN_HL,         STN_ST1,        KC_NO,                         KC_NO,          STN_ST3,        STN_FR,         STN_PR,         STN_LR,         STN_TR,    NO,
    KC_NO,          STN_S2,         STN_KL,         STN_WL,         STN_RL,         STN_ST2,                                                       STN_ST4,        STN_RR,         STN_BR,         STN_GR,         STN_SR,    NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          STN_NC,                         KC_NO,                         KC_NO,                          STN_NC,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                    STN_A,          STN_O,          KC_NO,                         KC_NO,          STN_E,          STN_U
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
