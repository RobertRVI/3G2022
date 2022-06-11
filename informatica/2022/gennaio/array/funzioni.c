/*
2 febbraio 2022 ITSMarchi Robert

Popolo un array con valori random entro un determinato range
e lo ordino in modalità crescente

utilizzo le funzioni rand() e srand() e tre funzioni per popolare, stampare e ordinare gli array

input - array
output - visualizzo array ordinato crescente

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ITEM 20
int popolaArray(int array[], int N)
{
    for(int i = 0; i < N; i++)
    {
        array[i] = rand() % 100;
    }
    return 0;
}
int stampaArray(int array[], int N)
{
    for(int i = 0; i < N; i++)
    {
        printf("%3d", array[i]);
    }
    
    printf("\n\n");
    return 0;
}

int ordinaArray(int array[], int N)
{
    int tmp;
    for(int i = 0; i < N; i++)
    {
        for(int k = 0; k < N - 1; k++)
        {
            if (array[k] > array[k + 1])
            {
                tmp = array[k];
                array[k] = array[k + 1];
                array[k + 1] = tmp;              
            }
        }
    }
    return 0;
}
int main(void)
{
    int numeri[ITEM];
    int secondoArray[ITEM];
    
   srand(time(0));
   
    printf("\n\nPrendo due array popolati con numeri random: \n\n");
    popolaArray(numeri, ITEM);
    popolaArray(secondoArray, ITEM);
    stampaArray(numeri, ITEM);
    stampaArray(secondoArray, ITEM);
    
    printf("\n\nAdesso li ordino in modo crescente: \n\n");
    ordinaArray(numeri, ITEM);
    ordinaArray(secondoArray, ITEM);
    stampaArray(numeri, ITEM);
    stampaArray(secondoArray, ITEM);

    return 0;
}

