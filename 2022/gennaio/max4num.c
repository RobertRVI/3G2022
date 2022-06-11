/*
20 gennaio 2022 ITSMarchi Robert

Letti tre numeri e memorizzo 
il minore nel primo elemento 
e il maggiore nel terzo elemento

input - 4 numeri da tastiera
output - primo elemento minore e terzo maggiore

utilizzo tre if()
*/

#include<stdio.h>

int main()
{
    int numPrimo, numSecondo, numTerzo, numQuarto; //dichiaro quattro variabili intere
    int tmp;

    printf("\nSeleziona quattro numeri interi\n");
    printf("\nScegli il primo numero: ");
    scanf("%d", &numPrimo);
    printf("\nScegli il secondo numero: ");
    scanf("%d", &numSecondo);
    printf("\nScegli il terzo numero: ");
    scanf("%d", &numTerzo);
    printf("\nScegli il quarto numero: ");
    scanf("%d", &numQuarto);

    printf("\n\nI numeri che hai inserito sono: \n %4d %4d %4d %4d", numPrimo, numSecondo, numTerzo, numQuarto);

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
    if(numPrimo> numQuarto)
    {
        tmp = numPrimo;
        numPrimo = numQuarto;
        numQuarto = tmp; 
    }
    if(numSecondo > numTerzo)
    {
        tmp = numSecondo;
        numSecondo = numTerzo;
        numTerzo = tmp; 
    }
    if(numQuarto > numTerzo)
    {
        tmp = numQuarto;
        numQuarto = numTerzo;
        numTerzo = tmp;
    }
    
    //stampo i valori scambiati informando l'utente
    printf("\n\nOra vado a scambiare i numeri in modo da avere\nCome primo numero il minore\ne come terzo il maggiore:\n\n %4d %4d %4d %4d", numPrimo, numSecondo, numTerzo, numQuarto);

    printf("\n\n");
    return 0;
}
