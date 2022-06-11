/*
23 gennaio Montecatini Terme Robert

Realizzare la tavola pitagorica

input - matrice caricata con il prodotto dei successivi degli indici corrispondenti
output - matrice

uso for();
*/

#include<stdio.h>
#define RIGHE 10
#define COLONNE 10

int main()
{
    int tavolaPitagorica[RIGHE][COLONNE];
    
    printf("\nVado a stampare la tavola pitagorica\n");
    //carico e stampo la matrice
    for(int i = 0; i < RIGHE; i++)
    {
        printf("\n");
        for(int k = 0; k < COLONNE; k++)
        {
            tavolaPitagorica[i][k] = (i + 1) * (k + 1);
            printf("%4d", tavolaPitagorica[i][k]);
        }
    }   
     
    printf("\n\n");
    return 0;
}
