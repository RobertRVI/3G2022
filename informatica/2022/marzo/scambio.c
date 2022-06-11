/*
17 marzo Montecatini Terme Robert

Scambio tra due variabili tramite funzioni 

input - due lettere
output - lettere scambiate tramite funzione

uso * per mantenere i valori dalla funzione
*/

#include<stdio.h>

int scambio(char *a, char *b);

int main(void)
{
    char vocale = 'A';
    char consonante = 'C';
    
    printf("\nPrendo due lettere '%c' e '%c'\ne le scambio\n", vocale, consonante);
    scambio(&vocale, &consonante);
    printf("'%c', '%c'", vocale, consonante);
    printf("\n\n");
    return 0;
}

int scambio(char *a, char *b)
{
    char tmp;
    
    tmp = *a;
    *a = *b;
    *b = tmp;
    
    return 0;
}
