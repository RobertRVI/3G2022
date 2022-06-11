/*
25gennaio ITSMarchi Robert

Popolo un array con N interi random 

input - array popolato random
output - array

utilizzo do- while();
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ITEM 10

int main()
{
    int array[ITEM];
    int i;

    //informo l'utente
    printf("\nStampo un array di %d elementi popolato casualmente utilizzando do-while();\n", ITEM);
    srand(time(0));

    //popolo e stampo l'array fin che l'indice è minore di item
    i = 0;
    do 
    {
        array[i] = rand() % 100;
        printf("%3d", array[i]);
        i++;
    }
    while(i < ITEM); //condizione

    printf("\n\n");
    return 0;
}
