/*
 * File:   newmain.c
 * Author: batuhan osma
 *
 * Created on 27 ?ubat 2017 Pazartesi, 08:54
 */


#include <xc.h>
#define _XTAL_FREQ 4000000

unsigned char sayi; //char 8 bit old. icin char kullandik.bitlerle ugrasacagimiz icin
void main(void) {
    
    TRISB=0;
    sayi=1;
    while(1)
    {
        while(sayi<128)
        {
        PORTB=sayi;
        sayi=sayi*2;
        //sayi=sayi<<1;
        __delay_ms(100);
        }
        
        while(sayi>1)
        {
        PORTB=sayi;
        sayi=sayi/2;
        //sayi=sayi>>1;
        __delay_ms(100);
        }
        
        
    }
    return;
}
