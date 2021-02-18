/*
 * File:   Semaforo.c
 * Author: 20185090
 *
 * Created on 17 de Fevereiro de 2021, 16:43
 */


#include <xc.h>

#define VERDE           PORTDbits.RD5  
#define AMARELO         PORTDbits.RD6 
#define VERMELHO        PORTDbits.RD7 
#define VERDEPED        PORTDbits.RD3 
#define VERMELHOPED     PORTDbits.RD4 
#define BOTAO           PORTDbits.RD1 

void semaforo_init(void)
{
    TRISDbits.TRISD1 = 1;   
    TRISDbits.TRISD3 = 0;
    TRISDbits.TRISD4 = 0;
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD7 = 0;

    VERMELHOPED = 0;
    VERDEPED = 0;
    VERDE = 0;
    AMARELO = 0;
    VERMELHO = 0;
}

void verde(int x)
{
    VERDE = x;
}

void amarelo(int x)
{
    AMARELO = x;
}

void vermelho(int x)
{
    VERMELHO = x;
}

void verdeped(int x)
{
    VERDEPED = x;
}

void vermelhoped(int x)
{
    VERMELHOPED = x;
}

int botao(void)
{
    return(BOTAO);
}