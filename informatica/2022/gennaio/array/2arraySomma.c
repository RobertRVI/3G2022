/*
16 gennaio 2022 Montecatini Terme Robert

Dati 2 array random modulo 100 di interi di lunghezza ITEM, senza stampare gli array di partenza, calcolare la somma complessiva e stampare prima l'array con somma minore informando l'utente.

uso funzione rand(), ciclo for per fare somma degli elementi da memorizzare in una  variabile 'somma'

input - 2 array di ITEM interi
output - prima array con somma minore e poi il secondo
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ITEM 10

int main()
{
    int primoArray[ITEM];
    int secondoArray[ITEM];
    int primaSomma; //variabile che conterra la somma del primo array
    int secondaSomma; //variabile che conterra la somma del secondo array
    
    //informo l'utente cosa andro a fare
    printf("\n\nVado a prendere 2 array random\nne calcolo la somma di ciascuno\ne stampo prima quello con somma minore\n\n");
    
    //popolo gli array con ITEM elementi random minori di 100
    srand(time(0));
    for(int i = 0; i < ITEM; i++)
    {
        primoArray[i] = rand() % 100;
        secondoArray[i] = rand() % 100;
        
        //calcolo la somma di ciascun array
        primaSomma = primaSomma + primoArray[i]; //primo array
        secondaSomma = secondaSomma + secondoArray[i]; //secondo array
    }
    
    //se la somma del primo array e minore allora stampo il primo array e poi il secondo
    if(primaSomma < secondaSomma)
    {
        printf("\nLa somma del primo array = %3d e minore del secondo array = %3d\nPrimo array :\n", primaSomma, secondaSomma);
        for(int i = 0; i < ITEM; i++)
        {
            printf("%2d) %3d\n", i, primoArray[i]);
        }
        printf("\n\nSecondo array : \n");
        for(int i = 0; i < ITEM; i++)
        {
            printf("%2d) %3d\n", i, secondoArray[i]);
        }
    }
    //altrimenti se la somma del secondo array e minore stampo prima il secondo
    else if(secondaSomma < primaSomma)
    {
        printf("\nLa somma del secondo array = %3d e minore del primo array = %3d\nSecondo array : \n", secondaSomma, primaSomma);
       for(int i = 0; i < ITEM; i++)
        {
            printf("%2d) %3d\n", i, secondoArray[i]);
        } 
        printf("\n\nPrimo array : \n");
        for(int i = 0; i < ITEM; i++)
        {
            printf("%2d) %3d\n", i, primoArray[i]);
        }
    }
    
    printf("\n\n");
    return 0;
}
