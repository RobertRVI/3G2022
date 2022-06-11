/*
21 gennaio 2022 Montecatini Terme Robert

un array numerico sei di interi da 1-90 e cercare la combinazione 3 7 20 22 77 90
Calcolare il numero delle giocate

input - array popolato casualmente 
output - array caricato con la combinazione 3 7 20 22 77 90

utilizzao la funziona rand(); if(); for()
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ELEMENTI 6

int main()
{
    int array[ELEMENTI];
    int giocate = 0, j = 0;
    long double MAXGIOCATE = 531441000000; //calcolato facendo la potenza di 90 elevata al numero di numeri della combinazione
    printf("\nVado a popolare un array con valori random fin che non ottengo la combinazione \n3 7 20 22 77 90\n");
    printf("Ci sono miliardi di combinazioni quindi ci vorra un bel po.\n");
    srand(time(0));
    for(long double k = 0; k <= MAXGIOCATE; k++)
    {
        giocate++;
        if((array[j] == 3) && (array[j + 1] == 7) && (array[j + 2] == 20) && (array[j + 3] == 22) && (array[j + 4] == 77) && (array[j + 5] == 90))
        {
            k = MAXGIOCATE;
        }
        else
        {
            for(int i = 0; i < ELEMENTI; i++)
            {
                array[i] = rand() % 90 + 1;
            }
        }
        
    }
    printf("\nSono state effettuate %d giocate prima di ottenere la combinazione ", giocate);
    for(int i = 0; i < ELEMENTI; i++)
    {
        printf("%3d", array[i]);
    }
    
    printf("\n\n");
    return 0;
}

