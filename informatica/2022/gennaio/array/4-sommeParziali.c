/*
20 gennaio 2022 Montecatini Terme Robert

Dato un array di 20 ITEM, caricato random 0-99
Stampare l'array
Incominciare a sommare dalla prima posizione gli elementi, appena si raggiunge la somma > 200
si stampa l'indice di partenza e l'indice finale con la somma ottenuta.
Si ripete tutto finche non si arriva la termine dell'array

input - array 20 elementi random 0-99
output - somma >200 con il range dell'indice

*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ITEM 20

int main()
{
    int numeri[ITEM];
    int somma;
    int indicePartenza = 0;
    
    printf("\nVado a stampare %d interi casuali\n\n", ITEM);
    srand(time(0));
    for(int i = 0; i < ITEM; i++)
    {
        numeri[i] = rand() % 100;
        printf("%3d", numeri[i]);
    }
    
    printf("\n\nAdesso faccio la somma di questi numeri e quando ottengo un numero maggiore o uguale a 200\nstampo l'indice di partenza e l'indice finale con la somma corrispondente\n\n");
    for(int i = 0; i < ITEM; i++)
    {
        somma = somma + numeri[i];
        
        if(somma > 200)
        {
            printf("\n%3d - %2d somma = %3d", indicePartenza, i, somma);
            somma = 0;
            indicePartenza = i + 1;
        }
    }


    printf("\n\n");
    return 0;
}
