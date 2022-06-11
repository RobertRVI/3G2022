/*
25 gennaio 2022 ITSMarchi Robert

Popolare un array di N interi utilizzando while()

input - array N interi
output - array

utilizzo funzione while()
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ITEM 10

int main()
{
    int array[ITEM];
    int i;
    
    printf("\nStampo un array di %d elementi popolato casualmente\n", ITEM);
    srand(time(0));
    i = 0; //inizializzo l'indice a zero
    while(i < ITEM) //mentre l'indice è minore di ITEM popolo l'array
    {
        array[i] = rand() % 100;
        printf("%3d", array[i]);
        i++;
    }
    
    printf("\n\n");
    return 0;  
}
