/*
 * File:   newmain.c
 * Author: batuhan osma
 *
 * Created on 28 ?ubat 2017 Sal?, 21:46
 * **tek buton ile ledi yak?p sondurme
 */


#include <xc.h>
#define _XTAL_FREQ 4000000

#define BUTON RB1
#define LED RB4

bit b_simdiki,b_onceki;
bit isLedOn;
void main(void) {
    
    TRISB1=1;
    TRISB4=0;
    isLedOn=0;
  //  b_onceki=BUTON;
    for (;;) 
    {
        b_simdiki=BUTON;
        
        if(b_simdiki != b_onceki)
        {
            b_onceki=b_simdiki;
            if(b_simdiki==0)
            { 
                if(isLedOn==0)
                {
                    isLedOn=1;
                }
                else
                {
                    isLedOn=0;
                }   
            }
        }
        LED=isLedOn;
    }

    return;
}
