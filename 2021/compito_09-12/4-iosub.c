/*
9 dicembre 2021 Its Marchi Robert

Dato un array di N interi popolato con il valore dell'indice
stampare i valore che sono divisibili per 3 o per 7

input - array N ELEMENTI
output - numeri divisibili per 3 o per 7

uso ciclo for - esle if
*/

#include<stdio.h>
#define ELEMENTI 21

int main()

{
    int array[ELEMENTI];
    
    printf("\nVado a stampare i numeri divisibili per 3 o per 7 fino a %d \n", ELEMENTI);
    for(int i = 0; i <= ELEMENTI; i++)
    {
        array[i] = i;
        
        if((array[i] %3 == 0) && (array[i] %7 == 0) && (array[i] != 0))
        {
            i++; // se il numero è divisibile per entrambi vado a controllare il numero successivo
        }
        else if((array[i] %3 == 0) && (array[i] != 0))
        {
            printf("\n%2d) Il numero %2d è divisibile per 3", i, array[i]);
        }
        else if ((array[i] %7 == 0) && (array[i] != 0))
        {
            printf("\n%2d) Il numero %2d è divisibile per 7", i, array[i]);
        }
    }

    printf("\n\n");
    return 0;
}
