/*
21 dicembre Its Marchi Robert

Scrivere una password random di 12 caratteri che contenga soltanto caratteri stampabile (USO TABELLA ASCII).
Stampare la password e informare debitamente l'utente.

input - paswword random
output - password
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define CARATTERI 12

int main()
{
    int password[CARATTERI];

    printf("Vado a generare una password di 12 caratteri casuali\n\n");
    
    srand(time(0));
    for(int i = 0; i < CARATTERI; i++)
    {
        password[i] = rand() % 94 + 32;
        
        printf("%c", password[i]);
    }

    printf("\n\n");
    return 0;
}
