/*
9 dicembre 2021 Its Marchi Robert

dato un array di N ELEMENTI popolato con il valore dell'indice al cubo,
stamparlo in 2 modalità di indice decrescente e crescente visualizzando 
sia il valore dell'indice 
sia il valore dell'array

input - array N ELEMENTI
output - visualizzazione in 2 modalità

uso ciclo for doppio indice
*/

#include<stdio.h>
#define ELEMENTI 10

int main()
{
    int array[ELEMENTI];

    printf("Stampo i cubi degli indici corrispondenti ma in ordine decrescente\n\n");

    for(int i = 0, k = ELEMENTI - 1; i < ELEMENTI, k >= 0; i++, k--)
    {
        array[i] = k * k * k;
        printf("\n%d) Valore = %3d", i, array[i]);
    }

    printf("\nStampo i cubi degli indici corrispondenti ma in ordine crescente\n\n");

    for(int i = ELEMENTI - 1, k = 0; i >= 0, k < ELEMENTI; i--, k++)
    {
        array[i] = k * k * k;
        printf("\n%d) Valore = %3d", i, array[i]);
    }



    printf("\n\n");
    return 0;
}
