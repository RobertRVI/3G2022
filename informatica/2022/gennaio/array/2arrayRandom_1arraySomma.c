/*
16 gennaio 2022 Montecatini Terme Robert 

Dati 2 array random modulo 100 di interi di lunghezza ITEM, senza stampare gli array di partenza, si calcoli un terzo array somma. Stampare l'array somma informando l'utente.

utilizzo la funzione rand(), e cicli for()

input - 2 array di ITEM interi random 
output - 1 array somma 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ITEM 10

int main()
{
    int primoArray[ITEM];
    int secondoArray[ITEM];
    int arraySomma[ITEM];
    
    printf("\n\nFaccio la somma tra il contenuto del primo array \ncon il contenuto dell'indice corrispondente nel secondo array \ne salvo la somma nell' indice corrispondente di un terzo array \nche poi vado a stampare :\n\n");
    
    srand(time(0));
    for(int i = 0; i < ITEM; i++)
    {
        primoArray[i] = rand() % 100;
        secondoArray[i] = rand() % 100;
        
        //faccio la somma tra il contenuto di primoArray[i] e secondoArray[i] e memorizzo la somma in arraySomma[i]
        arraySomma[i] = primoArray[i] + secondoArray[i]; 
        
        printf("%2d) %3d\n", i, arraySomma[i]);
    }

    printf("\n\n");
    return 0;
}
