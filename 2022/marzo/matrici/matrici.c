/*
08 marzo 2022 Its Marchi Robert

Popolo stampo, ordino, trova max e min della matrice

input - matricfee popolata random
output - matrice, max, min

Utilizzo prototipo con le funzioni per le matrici
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define RIGHE 8
#define COLONNE 10
#define MOD 100

int popoloMatrice(int matrice[][COLONNE], int righe, int colonne);
int stampoMatrice(int matrice[][COLONNE], int righe, int colonne);
int ordinaMatrice(int matrice[][COLONNE], int righe, int colonne);
int maxMatrice(int matrice[][COLONNE], int righe, int colonne);
int minMatrice(int matrice[][COLONNE], int righe, int colonne);
int numeriPrimi(int matrice[][COLONNE], int righe, int colonne);
int trovaVocali(int matrice[][COLONNE], int righe, int colonne);

int main(void)
{
    int numeri[RIGHE][COLONNE];
    srand(time(0));
    printf("\nStampo la matrice \n");
    popoloMatrice(numeri, RIGHE, COLONNE);
    stampoMatrice(numeri, RIGHE, COLONNE);
    printf("\nStampo la matrice riordinata\n");
    ordinaMatrice(numeri, RIGHE, COLONNE);
    stampoMatrice(numeri, RIGHE, COLONNE);
    printf("\nStampo il valore max\n");
    maxMatrice(numeri, RIGHE, COLONNE);
    printf("\nStampo il valore min\n");
    minMatrice(numeri, RIGHE, COLONNE);
    printf("\nStampo i numeri primi\n\n");
    numeriPrimi(numeri, RIGHE, COLONNE);
    printf("\nTrovo un valore inserito da tastiera e stampo gli indici corrispondenti\n");
    trovaVocali(numeri, RIGHE, COLONNE);

    printf("\n\nSe non viene stampato niente il valore non è presente nella matrice\n");

    printf("\n\n");
    return 0;
}

int popoloMatrice(int matrice[][COLONNE], int righe, int colonne)
{
    for(int i = 0; i < righe; i++)
    {
        for(int k = 0; k < colonne; k++)
        {
            matrice[i][k] = rand() % MOD;
        }
    }

    return 0;
}

int stampoMatrice(int matrice[][COLONNE], int righe, int colonne)
{
    for(int i = 0; i < righe; i++)
    {
        printf("\n");
        for(int k = 0; k < colonne; k++)
        {
            printf("%4d", matrice[i][k]);
        }
    }
   
    printf("\n\n");
    return 0; 
}

int ordinaMatrice(int matrice[][COLONNE], int righe, int colonne)
{
    int tmp;

    /*ordino i numeri orizzontalmente*/
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
    
    /*ordino i numeri verticalmente*/ 
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

    return 0;
}

int maxMatrice(int matrice[][COLONNE], int righe, int colonne)
{
    int max = 0;

    for(int i = 0; i < righe; i++)
    {
        for(int k = 0; k < colonne; k++)
        {
            if(matrice[i][k] > max)
            {
                max = matrice[i][k];
            }
        }
    }
    
    printf("\nIl valore maggiore è %3d\n", max);
    return 0; 
}

int minMatrice(int matrice[][COLONNE], int righe, int colonne)
{
    int min = MOD;

    for(int i = 0; i < righe; i++)
    {
        for(int k = 0; k < colonne; k++)
        {
            if(matrice[i][k] < min)
            {
                min = matrice[i][k];
            }
        }
    }
    
    printf("\nIl valore minore è %3d\n", min);
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

int trovaVocali(int matrice[][COLONNE], int righe, int colonne)
{
    int valore;
    printf("\nScegli un numero da trovare da 0-99:");
    scanf("%d", &valore);

    for(int i = 0; i < righe; i++)
    {
        for(int k = 0; k < colonne; k++)
        {
            if(matrice[i][k] == valore)
            {
                printf("Valore = %3d, i = %2d, k = %2d\n", matrice[i][k], i + 1, k + 1);
            }
        }
    }
    return 0;
}

