/*
 * File:   newmain.c
 * Author: batuhan osma
 *
 * Created on 27 ?ubat 2017 Pazartesi, 10:20
 */


#include <xc.h>
#define _XTAL_FREQ 4000000

#define BUTON_ON RB1
#define BUTON_OFF RB2
#define LED RB4
void main(void) 
{
    TRISB1=1;
    TRISB2=1;
    TRISB4=0;
    
    for(;;)
    {
        if(BUTON_OFF==0)//off öncelikli devre
        {
            LED=0;
        }
        else if(BUTON_ON==0)//elseif içinde olmas? ikisinede basildiysa sonuk kals?n diye
        {
            LED=1;
        }
    }
    return;
}
