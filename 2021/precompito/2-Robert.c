/*
2 dicembre 2021 Its Marchi Robert

letti N numeri trovare il maggiore dei numeri
uso ciclo

input - N numeri
output - maggiore

uso del for
*/

#include<stdio.h>
#define NUMERI 10

int main()
{
    int lista[NUMERI];
    int maggiore;
    maggiore = 0;

    printf("\nChiedo di inserire %d numeri interi per trovare il maggiore\n\n", NUMERI);
    for(int i = NUMERI; i >0; i--)
    {
        printf("Inserisci un numero intero:");
        scanf("%d", &lista[i]);
    }

    for(int i = NUMERI; i > 0; i--)
    {
        if(lista[i] >= maggiore)
        {
            maggiore = lista[i];
        }
        else
        {
            i--;
        }
        
    }

    printf("Il maggiore dei numeri inseriti è %d \n\n", maggiore);

    return 0;
}
