/*
27 gennaio 2022 Montecatini Terme Robert

popolare e stampare un matrice di interi N x M random modulo 1000

input - matrice N x M popolato random
output - matrice 

utilizzo cicli  while
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define RIGHE 10
#define COLONNE 10

int main()
{
    int matrice[RIGHE][COLONNE];
    int i,k;
    
    printf("\nVado a stampare una maatrice con interi casuali\n");
    srand(time(0));
    i = 0;
    while(i < RIGHE)
    {
        printf("\n");
        k = 0;
        while(k < COLONNE)
        {
            matrice[i][k] = rand() % 1000;
            printf("%4d", matrice[i][k]); 
            k++; 
        }
        i++;
    }


    printf("\n\n");
    return 0;
}
