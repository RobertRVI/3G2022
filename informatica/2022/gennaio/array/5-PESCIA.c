/*
21 gennaio 2022 Montecatini Terme Robert

Dato random un array di SEI caratteri nel range A-Z ripetere il popolamento finché si forma nell'array la parola PESCIA. Calcolare il numero delle ripetizioni necessarie.

input - array popolato casualmente 
output - array caricato con la parola PESCIA ed il numero dei tentativi necessari
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ELEMENTI 6
#define MAXTENTATIVI 308915776 //calcolato facendo la potenza di 26 elevata al numero di lettere

int main()
{
    char array[ELEMENTI];
    int tentativi = 0, j = 0;
    
    printf("\nVado a popolare un array con valori random fin che non ottengo la parola PESCIA\n\n");
    srand(time(0));
    for(int k = 0; k <= MAXTENTATIVI; k++)
    {
        tentativi++;
        for(int i = 0; i < ELEMENTI; i++)
        {
            array[i] = rand() % 26 + 65;
        }
        if((array[j] == 'P') && (array[j + 1] == 'E') && (array[j + 2] == 'S') && (array[j + 3] == 'C') && (array[j + 4] == 'I') && (array[j + 5] == 'A'))
        {
            k = MAXTENTATIVI;
        }
    }
    printf("\nCi sono voluti %d tentativi per ottenere la parola ", tentativi);
    for(int i = 0; i < ELEMENTI; i++)
    {
        printf("%c", array[i]);
    }
    
    printf("\n\n");
    return 0;
}
