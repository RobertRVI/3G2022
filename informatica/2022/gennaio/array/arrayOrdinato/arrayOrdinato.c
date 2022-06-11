/*
11 gennaio Its Marchi Robert

Popolato un array di N interi, si stampi l'array non ordinato e successivamente si ordini l'array.

input - array di N elementi random
output - array ordinato in modo crescente

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ELEMENTI 12

int main()
{
    int array[ELEMENTI];
    int tmp;

    printf("Vado a stampare %d numeri random\n\n", ELEMENTI);
    srand(time(0));
    for(int i = 0; i < ELEMENTI; i++)
    {
        array[i] = rand() %100 + 1;
        printf("%2d) Valore = %3d\n", i + 1, array[i]);
    }


    printf("\n\nAdesso metto in ordine crescente l'array\n\n");

    for(int i = 0; i < ELEMENTI; i++)
    {       
        for(int k = 0; k < ELEMENTI - 1; k++)
        {
            if(array[k] > array[k + 1])
            {
                tmp = array[k];
                array[k] = array[k + 1];
                array[k + 1] = tmp; 
            }
        }          
    }
   
    
    for (int i = 0; i < ELEMENTI; i++)
    {
        printf("%2d) Valore = %3d\n", i + 1, array[i]);
    }
    
    printf("\n\n");
    return 0;
}
