# Build Options
#   change yes to no to disable
#
MCU = STM32F103
BOOTLOADER = stm32duino

OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
# CONSOLE_ENABLE = no         # Console for debug
CONSOLE_ENABLE = yes         # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output

SPLIT_KEYBOARD = yes

# SPLIT_TRANSPORT = custom

SERIAL_DRIVER = usart
