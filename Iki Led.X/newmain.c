/*
 * File:   newmain.c
 * Author: batuhan osma
 *
 * Created on 20 ?ubat 2017 Pazartesi, 21:50
 */


#include <xc.h>

#define _XTAL_FREQ 4000000

void main(void) 
{
    TRISB0=0;
    TRISB6=0;
    
    for(;;)
    {
        RB0=1;
        __delay_ms(500);
        RB0=0;
        __delay_ms(500);
        RB6=1;
        __delay_ms(500);
        RB6=0;
        __delay_ms(500);
    }
     return;
}