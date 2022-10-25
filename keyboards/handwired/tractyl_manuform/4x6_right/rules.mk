# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Build Options
#   change yes to no to disable
#
#BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = no       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
AUTO_SHIFT_ENABLE = yes
NKRO_ENABLE = no           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
RGB_MATRIX_ENABLE = no
#RGB_MATRIX_DRIVER = WS2812
F_CPU = 8000000


POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360
MOUSE_SHARED_EP = yes

SPLIT_KEYBOARD = yes
