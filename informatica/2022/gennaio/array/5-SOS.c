/*
21 gennaio 2022 Montecatini Terme Robert

Dato random un array di TRE caratteri nel range A-Z ripetere il popolamento finché si forma nell'array la parola SOS. Calcolare il numero delle ripetizioni necessarie.

input - array popolato casualmente 
output - array caricato con la parola SOS e il numero dei tentativi necessari

utilizzao la funziona rand(); if(); for()
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ELEMENTI 3
#define MAXTENTATIVI 17576 //calcolato facendo il cubo di 26 che sono le lettre nell'alfabeto; cubo perche SOS formato da tre caratteri

int main()
{
    char array[ELEMENTI];
    int tentativi, j = 0;
    
    printf("\nPopolo un array con valori random fin che non ottengo la parola SOS\n\n");
    srand(time(0));
    for(int k = 0; k <= MAXTENTATIVI; k++)
    {
        tentativi++;
        for(int i = 0; i < ELEMENTI; i++)
        {
            array[i] = rand() % 26 + 65;
        }
        if((array[j] == 'S') && (array[j + 1] == 'O') && (array[j + 2] == 'S'))
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
