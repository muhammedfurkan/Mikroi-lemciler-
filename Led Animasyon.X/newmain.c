/*
 * File:   newmain.c
 * Author: batuhan osma
 *
 * Created on 27 ?ubat 2017 Pazartesi, 08:17
 */


#include <xc.h>
#define _XTAL_FREQ 4000000//kristal frekansi
void main(void) {
    
    TRISB=0;//port Bnin butun bitlerini cikis yap
    for(;;)
    {       
        PORTB=0b10000001; __delay_ms(100);
        PORTB=0b01000010; __delay_ms(100);
        PORTB=0b00100100; __delay_ms(100);
        PORTB=0b00011000; __delay_ms(100);
        PORTB=0b00011000; __delay_ms(100);
        PORTB=0b00100100; __delay_ms(100);
        PORTB=0b01000010; __delay_ms(100);
        PORTB=0b10000001; __delay_ms(100);
        PORTB=0b01000010; __delay_ms(100);
        PORTB=0b00100100; __delay_ms(100);
        PORTB=0b00011000; __delay_ms(100);
        PORTB=0b00011000; __delay_ms(100);
        PORTB=0b00100100; __delay_ms(100);
        PORTB=0b01000010; __delay_ms(100);
    }
    return;
}
