/*
21 dicembre Its Marchi Robert

Popolare un array con N numeri interi random con N = 12. Stampare l'array ottenuto con  l'opportuna informazione all'utente. 
Successivamente, scorrendo una sola volta l'array si scambia l'elemento con l'elemento successivo se il successivo è minore. 
Ri-stampare l'array ottenuto con  l'opportuna informazione all'utente.

input - array N elementi
output - array normale e poi con lo scambio del contenuto se il successivo e minore

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

    printf("Adesso vado a scambiare il valore con il successivo se questo e minore\n\n");
    for(int i = 0; i < ELEMENTI; i++)
    {
        tmp = 0;
        if(array[i + 1] < array[i])
        {
            tmp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = tmp; 
        }
        printf("%2d) Valore = %3d\n", i, array[i]);
    }




    printf("\n\n");
    return 0;
}
