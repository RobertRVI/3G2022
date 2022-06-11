/*
25 gennaio 2022 ITSMarchi Robert

Popolare una matrice con N elementi random

imput - matrice popolata casualmente 0-99
output - matrice

utilizzo while()
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define RIGHE 10
#define COLONNE 10

int main()
{
    int matrice[RIGHE][COLONNE];
    int i, k, j;
    int tmp;

    printf("\nPopolo una matrice con numeri casuali e la stampo:\n");
    srand(time(0));
    i = 0;
    while(i < RIGHE)
    {
        printf("\n");
        k = 0;
        while(k < COLONNE)
        {        
            matrice[i][k] = rand() % 100;
            printf("%3d", matrice[i][k]);
            k++;
        }
        i++;
    }
    
    //ordino le righe singolarmente   
    i = 0;
    while(i < RIGHE)
    {
        j = 0;
        while(j < COLONNE)
        {
            k = 0;
            while(k < COLONNE -1)
            {
                if(matrice[i][k] > matrice[i][k + 1])
                {
                    tmp = matrice[i][k];
                    matrice[i][k] = matrice[i][k + 1];
                    matrice[i][k + 1] = tmp;
                }
                k++;
            }
            j++;
        }
        i++;
    
    }

    //ordino le colonne singolarmente
    k = 0;
    while(k < COLONNE)
    {
        j = 0;
        while(j < RIGHE)
        {
            i = 0;
            while(i < RIGHE - 1)
            {
                if(matrice[i][k] > matrice[i + 1][k])
                {
                    tmp = matrice[i][k];
                    matrice[i][k] = matrice[i + 1][k];
                    matrice[i + 1][k] = tmp;
                }
                i++;
            }
            j++;
        }
        k++;
    } 
    
    //stampo la matrice ordinata
    printf("\n\nStampo la matrice riordinata\n");
    i = 0;
    while(i < RIGHE)
    {
        printf("\n");
        k = 0;
        while(k < COLONNE)
        {        
            printf("%3d", matrice[i][k]);
            k++;
        }
        i++;
    }

    printf("\n\n");
    return 0;
}
