/*
20 gennaio 2022 ITSMarchi Robert

Letti tre numeri e memorizzo 
il minore nel primo elemento 
e il maggiore nel terzo elemento

input - 3 numeri da tastiera
output - primo elemento minore e terzo maggiore

utilizzo tre if()
*/

#include<stdio.h>

int main()
{
    int numPrimo, numSecondo, numTerzo; //dichiaro tre variabili intere
    int tmp;

    //Faccio inserirre all'utente i valori interi
    printf("\nSeleziona tre numeri interi\n");
    printf("\nScegli il primo numero: ");
    scanf("%d", &numPrimo);
    printf("\nScegli il secondo numero: ");
    scanf("%d", &numSecondo);
    printf("\nScegli il terzo numero: ");
    scanf("%d", &numTerzo);

    //confronto i tre numeri e faccio degli scambi
    if(numPrimo > numSecondo)
    {
        tmp = numPrimo;
        numPrimo = numSecondo;
        numSecondo = tmp;
    }
    if(numPrimo > numTerzo)
    {
        tmp = numPrimo;
        numPrimo = numTerzo;
        numTerzo = tmp;
    }
    if(numSecondo > numTerzo)
    {
        tmp = numSecondo;
        numSecondo = numTerzo;
        numTerzo = tmp; 
    }

    //stampo i valori scambiati informando l'utente
    printf("\nAdesso vado a scambiare i numeri al fine di ottenere\nCome primo numero il minore\ne come terzo il maggiore:\n\n %d\t%d\t%d", numPrimo, numSecondo, numTerzo);
    
    printf("\n\n");
    return 0;
}
