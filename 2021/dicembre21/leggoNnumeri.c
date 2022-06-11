/*
16 dicembre 2022 Its Marchi Robert

leggo N numeri da tastiera 
con N dato

input - array N numeri inseriti da tastiera

output - il contenuto dell'array

ciclo for
*/

#include<stdio.h>
#define ITEM 5

int main()
{
    //dichiaro un array per memorizzare N numeri 
    int numeri[ITEM];

    
    for(int i = 0; i < ITEM; i++)
    {
        printf("\nInserisci il %2d valore di %d numeri: ", i + 1, ITEM); 
        scanf("%d", &numeri[i]);   
    }
    

    //stampo il contenuto dell'array
    printf("\n\nVado a stampare tutti i valori");
    for(int i = 0; i < ITEM; i++)
    {
        printf("\n%2d) Valore = %4d", i + 1, numeri[i]);
    }

    printf("\n\n");
    return 0;
}
