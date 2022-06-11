/*
9 dicembre 2021 Its Marchi Robert

Letti N numeri reali positivi trovare il maggiore

input - array N elementi
output - maggiore

uso scanf - ciclo for 
*/

#include<stdio.h>
#define ELEMENTI 10
int main()
{
    float array[ELEMENTI];
    float maggiore = 0;

    printf("Adesso ti faro inserire %d elementi reali positivi: ", ELEMENTI);

    for(int i = 0; i < ELEMENTI; i++)
    {
        printf("\nInserisci numero: ");
        scanf("%f", &array[i]);
    }

    printf("\nBene adesso andro a verificare qual è il maggiore: \n");

    for(int i = 0; i < ELEMENTI; i++)
    {
        if(maggiore > array[i])
        {
            i++;
        }
        else
        {
            maggiore = array[i];
        }
    }

    printf("\n Il maggiore dei numeri da te inseriti è %f ", maggiore);

    printf("\n\n");
    return 0;
}
