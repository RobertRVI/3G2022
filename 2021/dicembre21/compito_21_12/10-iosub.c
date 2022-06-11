/*NON FINITO*/

/*
21 dicembre Its Marchi Robert

Popolare un array con N numeri interi random (range 1-100) con N = 10. 
Stampare l'array ordinato in modo crescente con l'opportuna informazione all'utente.

input - array di N elementi random
output - array ordinato in modo crescente

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ELEMENTI 10

int main()
{
    int numeri[ELEMENTI];
    int minore;
    int tmp;
    
    printf("\nVado a stampare dei numeri casuali tra 1 e 100\n\n");
    srand(time(0));
    for(int i = 0; i < ELEMENTI; i++)
    {
        numeri[i] = rand() %100 + 1;
        printf("%2d) valore = %3d\n", i + 1, numeri[i]);
    }
    

    printf("\nAdesso metto in ordine crescente questi elementi\n\n");
    for(int i = 0; i < ELEMENTI; i++)
    {
        tmp = numeri[i];
        minore = 999;
        for(int k = i; k < ELEMENTI; k++)
        {
            if(numeri[i] < minore)
            {
                minore = numeri[i];                      
            }

            for(int i = 0; i < ELEMENTI; i++)
            {
                if(minore == numeri[i])
                {
                    numeri[i] = tmp;
                }            
            } 

        }

        numeri[i] = minore;

    }

    for(int i = 0; i < ELEMENTI; i++)
        {
            printf("%2d) valore = %3d\n", i + 1, numeri[i]);
        }


    printf("\n\n");
    return 0;
}
