# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
AUDIO_ENABLE = no
ORYX_ENABLE = yes
STENO_ENABLE = yes
STENO_PROTOCOL = geminipr
KEYBOARD_SHARED_EP = yes
SPACE_CADET_ENABLE = no
DYNAMIC_TAPPING_TERM_ENABLE = yes
CAPS_WORD_ENABLE = yes
AUTOCORRECT_ENABLE = yes
SRC = matrix.c
