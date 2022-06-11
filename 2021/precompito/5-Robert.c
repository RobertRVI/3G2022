/*
2 dicembre 2021 Its Marchi Robert

dato un array di N elementi popolato con il valore dell'indice
stampare i valori divisibili per 2 per 3 o 5

input - array N elementi
output - valori divisibili per 2 e 3 o 5

*/

#include<stdio.h>
#define ELEMENTI 50

int main()
{
    int array[ELEMENTI];

    printf("\nVado a stampare i valori divisibili \nper 2 e 3 \ne quelli per 2 e 5\n\n");

    for(int i = 0; i <= ELEMENTI; i++)
    {
        array[i] = i;
        if((array[i]%2 == 0) && (array[i] %3 == 0))
        {
            printf("Il valore %3d è divisibile per 2 e per 3\n", array[i]);
        }
        else if((array[i]%2 == 0) && (array[i] %5 == 0))
        {
            printf("Il valore %3d è divisibile per 2 e per 5\n", array[i]);
        }
    }


    return 0;
}
