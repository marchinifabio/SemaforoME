/*
 * File:   delay.c
 * Author: 20185090
 *
 * Created on 17 de Fevereiro de 2021, 16:58
 */


#include "config.h"
#include <xc.h>


void delay (unsigned int t)
{
    while( t )
    {
        --t;
        __delay_ms(1);
    }
}