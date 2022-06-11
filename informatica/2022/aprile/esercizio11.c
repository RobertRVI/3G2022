/*
*   25 aprile 2022 ItsMarchiForti Robert
*
*   Svolgere l'esercizio 9 utilizzando invece della struct punto due array che simulano la struct:
*       - un array di interi e un array di char (int valore[20] e char nome[20]).
*       - Stampare l'array (nome e  valore)
*       - Ordinare l'array
*       - Ristampare l'array  (nome e valore)
*       
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define LENGTH 20

void valoreX(int ascissa[], int length);
void nomePunto(char nome[], int length);
void stampaPunti(char nome[], int ascissa[], int length);
void riordinaAscissa(char nome[], int ascissa[], int length);

int main()
{
    int valore[LENGTH];
    char nome[LENGTH];
    
    srand(time(0));
    valoreX(valore, LENGTH);
    nomePunto(nome, LENGTH);
    stampaPunti(nome, valore, LENGTH);
    
    printf("\nMetto in ordine crescente i punti\n");
    riordinaAscissa(nome, valore, LENGTH);
    stampaPunti(nome, valore, LENGTH);
    printf("\n\n");
    return 0;
}

void valoreX(int ascissa[], int length)
{
    for(int i = 0; i < length; i++)
    {
        ascissa[i] = rand() % 98 + 1;
    }
    
}

void nomePunto(char nome[], int length)
{
    char k = 'A';
    
    for(int i = 0; i < length; i++)
    {
        nome[i] = k + i;
    }
      
}

void stampaPunti(char nome[], int ascissa[], int length)
{
    for(int i = 0; i < length; i++)
    {
        printf("%c - %d\n", nome[i], ascissa[i]);
    }
}

void riordinaAscissa(char nome[],int ascissa[], int length)
{
    int tmp;
    char tmpLettera;
    for(int i = 0; i < LENGTH; i++)
    {
        for(int k = 0; k < LENGTH; k++)
        {
            if(ascissa[k] > ascissa[k + 1])
            {
                tmp = ascissa[k];
                ascissa[k] = ascissa[k + 1];
                ascissa[k + 1] = tmp;
                tmpLettera = nome[k];
                nome[k] = nome[k + 1];
                nome[k + 1] = tmpLettera;           
            }
        }
    }
}
