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
    XXXXXXX,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TG(4),                         KC_LBRC,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_RBRC,
    KC_ESC,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TG(3),                         KC_EQUAL,       KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_DEL,
    UK_GRV,         KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           TG(2),                         KC_MINUS,       KC_H,           KC_J,           KC_K,           KC_L,           KC_SEMICOLON,   UK_QUOT,
    UK_BSLS,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                                          KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLSH,        UK_HASH,
    XXXXXXX,        KC_LGUI,        KC_LALT,        KC_LCTL,        KC_LSFT,                        OSL(1),                        OSL(1),                         KC_RSFT,        KC_RCTL,        KC_RALT,        KC_RGUI,        XXXXXXX,
                                                                    KC_SPC,         KC_TAB,         TG(1),                         TG(1),          KC_ENT,         KC_BSPC
  ),
  // raise
  [1] = LAYOUT_moonlander(
    XXXXXXX,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F11,                        KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        KC_BRID,        KC_BRIU,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        KC_HOME,        KC_END,         KC_APP,         KC_PSCR,        KC_PAUS,
    XXXXXXX,        XXXXXXX,        KC_MPRV,        KC_VOLD,        KC_VOLU,        KC_MNXT,        XXXXXXX,                       XXXXXXX,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       XXXXXXX,        KC_INS,
    KC_MSTP,        XXXXXXX,        XXXXXXX,        KC_MPLY,        KC_MUTE,        XXXXXXX,                                                       XXXXXXX,        KC_CAPS_LOCK,   CW_TOGG,        XXXXXXX,        XXXXXXX,        KC_SCRL,
    XXXXXXX,        _______,        _______,        _______,        _______,                        XXXXXXX,                       XXXXXXX,                        _______,        _______,        _______,        _______,        XXXXXXX,
                                                                    XXXXXXX,        XXXXXXX,        _______,                       _______,        XXXXXXX,        XXXXXXX
  ),
  // mouse
  [2] = LAYOUT_moonlander(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        _______,                       XXXXXXX,        KC_MS_L,        KC_MS_D,        KC_MS_U,        KC_MS_R,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                                       KC_WH_L,        KC_WH_D,        KC_WH_U,        KC_WH_R,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                        XXXXXXX,                       XXXXXXX,                        KC_BTN3,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
                                                                    XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        KC_BTN2,        KC_BTN1
  ),
  // board
  [3] = LAYOUT_moonlander(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       DT_PRNT,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        _______,                       DT_UP,          XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        AC_ON,          AC_OFF,         AC_TOGG,        XXXXXXX,        XXXXXXX,                       DT_DOWN,        XXXXXXX,        XXXXXXX,        RGB_SAD,        RGB_SAI,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                                       XXXXXXX,        XXXXXXX,        RGB_HUD,        RGB_HUI,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                        RGB_MOD,                       RGB_TOG,                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        QK_BOOT,
                                                                    RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,            RGB_SLD,        RGB_SPD,        RGB_SPI
  ),
  // steno
  [4] = LAYOUT_moonlander(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        _______,                       QK_STENO_GEMINI,STN_FN,         STN_RES1,       STN_RES2,       XXXXXXX,        XXXXXXX,        STN_PWR,
    XXXXXXX,        STN_N1,         STN_N2,         STN_N3,         STN_N4,         STN_N5,         XXXXXXX,                       QK_STENO_BOLT,  STN_N6,         STN_N7,         STN_N8,         STN_N9,         STN_NA,         STN_NB,
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

#define BASE_COLOUR {0,0,255}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
  [0] = {
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,

    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
  },
  [1] = {
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    {1,218,204},    BASE_COLOUR,

    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    {1,218,204},    BASE_COLOUR,
  },
  [2] = {
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    {1,218,204},
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,

    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
  },
  [3] = {
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    {1,218,204},    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,

    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    {74,255,255},
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
  },
  [4] = {
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    {1,218,204},    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,

    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
  },
};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
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

bool rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return false; }
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
    case 9:
      set_layer_color(9);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}
