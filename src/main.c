#include <gb/gb.h>
#include <stdint.h>

void scroll(void) {}

void main(void) {
    uint8_t i, j;
    disable_interrupts();
    DISPLAY_OFF;
    LCDC_REG = LCDCF_OFF | LCDCF_WIN9C00 | LCDCF_WINON | LCDCF_BG8800 | LCDCF_BG9800 | LCDCF_OBJ16 |
               LCDCF_OBJON | LCDCF_BGON;

    DISPLAY_ON;
    enable_interrupts();
    while (1) {
    }
}
