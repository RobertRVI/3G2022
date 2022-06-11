/*
21 dicemrbe Its Marchi Robert

Popolare un array con N numeri interi random (range 1-999) con N = 100. 
stampare i soli numeri che sono dispari e divisibili per 67 o
sono pari e divisibili per 61. Fornire l'opportuna informazione all'utente.

input - array N elementi
output - numeri dispari divisibili per 67 o pari divisibili per 61 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ELEMENTI 100

int main()
{
    int numeri[ELEMENTI];

    printf("\nVado a stampare prima i numeri dispari divisibili per 67\n di un array con valori random da 1 a 999\n\n");
    srand(time(0));
    for(int i = 0; i < ELEMENTI; i++)
    {
        numeri[i] = rand() %999 + 1;

        if((numeri[i] %2 ==1) && (numeri[i] % 67 == 0))
        {
            printf("%3d) Valore = %3d\n", i + 1, numeri[i]);
        }
    }
    
    printf("\nAdesso stampo solo i valori pari divisibili per 61\n\n");
    for(int i = 0; i < ELEMENTI; i++)
    {
        if((numeri[i] %2 ==0) && (numeri[i] % 61 == 0))
        {        
            printf("%3d) Valore = %3d\n", i + 1, numeri[i]);
        }    
    }

    printf("\nSe non viene visualizzato nessuno numero\ne perche i valori random inseriti dal computer\nnon sono rispecchiato le necessita che chiediamo");

    printf("\n\n");
    return 0;
}
