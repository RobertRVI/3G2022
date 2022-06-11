/*
18 gennaio Montecatini Terme Robert

Dati 3 array di ITEM numeri random (popolati con un solo ciclo for),
scambiare gli i-esimi elementi dei tre array di modo che il primo array contenga sempre il valore più piccolo e il terzo array sempre il valore maggiore.
Stampare i tre array ognuno su una linea informando debitamente l'utente.

input - 3 array random
output - 3 array scambiando gli elementi i-esimi: il primo con il valore minore
                                                  il terzo con il valore maggiore
                                                  
utilizzo della funzione rand()
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ELEMENTI 10

int main()
{
    int primoArray[ELEMENTI], secondoArray[ELEMENTI], terzoArray[ELEMENTI];
    int tmp;
    
    srand(time(0));
    for(int i = 0; i < ELEMENTI; i++)
    {
        primoArray[i] = rand() % 100;
        secondoArray[i] = rand() % 100;
        terzoArray[i] = rand() % 100;
        
    }
    
    printf("Vado a prendere 3 array popolati da %d interi random\n\n Primo array :", ELEMENTI);
    for(int i = 0; i < ELEMENTI; i++)
    {
        printf("%3d", primoArray[i]);
    }
    printf("\nSecondo array:");
    for(int i = 0; i < ELEMENTI; i++)
    {
        printf("%3d", secondoArray[i]);
    }
    printf("\n Terzo array :");
    for(int i = 0; i < ELEMENTI; i++)
    {
        printf("%3d", terzoArray[i]);
    }
    
    for(int i = 0; i < ELEMENTI; i++)
    {
        for(int k = 0; k < ELEMENTI; k++)
        {
            if(primoArray[i] > terzoArray[i])
            {
                tmp = primoArray[i];
                primoArray[i] = terzoArray[i];
                terzoArray[i] = tmp;
            }
            else if(primoArray[i] > secondoArray[i])
            {
                tmp = primoArray[i];
                primoArray[i] = secondoArray[i];
                secondoArray[i] = tmp;  
            }
            else if(secondoArray[i] > terzoArray[i])
            {
                tmp = secondoArray[i];
                secondoArray[i] = terzoArray[i];
                terzoArray[i] = tmp;
            }
            
        }
                
    }
    
    printf("\n\nAdesso scambio gli elementi i-esimi al fine di ottenere :\nil primo array contenente il valore minore\ne il terzo array contenente il valore maggiore\n\n Primo array :");
    for(int i = 0; i < ELEMENTI; i++)
    {
        printf("%3d", primoArray[i]);
    }
    printf("\nSecondo array:");
    for(int i = 0; i < ELEMENTI; i++)
    {
        printf("%3d", secondoArray[i]);
    }
    printf("\n Terzo array :");
    for(int i = 0; i < ELEMENTI; i++)
    {
        printf("%3d", terzoArray[i]);
    }


    printf("\n\n");
    return 0;
}
