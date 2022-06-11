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
        printf("%2d) Valore = %3d\n", i, array[i]);
    }

    printf("\n\nAdesso metto in ordine crescente l'array\n\n");
    for(int i = 0; i < ELEMENTI; i++)
    {
        for(int i = 0; i < ELEMENTI; i++)
        {
            for(int i = 0; i < ELEMENTI; i++)
            {
                tmp = 0;
                if((array[i + 1] > 0) && (array[i + 1] < array[i]))
                {
                    tmp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = tmp; 
                }
            }
        }
    
        printf("%2d) Valore = %3d\n", i, array[i]);
      
    }

    printf("\n\n");
    return 0;
}
