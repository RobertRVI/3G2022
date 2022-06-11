/*
11 gennaio Its Marchi Robert

Popolato un array di N interi, si stampi l'array non ordinato e successivamente si ordini l'array stampando ad ogni iterazione del primo ciclo for il numero di scambi avvenuti e l'indice del ciclo.

input - array di N elementi random
output - array ordinato in modo crescente

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ELEMENTI 12

int main()
{
    int numeri[ELEMENTI];
    int tmp, scambio;

    printf("\tVado a stampare %d numeri random\n\n\t", ELEMENTI);
    
    //carico l'array con numeri random compresi tra 0-100
    srand(time(0));
    for(int i = 0; i < ELEMENTI; i++)
    {
        numeri[i] = rand() %100 + 1;
        printf("%3d", numeri[i]);
    }


    printf("\n\n\tAdesso metto in ordine crescente l'array\n\n");

    //metto in ordine crescente i numeri  
    for(int i = 0; i < ELEMENTI; i++)
    {       
        scambio = 0;
        for(int k = 0; k < ELEMENTI - 1; k++)
        {
            if(numeri[k] > numeri[k + 1])
            {
                tmp = numeri[k];
                numeri[k] = numeri[k + 1];
                numeri[k + 1] = tmp;
                scambio++; 
            }
        } 
        
        printf("\n%3d) swp = %2d ", i, scambio); 
        
        //stampo ogni iterazione con il numeri di scambi effettuati
        for (int i = 0; i < ELEMENTI; i++)
        {
            printf(" %3d", numeri[i]);
        }        
        
    }
   
    printf("\n\n\tOra l'array e ordinato:\n\n\t");
    //stampo l'array riordinato
    for (int i = 0; i < ELEMENTI; i++)
    {
        printf("%3d", numeri[i]);
    }
    
    printf("\n\n");
    return 0;
}
