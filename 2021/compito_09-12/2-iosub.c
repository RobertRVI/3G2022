/*
9 dicembre 2021 Its Marchi Robert

dati 5 numeri interi stabilire se sono pari o dispari

input - 5 numeri
output - pari o dispari

uso else if
*/

#include<stdio.h>

int main()
{
    int numPrimo, numSecondo, numTerzo, numQuarto, numQuinto;
    
    numPrimo = 12;
    numSecondo = 51;
    numTerzo = 34;
    numQuarto = 9;
    numQuinto = 21;

    printf("\n\nVado a vedere alcuni numeri se sono pari o dispari\n\n");

    //primo numero
    if(numPrimo %2 == 0)
    {
        printf("\nIl numero %d è pari", numPrimo);
    }
    else if(numPrimo %2 == 1)
    {
        printf("\nIl numero %d è dispari", numPrimo);
    }

    //secondo numero
    if(numSecondo %2 == 0)
    {
        printf("\nIl numero %d è pari", numSecondo);
    }
    else if(numSecondo %2 == 1)
    {
        printf("\nIl numero %d è dispari", numSecondo);
    }

    //terzo numero
    if(numTerzo %2 == 0)
    {
        printf("\nIl numero %d è pari", numTerzo);
    }
    else if(numTerzo %2 == 1)
    {
        printf("\nIl numero %d è dispari", numTerzo);
    }
    
    //quarto numero
    if(numQuarto %2 == 0)
    {
        printf("\nIl numero %d è pari", numQuarto);
    }
    else if(numQuarto %2 == 1)
    {
        printf("\nIl numero %d è dispari", numQuarto);
    }

    //quinto numero
    if(numQuinto %2 == 0)
    {
        printf("\nIl numero %d è pari", numQuinto);
    }
    else if(numQuinto %2 == 1)
    {
        printf("\nIl numero %d è dispari", numQuinto);
    }
    printf("\n\n");

    return 0;
}
