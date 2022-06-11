/*
2 dicembre 2021 Its Marchi Robert

dato un array di N elementi, caricare l'array con i valori dell' indice
e visualizzare per ogni elemento il valore reale ottenuto dividendo il suo valore per 19

input - array di n elementi
output - array / 19.0
*/

#include<stdio.h>
#define ELEMENTI 90

int main()
{
    float array[ELEMENTI];

    printf("Vado a stampare il valore reale dell'indice diviso per 19\n\n");
    
    for(int i = 0; i < ELEMENTI; i++)
    {
        array[i] = i / 19.0;
        printf("%2d) Valore = %f\n", i, array[i]);
    }

    return 0;
}
