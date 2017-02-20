/*
 * File:   newmain.c
 * Author: batuhan osma
 *
 * Created on 20 ?ubat 2017 Pazartesi, 10:06
 *
 ***Yanıp sönen led örneği
 */


#include <xc.h>

#define _XTAL_FREQ 4000000

void main(void)
{
    TRISB0=0;
    
    for(;;)
    {
        RB0=1;
        __delay_ms(500);
        RB0=0;
        __delay_ms(500);
    }
    return;
}
