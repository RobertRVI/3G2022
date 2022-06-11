/*
9 dicembre 2021 Its Marchi Robert

stampare i numeri primi da 1 a 100

input - numeri da 1 a 100
output - numeri primi

uso ciclo for 
*/

#include<stdio.h>
#define ELEMENTI 100
#define DIVISORIMAX 2

int main()
{
    int numero;
    int numDivisori;
    int ultimoDivisore;
    
    printf("\nVado a stampare i numeri primi compresi tra 1 e 100\n\n");
    
    for(int i = 1; i <= ELEMENTI; i++)
    {
        numero = i;
        numDivisori = 0;

        for(ultimoDivisore = 1; ultimoDivisore <= numero; ultimoDivisore++)
        {
            if(numero %ultimoDivisore == 0)
            {
                numDivisori++;            
            }    
        }
    
        /*un numero per essere primo deve essere diisibile per 1 e per se stesso
        quindi non puo avere piu di 2 divisori*/

        if(numDivisori <= DIVISORIMAX)
        {
            printf("\nIl numero %2d è un numero primo", numero);
        }

    }    

    printf("\n\n");
    return 0;
}
