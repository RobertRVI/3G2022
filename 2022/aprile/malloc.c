/*
*   28 aprile 2022 ItsMarchi Robert
*   
*   uso della funzione malloc() per costruire variabili dinamiche 
*
*/

#include<stdio.h>
#include<stdlib.h>
#define LENGTH 50
#define POSTIDINAMICI 5

struct car{

    char targa[LENGTH];
    char modello[LENGTH];
    char motore[LENGTH];
    char venduta[LENGTH];
    int posizione;
};


int main()
{
    struct car *pCar[POSTIDINAMICI]; 
    
    printf("\nMemoria occupada da una struct car: %d\n\n", sizeof(struct car));

    for(int i = 0; i < POSTIDINAMICI; i++)
    {
        pCar[i]= (struct car *)malloc(sizeof(struct car)); 
        (*pCar[i]).posizione = i;      
    }

    
    printf("\n\n");
    return 0;
}
