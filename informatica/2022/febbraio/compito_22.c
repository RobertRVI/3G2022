/*
24 Febbraio 2022 Montecatini Terme Robert

Completare gli esercizi non svolti durante il compito 
Esercizi 9 e 10

input - matrice intera popolata random 48-122
output - numeri primi, somma degli elementi delle due diagonali

*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define RIGHE 8
#define COLONNE 10
int popolaMatrice(int matrice[][COLONNE], int righe, int colonne)
{
    for(int i = 0; i < righe; i++)
    {
        for(int k = 0; k < colonne; k++)
        {
            matrice[i][k] = rand() % 74 + 48;
        }
    }
  
    return 0;
}

int numeriPrimi(int matrice[][COLONNE], int righe, int colonne)
{
    int divisore;
    int contatore;
    
    for(int i = 0; i < righe; i++)
    {
        
        for(int k = 0; k < colonne; k++)
        {
            contatore = 0;
            for(divisore = 1; divisore <= matrice[i][k]; divisore++)  
            {
                if(matrice[i][k] % divisore == 0)
                {
                    contatore++;
                }         
            }
            if(contatore <= 2)
            {
                printf("i = %d, k = %d, v = %3d e un numero primo\n", i, k, matrice[i][k]);
            }
        }
    }
  
    return 0;
}

int matriceQuadrata(int matrice[][COLONNE], int righe, int colonne)
{
    printf("\nStampo la diagonale della matrice\n");
    for(int i = 0; i < righe; i++)
    {
        printf("\n");
        for(int k = 0; k < colonne; k++)
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
    
    printf("\nStampo la diagonale inversa della matrice\n");
    for(int i = 0; i < righe; i++)
    {
        printf("\n");
        for(int k = 0; k < colonne; k++)
        {
            if(i == colonne - k - 1)
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
int main(void)
{
    int numeri[RIGHE][COLONNE];
    int valoreMatriceQuadrata;
    
    srand(time(0));
    printf("\nEs 9 - Leggo il contenuto della matrice di interi\nstampare il contenuto della matrice e gli indici\nse il contenuto e un nuimero primo\n\n");
    popolaMatrice(numeri, RIGHE, COLONNE);
    numeriPrimi(numeri, RIGHE, COLONNE);
    printf("\nEs 10 - Rendere la matrice quadrata rispetto alla dimensione minore\ncalcolare la somma degli elementidelle due diagonali");
    if(RIGHE < COLONNE)
    {
      valoreMatriceQuadrata = RIGHE; 
      matriceQuadrata(numeri, RIGHE, valoreMatriceQuadrata); 
    }
    else if(COLONNE < RIGHE)
    {
      valoreMatriceQuadrata = COLONNE; 
      matriceQuadrata(numeri, valoreMatriceQuadrata, COLONNE); 
    }
    
    printf("\n\n");
    return 0;
}
