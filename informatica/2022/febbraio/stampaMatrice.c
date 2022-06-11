/*
17 febbraio 2022 Montecatini Terme Robert

Popolamento matrici quadrate di interi, stampa della diagonale, della diagonale inversa, della matrice alta e della matrice bassa

input - matrice di interi
output - stampa della matrice in varie modalita

utilizzo rand(), srand(), time(), cicli for()

*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define RIGHE 10
#define COLONNE 10

int popolaMatrice(char matrice[][COLONNE], int righe)
{
    srand(time(0));
    for(int i = 0; i < righe; i++)
    {
        for(int k = 0; k < COLONNE; k++)
        {
            matrice[i][k] = rand() % 100;
        }
    }
    
    return 0;
}

int stampaMatrice(char matrice[][COLONNE], int righe)
{
    printf("\nStampo la matrice %d, %d\n", righe, COLONNE);
    for(int i = 0; i < righe; i++)
    {
        printf("\n");
        for(int k = 0; k < COLONNE; k++)
        {
            printf("%3d", matrice[i][k]);
        }
    }
    
    return 0;
}
int stampaDiagonale(char matrice[][COLONNE], int righe)
{
    printf("\n\nStampo la diagonale\n");
    for(int i = 0; i < righe; i++)
    {
        printf("\n");
        for(int k = 0; k < COLONNE; k++)
        {
            if(i == k)
            {   
                printf("%3d", matrice[i][k]);
            }
            else
            {
                printf("%3c", ' ');
            }        
        }
    }
    
    return 0;
}
int stampaDiagonaleInversa(char matrice[][COLONNE], int righe)
{
    printf("\n\nStampo la diagonale inversa\n");
    for(int i = 0; i < righe; i++)
    {
        printf("\n");
        for(int k = 0; k < COLONNE; k++)
        {
            if(i == COLONNE - k - 1) 
            {
                printf("%3d", matrice[i][k]);
            }
            else
            {
                printf("%3c", ' ');
            }        
        }
    }
    
    return 0;
}
int stampaMatriceAlta(char matrice[][COLONNE], int righe)
{
    printf("\n\nStampo la matrice alta\n");
    for(int i = 0; i < righe; i++)
    {
        printf("\n");
        for(int k = 0; k < COLONNE; k++)
        {
            if(i <= COLONNE - k - 1) 
            {
                printf("%3d", matrice[i][k]);
            }
            else
            {
                printf("%3c", ' ');
            }        
        }
    }
    
    return 0;
}
int stampaMatriceBassa(char matrice[][COLONNE], int righe)
{
    printf("\n\nStampo la matrice bassa\n");
    for(int i = 0; i < righe; i++)
    {
        printf("\n");
        for(int k = 0; k < COLONNE; k++)
        {
            if(i >= COLONNE - k - 1) 
            {
                printf("%3d", matrice[i][k]);
            }
            else
            {
                printf("%3c", ' ');
            }        
        }
    }
    
    return 0;
}

int main()
{
    char matrice[RIGHE][COLONNE];

    popolaMatrice(matrice, RIGHE);
    stampaMatrice(matrice, RIGHE);
    stampaDiagonale(matrice, RIGHE);
    stampaDiagonaleInversa(matrice, RIGHE);
    stampaMatriceAlta(matrice, RIGHE);
    stampaMatriceBassa(matrice, RIGHE);
    
    printf("\n\n");
    return 0;   
}
