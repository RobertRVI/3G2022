/*
21 dicembre 2021 Its Marchi Robert

Popolare un array con N numeri interi random (range 65-90) con N = 26. 
Stampare le vocali presenti con l'opportuna informazione all'utente. 

input - array N elementi random
output - vocali secondo tabella ascii

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ELEMENTI 26

int main()
{
    int numeri[ELEMENTI];

    srand(time(0));
    for(int i = 0; i < ELEMENTI; i++)
    {
        numeri[i] = rand() %90

        printf("%2d) = %c\n", i + 1, numeri[i]);
    }

    printf("\n\n");
    return 0;
}
