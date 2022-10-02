# MCU name
MCU = STM32F103

# BOARD = STM32F103C8_MINIMAL

# Bootloader selection
BOOTLOADER = stm32duino
# BOOTLOADER = stm32-dfu

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
