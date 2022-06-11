/*
27 gennaio 2022 Montecatini Terme Robert

Popolata una matrice di interi N x M random modulo 1000
1) trovare il massimo valore stampando i valori dei due indici
2) calcolare la somma per righe e per colonne
3) Calcolare la media per righe e per colonne e stampare il max valore della media
per le righe e per le colonne stampando gli indici correlati.

input - matrice N x M popolato random
output - Valore max con indice, somma per righe e colonne, media per righe e colonne, max valore tra le medie per righe e per colonne con indici. 

utilizzo cicli for().
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define RIGHE 10
#define COLONNE 10

int main()
{
    int matrice[RIGHE][COLONNE];
    int mediaColonne[COLONNE];
    int mediaRighe[RIGHE];
    int max, somma, indice, secondoIndice;
    
    /*Popolo e stampo la matrice*/
    printf("\nPopolo una matrice con numeri interi random\n");
    srand(time(0));
    for(int i = 0; i < RIGHE; i++)
    {
        printf("\n");
        for(int k = 0; k < COLONNE; k++)
        {
            matrice[i][k] = rand() % 1000; // popolo la matrice con numeri 0-999
            printf("%4d", matrice[i][k]);
            
           /*Guardo qual e il valore piu grande presente nella matrice*/
            if(matrice[i][k] > max)
            {
                max = matrice[i][k];
                
                //salvo gli indici dentro a delle varibili per poi stamparle
                indice = i + 1;
                secondoIndice = k + 1;
            }
        }
    }
    printf("\n\nIl valore maggiore e %4d e si trova nella %2d riga nella %2d colonna", max, indice, secondoIndice);
    
    /*Calcolo somma e media di ogni singola riga*/
    max = 0;
    printf("\n\nCalcolo la somma e la media per righe\n");
    for(int i = 0; i < RIGHE; i++)
    {
        somma = 0;
        for(int k = 0; k < COLONNE; k++)
        {
           somma = somma + matrice[i][k]; 
        }
        
        mediaRighe[i] = somma / COLONNE;
        
        if(mediaRighe[i] > max)
        {
           max = mediaRighe[i];
           indice = i + 1;
        }
        
        printf("\nRiga %2d Somma = %5d Media = %2d", i + 1, somma, mediaRighe[i]);

    }
    printf("\n\nLa media piu grande e %3d e corrisponde alla riga %2d", max, indice);
    
    /*Calcolo somma e media di ogni singola colonna*/
    max = 0;
    printf("\n\nCalcolo la somma e la media per colonne\n");
    for(int k = 0; k < COLONNE; k++)
    {
        somma = 0;
        for(int i = 0; i < RIGHE; i++)
        {
           somma = somma + matrice[i][k]; 
        }
        
        mediaColonne[k] = somma / RIGHE;
        
        if(mediaColonne[k] > max)
        {
           max = mediaColonne[k];
           indice = k + 1;
        }
        printf("\nColonna = %2d Somma = %5d Media = %2d", k + 1, somma, mediaColonne[k]);
    }
    
    printf("\n\nLa media piu grande e %3d e corrisponde alla colonna %2d", max, indice);
    
    printf("\n\n");
    return 0;
}
