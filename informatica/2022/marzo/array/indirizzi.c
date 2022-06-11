/*
11 marzo 2022 Its Marchi Robert

Realizzare un programma che stampi gli indirizzi di memoria di un array di char e un array di int.

input - array di char e array di int
output - indirizzi di memoria

utilizzo %p 
*/

#include<stdio.h>
#define ITEM 8

int main(void)
{
    char lettere[ITEM];
    int numeri[ITEM];
    
    printf("\nStampo l'indirizzo di memoria di lettere[i]\n");
    for(int i = 0; i < ITEM; i++)
    {
        printf("\n%p lettere[%d]", &lettere[i], i);
    }
    
    printf("\n\nStampo l'indirizzo di memoria di numeri[i]\n");
    for(int i = 0; i < ITEM; i++)
    {
        printf("\n%p numeri[%d]", &numeri[i], i);
    }
    
    printf("\n\nIl primo array essendo dichiarato come char \ngli viene allocato 1 byte per ciascun elemento\n");
    printf("invece il secondo array e dichiarato come int \ne gli viene allocato 4 byte per ciascun elemento\n");
    printf("\n\n");
    return 0;
}
