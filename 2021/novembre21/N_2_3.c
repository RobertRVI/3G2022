/*
23 novembre 2021 Its Marchi Robert

stampo numeri pari e divisibili per 3

uso ciclo for con AND '&&' - NOT '!='
*/

#include<stdio.h>
#define VOLTE 50
int main()
{

   printf("Adesso andro a stampare i numeri pari divisibili per 3 fino a %d e i caratteri corrispondenti\n\n", VOLTE);

   for (int i = 0; i < VOLTE; i++)
    {
        if((i % 2 == 0) && (i % 3 == 0) && (i != 0))
        {
            printf("Numero = %2d\n", i);
            printf("Carattere Corrispondente = %c\n", i);
        }



    }


return 0;
}
