/*
 * File:   newmain.c
 * Author: batuhan osma
 *
 * Created on 27 ?ubat 2017 Pazartesi, 10:41
 * **cola makinesi similasyonu
 * 
 */


#include <xc.h>
#define _XTAL_FREQ 4000000
#define BUTON_UP RA0
#define BUTON_DOWN RA1

unsigned char say;
bit bup_simdiki,bup_onceki;
bit bdown_simdiki,bdown_onceki;

void main(void) {
    
    TRISA0=1;
    TRISA1=1;
    TRISB=0;//butun b portunu output yapar
    say=1;
    
    for(;;)
    {
        bup_simdiki=BUTON_UP;
        bdown_simdiki=BUTON_DOWN;
        
        if(bup_simdiki != bup_onceki)
        {
            bup_onceki=bup_simdiki;
            if(bup_simdiki==0) //simdiki bas?l?ysa
            {
                if(say>1)
                {
                    say/=2;
                }                
            }
        }
        
        
        if(bdown_simdiki != bdown_onceki)
        {
            bdown_onceki=bdown_simdiki;
            if(bdown_simdiki==0)
            {
                if(say<128)
                {
                    say*=2;
                }
            }
        }
        
        PORTB=say;
    }
    return;
}
