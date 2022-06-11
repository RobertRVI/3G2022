/*
16 gennaio 2022 Montecatini Terme Robert 

Dati 2 array random modulo 100 di interi di lunghezza ITEM, senza stampare gli array di partenza, si calcoli l'array differenza impostando a zero soltanto se l'elemento dell'array differenza è negativo.

utilizzo la funzione rand(), e cicli for()

input - 2 array di ITEM interi random 
output - 1 array differenza impostato a 0 se differenza < 0 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ITEM 10

int main()
{
    int primoArray[ITEM];
    int secondoArray[ITEM];
    int arrayDifferenza[ITEM];
    
    //informo l'utente cosa andro a fare
    printf("\n\nCalcolo la differenza tra il contenuto del primo array \ne del contenuto, dell'indice corrispondente nel secondo array \ne memorizzo la differenza nell' indice corrispondente di un terzo array \nche poi vado a stampare :\n\n");
    
    printf("Se la differenza e negativa, ovvero minore di zero,\nimposto il valore a 0\n\n");
    
    srand(time(0));
    for(int i = 0; i < ITEM; i++)
    {
        primoArray[i] = rand() % 100;
        secondoArray[i] = rand() % 100;
        
        //calcolo la differenza tra il contenuto di primoArray[i] e secondoArray[i] memorizzando la differenza in arrayDifferenza[i]
        arrayDifferenza[i] = primoArray[i] - secondoArray[i];
        
        if(arrayDifferenza[i] < 0)
        {
            arrayDifferenza[i] = 0;
        } 
        
        printf("%2d) %3d\n", i, arrayDifferenza[i]);
    }

    printf("\n\n");
    return 0;
}
