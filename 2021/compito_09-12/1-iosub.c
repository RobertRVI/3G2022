/*
09 dicembre 2021 Its Marchi Robert

dati 4 numeri interi stampare il minore

input - 4 numeri
output - minore dei 4

uso else if
*/

#include<stdio.h>

int main()

{
    int numPrimo, numSecondo, numTerzo, numQuarto;

    printf("\nDati quattro numeri vado a vedere qual è il minore.\n");


    numPrimo = 12;
    numSecondo = 3;
    numTerzo = 134;
    numQuarto = 25;

    printf("\nIl valore del primo numero è: %d \nIl secondo è: %d \nIl terzo è: %d \nIl quarto numero è: %d \n", numPrimo, numSecondo, numTerzo, numQuarto);

    //vado a controllare quale dei numeri dati è minore
    if((numPrimo < numSecondo) && (numPrimo < numTerzo) && (numPrimo < numQuarto))
    {
        printf("\nIl minore dei quattro numeri è %d", numPrimo);
    }
    else if ((numSecondo < numPrimo) && (numSecondo < numTerzo) && (numSecondo < numQuarto))
    {
        printf("\nIl minore dei quattro numeri è %d", numSecondo);
    }
    else if ((numTerzo < numPrimo) && (numTerzo < numSecondo) && (numTerzo < numQuarto))
    {
        printf("\nIl minore dei quattro numeri è %d", numTerzo);
    }
    else
    {
        printf("\nIl minore dei quattro numeri è %d", numQuarto);
    }
    
    printf("\n\n");

return 0;
}
