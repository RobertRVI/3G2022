/*
4 marzo 2022 Montecatini Terme Robert

Popola, stampa, ordina, trova massimo, minimo utilizzando il prototipo

input - array random
output - array, array ordinato, max, min

utilizzo rand() srand(),for()
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ITEM 10
#define MOD 100

int popola(int array[], int N);
int stampa(int array[], int N);
int ordina(int array[], int N);
int max(int array[], int N);
int min(int array[], int N);

int main(void)
{
    int numeri[ITEM];
    printf("\nPrendo un array di %d interi casuali", ITEM);
    popola(numeri, ITEM);
    printf("\nStampo l'array\n");
    stampa(numeri, ITEM);
    printf("\n\nOrdino l'array\n");
    ordina(numeri, ITEM);
    stampa(numeri, ITEM);
    printf("\n\nStampo maggiore e minore\n");
    max(numeri, ITEM);
    min(numeri, ITEM);


    printf("\n\n");
    return 0;
}

int popola(int array[], int N)
{
    for(int i = 0; i < N; i++)
    {
        array[i] = rand() % MOD;
    }
    
    return 0;
}
int stampa(int array[], int N)
{
    for(int i = 0; i < N; i++)
    {
        printf("%3d", array[i]);
    }
    
    return 0;
}
int ordina(int array[], int N)
{
    int tmp;
    
    for(int i = 0; i < N; i++)
    {       
        for(int k = 0; k < N - 1; k++)
        {
            if(array[k] > array[k + 1])
            {
                tmp = array[k];
                array[k] = array[k + 1];
                array[k + 1] = tmp; 
            }
        }          
    }
    
    return 0;
}
int max(int array[], int N)
{
    int max = 0;
    
    for(int i = 0; i < N; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    printf("Il maggiore e %3d", max);
    
    return 0;
}
int min(int array[], int N)
{
    int min = MOD;
    
    for(int i = 0; i < N - 1; i++)
    {
        if(min > array[i])
        {
            min = array[i];
        }
    }
    printf("\nIl minore e %3d", min);
    return 0;
}
