/*
22 febbraio 2022 ItsMarchi Robert

Popolare con un ciclo la matrice di caratteri con un qualisiasi valore inserito da tastiera
Popolare una seconda matrice di interi random con valori compresi tra 48 e 122 compresi

input - 2 matrici 


utilizzo cicli while() for(), rand() srand()
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define RIGHE 6
#define COLONNE 8

int popoloMatriceChar(char matrice[][COLONNE], int righe)
{
    int i = 0;
    int k;
    char c;
    while(i < righe) 
    {
        k = 0;
        while((k < COLONNE) && (c != '\n'))
        {
            scanf("%c", &c);
            matrice[i][k] = c;
            k++;
        }
        matrice[i][k] = '\0';
        i++;  
    }

    return 0;
}

int popoloMatriceInteri(int matrice[][COLONNE], int righe)
{
    for(int i = 0; i < righe; i++)
    {
        for(int k = 0; k < COLONNE; k++)
        {
            matrice[i][k] = rand() % 74 + 48;
        }
    }

    return 0;
}

int stampoMatriceChar(char matrice[][COLONNE], int righe)
{
    int i = 0;
    int k;

    while((i < righe) && (matrice[i - 1][k] != '\0'))
    {
        printf("\n");
        k = 0;
        while((k < COLONNE) && (matrice[i][k] != '\0'))
        {
            printf("%3c", matrice[i][k]);
            k++;
        }
        i++;
    }
    return 0;
}

int stampoMatriceInteri(int matrice[][COLONNE], int righe)
{
    for(int i = 0; i < righe; i++)
    {
        printf("\n");
        for(int k = 0; k < COLONNE; k++)
        {
            printf("%4d", matrice[i][k]);
        }
    }
   
    printf("\n\n");
    return 0; 
}

int stampoMatriceCharInversa(char matrice[][COLONNE], int righe)
{
    int i = righe - 1;
    int k;

    while(i >= 0)
    {
        printf("\n");
        k = COLONNE - 1;
        while(k >= 0)
        {
            printf("%3c", matrice[i][k]);
            k--;
        }
        i--;
    }
    return 0;
}

int stampoLettere(char matrice[][COLONNE], int righe)
{
    for(int i = 0; i < righe; i++)
    {
        printf("\n");
        for(int k = 0; k < COLONNE; k++)
        {
            if((matrice[i][k] == 'A') || (matrice[i][k] == 'b') || (matrice[i][k] == 'C') || (matrice[i][k] == 'n') || (matrice[i][k] == 'm'))
            {
                printf("%3c", matrice[i][k]);
            }
            else
            {
                printf("%3c", ' ');
            }
        }
    }
    
    return 0;
}

int interiDivisibili(int matrice[][COLONNE], int righe)
{
    for(int i = 0; i < righe; i++)
    {
        for(int k = 0; k < COLONNE; k++)
        {
            if((i != 0) && (i != 1) && (k != 0) && (k != 1))
            {
                if((matrice[i][k] % i == 0) || (matrice[i][k] % k == 0))
                {
                    printf("[v=%d i=%d k=%d]", matrice[i][k], i, k);
                }
            }  
        }
        printf("\n");
    }
    return 0;
}

int sommaMediaMatriceChar(char matrice[][COLONNE], int righe)
{
    float somma = 0;
    float media = 0;
    float max = righe * COLONNE;

    for(int i = 0; i < righe; i++)
    {
        for(int k = 0; k < COLONNE; k++)
        {
            somma = somma + matrice[i][k];
        }
    }
    
    media = somma / max;
    printf("Somma = %.0f - Media = %.2f\n\n", somma, media);
    return 0;
}

int confrontoMatrici(char matrice[][COLONNE], int interi[][COLONNE], int righe)
{
    
    for(int i = 0; i < righe; i++)
    {
        printf("\n");
        for(int k = 0; k < COLONNE; k++)
        {
            if(matrice[i][k] > interi[i][k])
            {
                printf("%4d%c", interi[i][k], matrice[i][k]);
            }
            else
            {
                printf("%2c%d", matrice[i][k], interi[i][k]);
            }
        }
    }
    return 0;
}

int volteMatriceMaggiore(char matrice[][COLONNE], int interi[][COLONNE], int righe)
{
    int maxChar = 0;
    int maxInt = 0;
    int equal = 0;

    for(int i = 0; i < righe; i++)
    {
        for(int k = 0; k < COLONNE; k++)
        {
            if(matrice[i][k] > interi[i][k])
            {
                maxChar++;
            }
            else if(matrice[i][k] = interi[i][k])
            {
                maxInt++;
            }
            else
            {
                equal++;
            }
        }
    }
    
    printf("Maggiori le lettere = %d\nMaggiori i numeri = %d\nUguali = %d", maxChar, maxInt, equal);
    return 0;  
}

int numeriPrimi(int interi[][COLONNE], int righe)
{
    int divisore;
    int contatore; // per contare quanti divisori ha ciascun numero
    for(int i = 0; i < righe; i++)
    {
        for(int k = 0; k < COLONNE; k++)
        {
            contatore = 0;
            divisore = 2;
            while(divisore <=interi[i][k])
            {
                if(interi[i][k] % divisore == 0) 
                {
                    contatore++;
                }
                if(contatore > 2)
                {
                    break;
                }
                divisore++;
            }
            if(contatore == 2)
            {
                printf("i = %d k = %d v = %d è un numero primo\n", i, k, interi[i][k]);
            }
        }
    }

   return 0;
}

int main()
{
    char testo[RIGHE][COLONNE];
    int numeri[RIGHE][COLONNE];
    int max = RIGHE * COLONNE;
   
    printf("Iosub Robert Valentin - Frima .......\n");
    printf("Classe 3G ---- Data 22 febbraio 2022\n\n\n");

    srand(time(0));
    printf("\nEs 1 - Inserici fino a %d caratteri:\n", max);
    popoloMatriceChar(testo, RIGHE);
    popoloMatriceInteri(numeri, RIGHE);

    printf("\n\nEs 2 - Stampo la matrice di caratteri: \n");
    stampoMatriceChar(testo, RIGHE);
    printf("\n\nStampo la matrice di interi: \n");
    stampoMatriceInteri(numeri, RIGHE);

    printf("\n\nEs 3 - Stampo la matrice di caratteri al contrario \n");
    stampoMatriceCharInversa(testo, RIGHE);

    printf("\n\nEs 4 - Stampo tutte le A, b, C, n, m \n");
    stampoLettere(testo, RIGHE);

    printf("\n\nEs 5 - Stampo i numeri divisibili per gli incice >= 2");
    interiDivisibili(numeri, RIGHE);

    printf("\n\nEs 6 - Calcolo la somma e la media della matrice di char\n");
    sommaMediaMatriceChar(testo, RIGHE);

    printf("\n\nEs 7 - Confronto il contenuto delle due matrici,\nstampo prima il contenuto minore\n");
    confrontoMatrici(testo, numeri, RIGHE);

    printf("\n\nEs 8 - Confronto il contenuto delle due matrici,\nstampo i contronti < = >\n");
    volteMatriceMaggiore(testo, numeri, RIGHE);

    printf("\n\nEs 9 - Leggo il contenuto della matrice di interi e stampo il contenuto\ne gli indici se il contenuto è un numero primo\n");
    numeriPrimi(numeri, RIGHE);
    
    printf("\n\n");
    return 0;
}
