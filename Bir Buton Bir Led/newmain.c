/*
 * File:   newmain.c
 * Author: batuhan osma
 *
 * Created on 27 ?ubat 2017 Pazartesi, 09:48
 */

#include <xc.h>
#define _XTAL_FREQ 4000000

#define BUTON RB1 //her seferinde semaya bakmamak icin definela elemanlar tanimlanabilir
#define LED RB4
void main(void) 
{
    TRISB1=1;//buton giris
    TRISB4=0;//led cikis
    
    for(;;)
    {
        if(BUTON==0)//butona bas?l? ise(lojik 0)
        {
            LED=1;//ledi yak
        }
        else//butona bas?l? de?ilse
        {
            LED=0;//ledi sondur
        }
    }
    
    return;
}
