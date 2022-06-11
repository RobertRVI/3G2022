/*
23 gennaio 2022 Montecatini Terme Robert

Definire una matrice, popolarla con interi 0-99 e ordinarla orizzontalmente e verticalmente

input - matrice costituita da N righe e colonne
output - matrice ordinata 

uso rand(); for() 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define RIGHE 10
#define COLONNE 12

int main()
{
    int matrice[RIGHE][COLONNE];
    int tmp;
    
    printf("\nPopolo una matrice con numeri interi casuali 0-99\n");
    srand(time(0));
    for(int i = 0; i < RIGHE; i++)
    {
        printf("\n");
        for(int k = 0; k < COLONNE; k++)
        {
            matrice[i][k] = rand() % 100;
            printf("%3d", matrice[i][k]);
        }
    }
    
    //ordino i numeri orizzontalmente
    for(int i = 0; i < RIGHE; i++)
    {
        for(int j = 0; j < COLONNE; j++)
        {
            for(int k = 0; k < COLONNE - 1; k++)
            {
                if(matrice[i][k] > matrice[i][k + 1]) 
                {
                    tmp = matrice[i][k];
                    matrice[i][k] = matrice[i][k + 1];
                    matrice[i][k + 1] = tmp;
                }
            }
        }
    }
    
    //ordino i numeri verticalmente 
    for(int k = 0; k < COLONNE; k++)
    {
        for(int j = 0; j < RIGHE; j++)
        {
            for(int i = 0; i < RIGHE - 1; i++)
            {
                if(matrice[i][k] > matrice[i + 1][k]) 
                {
                    tmp = matrice[i][k];
                    matrice[i][k] = matrice[i + 1][k];
                    matrice[i + 1][k] = tmp;
                }
            }
        }
    }
    
    printf("\n\nAdesso vado a stampare la matrice ordinata\n");
    for(int i = 0; i < RIGHE; i++)
    {
        printf("\n");
        for(int k = 0; k < COLONNE; k++)
        {
            printf("%3d", matrice[i][k]);
        }
    }




    printf("\n\n");
    return 0;
}
