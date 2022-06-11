/*
25 novembre 2021 Its Marchi Robert

Definiamo array

intput - numeri dentro un array

output - contenuto di array

*/

#include<stdio.h>
#define ITEM 6

int main()
{
    int array[ITEM];

    printf("Vado a stampare il contenuto dell' array\n\n");
    for(int i = 0; i <= ITEM; i++)
    {
        printf("%d) Valore = %12d\n", i, array[i]);    
    }
    
    printf("\nVado a impostare i valori dentro l'array a ZERO\n\n");

    for(int i = 0; i <= ITEM; i++)
    {
        array[i] = 0;
    }

    for(int i = 0; i <= ITEM; i++)
    {
        printf("%d) Valore = %d\n", i, array[i]);    
    }

return 0;

}
