/*
12 marzo Montecatini Terme Robert

Si definisca una matrice di caratteri 4x6

    Si stampi sulla stessa riga: indirizzo, indici e valori, usando &matrice[i][j]
    Si stampi sulla stessa riga: indirizzo, indici e valori, usando la seconda notazione

input - matrice
output - indirizzo matrice usando 2 notazioni diverse

*/

#include<stdio.h>
#define RIGHE 4
#define COLONNE 6

int main(void)
{
    char matrice[RIGHE][COLONNE];
      
    printf("\nStampo gli indirizzi usando &matrice[i][k]\n\n");
    for(int i = 0; i < RIGHE; i++)
    {
        for(int k = 0; k < COLONNE; k++)
        {
            printf("%p i = %d, k = %d, valore = %4d\n", &matrice[i][k], i, k, matrice[i][k]);
        }
    }
    
    printf("\nStampo gli indirizzi usando matrice + i * COLONNE + k\n\n");
    for(int i = 0; i < RIGHE; i++)
    {
        for(int k = 0; k < COLONNE; k++)
        {
            printf("%p i = %d, k = %d, valore = %4d\n", matrice + i * COLONNE + k, i, k, matrice[i][k]);
        }
    }
    
    printf("\n\n");
    return 0;
}


