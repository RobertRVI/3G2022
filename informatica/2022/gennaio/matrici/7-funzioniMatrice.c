/*
31 gennaio 2022 Montecatini Terme Robert

Popolata una matrice di interi N x M random modulo 1000
1) trovare il massimo valore stampando i valori dei due indici
2) calcolare la somma per righe e per colonne
3) Calcolare la media per righe e per colonne e stampare il max valore della media
4) Stampa matrice


*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define RIGHE 10
#define COLONNE 10

/*Funzione per popolare la matrice*/
int popolaMatrice(int matrice[][COLONNE], int N)
{
    srand(time(0));
    for(int i = 0; i < N; i++)
    {
        for(int k = 0; k < COLONNE; k++)
        {
            matrice[i][k] = rand() % 1000;
        }
    }
    return 0;
}

/*Funzione per stampare la matrice*/
int stampaMatrice(int matrice[][COLONNE], int N)
{
    for(int i = 0; i < N; i++)
    {
        printf("\n");
        for(int k = 0; k < COLONNE; k++)
        {
            printf("%4d", matrice[i][k]);
        }
    }
    return 0;
}

/*Funzione per vedere il valore maggiore*/
int maxMatrice(int matrice[][COLONNE], int N)
{
    int max = 0;
    int indice, indiceSecondo;
    for(int i = 0; i < N; i++)
    {
        for(int k = 0; k < COLONNE; k++)
        {
            if(matrice[i][k] > max)
            {
                max = matrice[i][k];
                indice = i + 1;
                indiceSecondo = k + 1;
            }
        }
    }
    
    printf("\n\nIl valore max e %4d ceh si trova nella %2d riga, nella %2d colonna\n\n", max, indice, indiceSecondo);

    return 0;
}
/*Funzione per calcolare la somma per righe e colonne*/
int sommaMatrice(int matrice[][COLONNE], int N)
{
    int sommaRighe[N];
    int sommaColonne[COLONNE];
    
    /*Inizializzo gli array somma a 0*/
    for(int i = 0; i < N; i++)
    {
        sommaRighe[i] = 0;
    }
    for(int k = 0; k < COLONNE; k++)
    {
        sommaColonne[k] = 0;
    }
    
    for(int i = 0; i < N; i++)
    {
        for(int k = 0; k < COLONNE; k++)
        {
            sommaRighe[i] = sommaRighe[i] + matrice[i][k];
        }
    }
    for(int k = 0; k < COLONNE; k++)
    {
        for(int i = 0; i < N; i++)
        {
            sommaColonne[k] = sommaColonne[k] + matrice[i][k];
        }
    }
    for(int i = 0; i < N; i++)
    {
        printf("\nSomma = %4d Riga = %2d", sommaRighe[i], i);
    }
    printf("\n\n");
    for(int k = 0; k < COLONNE; k++)
    {
        printf("\nSomma = %4d Colonna = %2d", sommaColonne[k], k);
    }
    
    printf("\n\n");
    return 0;
}

int mediaMatrice(int matrice[][COLONNE], int N)
{
    int mediaRighe[N];
    int mediaColonne[COLONNE];
    for(int i = 0; i < N; i++)
    {
        mediaRighe[i] = 0;
        
        for(int k = 0; k < COLONNE; k++)
        {
            mediaRighe[i] = mediaRighe[i] + matrice[i][k];
        }
        mediaRighe[i] = mediaRighe[i] / N;
    }
    for(int k = 0; k < COLONNE; k++)
    {
        mediaColonne[k] = 0;
          
        for(int i = 0; i < N; i++)
        {
            mediaColonne[k] = mediaColonne[k] + matrice[i][k];
        }
        mediaColonne[k] = mediaColonne[k] / COLONNE;
    }
    
    for(int i = 0; i < RIGHE; i++)
    {
        printf("\nMedia = %4d Riga = %2d", mediaRighe[i], i);
    }
    printf("\n\n");
    for(int k = 0; k < COLONNE; k++)
    {
        printf("\nMedia = %4d Colonna = %2d", mediaColonne[k], k);
    }
    printf("\n");
    return 0;
}

int maxMedia(int matrice[][COLONNE], int N)
{
    int mediaRighe[N];
    int mediaColonne[COLONNE];
    int max = 0;
    for(int i = 0; i < N; i++)
    {
        mediaRighe[i] = 0; 
        for(int k = 0; k < COLONNE; k++)
        {
            mediaRighe[i] = mediaRighe[i] + matrice[i][k];
        }
        mediaRighe[i] = mediaRighe[i] / N;
        
        if(mediaRighe[i] > max)
        {
            max = mediaRighe[i];
        }
    }
    printf("\nIl max della media delle righe e %3d\n\n", max);
    
    max = 0;
    for(int k = 0; k < COLONNE; k++)
    {
        mediaColonne[k] = 0;     
        for(int i = 0; i < N; i++)
        {
            mediaColonne[k] = mediaColonne[k] + matrice[i][k];
        }
        mediaColonne[k] = mediaColonne[k] / COLONNE;
        
        if(mediaColonne[k] > max)
        {
            max = mediaColonne[k];
        }
    }
    printf("\nIl max della media delle colonne e %3d\n\n", max);
    return 0;
}

int main()
{
    int numeri[RIGHE][COLONNE];
    
    printf("\n\nPrendo una matrice popolata casualmente e trovo:\n- Il valore max\n- la somma per righe e colonne\n- media per righe e colonne \n- e il max delle medie tra righe e tra colonne\n");
    popolaMatrice(numeri, RIGHE);
    maxMatrice(numeri, RIGHE);
    sommaMatrice(numeri, RIGHE);
    mediaMatrice(numeri, RIGHE);
    maxMedia(numeri, RIGHE);
    stampaMatrice(numeri, RIGHE);
    
    printf("\n\n");
    return 0;
}
