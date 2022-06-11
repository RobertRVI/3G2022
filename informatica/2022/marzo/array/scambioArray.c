/*
21 marzo 2022 Montecatini Terme Robert

Riutilizzare la funzione ordina array inserendo al suo interno invece della sequenza di istruzioni che scambiano i valori, una funzione che li scambia.

input - array di N interi
output - array riordinato

uso piu funzioni 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ITEM 10

int popola(int array[], int n);
int scambio(int *a, int *b);
int ordina(int array[], int n);
int stampa(int array[], int n);

int main(void)
{
    int numeri[ITEM];
    
    printf("\nPopolo e stampo un array di %d interi random\n", ITEM);
    srand(time(0));
    popola(numeri, ITEM);
    stampa(numeri, ITEM);
    printf("\n\nOrdino e stampo l' array\n");
    ordina(numeri, ITEM);
    stampa(numeri, ITEM);
    
    printf("\n\n");
    return 0;
}

int popola(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        array[i] = rand() %100 + 1;
    }
    
    return 0;
}
int scambio(int *a, int *b)
{
    int tmp;
    
    tmp = *a;
    *a = *b;
    *b = tmp; 
    
    return 0; 
}

int ordina(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {       
        for(int k = 0; k < n - 1; k++)
        {
            if(array[k] > array[k + 1])
            {
               scambio(&array[k], &array[k + 1]); 
            }
        }          
    }
    
    return 0;
}

int stampa(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%4d", array[i]);
    }
    return 0;
}
