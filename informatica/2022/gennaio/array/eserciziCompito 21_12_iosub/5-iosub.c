/*
3 gennaio 2022 Montecatini Temre Robert

Popolare un array con N numeri interi random (range 65-90) con N = 26. 
Stampare le vocali presenti con l'opportuna informazione all'utente.

input - N ELEMENTI random compresi tra 65 e 90
output - vocali 

uso ciclo for - if - or
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ELEMENTI 26

int main(void) 
{
    int array[ELEMENTI];

    printf("\nVado a caricare un array con numeri random range 65-90.\nPoi stampo solo i valori corrispondenti a vocali secondo la tabella ASCII\n\n");
    srand(time(0));
    for(int i = 0; i < ELEMENTI; i++)
    {
        array[i] = rand() % 26 + 65;
    
        if((array[i] == 'A') || (array[i] == 'E') || (array[i] == 'I') || (array[i] == 'O') || (array[i] == 'U'))
        {
            printf("\n Valore = %d -- Tabella ASCII == %c", array[i], array[i]);
        }
    
    }



    printf("\n\n");
    return 0;
}
