/*
10 febbraio 2022 Montecatini Terme Robert

Dichiare un array di 80 char, leggere n caratteri da tastiera e stampare i caratteri sullo schermo

input - N caratteri da tastiera
output - array con i carratteri

utilizzo while(), for(), printf(), scanf()
*/
#include<stdio.h>
#define CARATTERI 80

int main(void)
{
    char array[CARATTERI];
    char c;
    int i;
    
    printf("\nScrivi una frase qualsiasi(Max 80 caratteri): \n");
    i = 0;
    while((i < CARATTERI) && (c != '\n'))
    {
        scanf("%c", &c);
        array[i] = c;
        i++;
    }
    
    printf("\n\nLa tua frase e stata memorizzata :\n");
    for(int k = 0; k < i; k++)
    {
        printf("%c", array[k]);
    }

    printf("\n\n");
    return 0;
}
