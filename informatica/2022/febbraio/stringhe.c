/*
11 febbraio 2022 Montecatini Terme Robert

Dichiare un array di 80 char, leggere n caratteri da tastiera codificarli e decodificarli 

input - N caratteri da tastiera
output - array codificato e decodificato

utilizzo funzioni
*/
#include<stdio.h>
#define CARATTERI 80
int inputStringa(char stringa[], int lunghezza)
{
    char c;
    int i;
    i = 0;
    printf("\nScrivi qualcosa:\n");
    while((i < lunghezza) && (c != '\n'))
    {
        scanf("%c", &c);
        stringa[i] = c;
        i++;
    }
    stringa[i] = '\0';
    
    return 0;
}

int codificaStringa(char stringa[], int lunghezza)
{
    int i = 0;
    printf("\n\nVado a codificare la stringa\n");
    while((i < lunghezza) && (stringa[i] != '\0'))
    {
        stringa[i] += 1;
        i++;
    }
    
    return 0;
}

int decodificaStringa(char stringa[], int lunghezza)
{
    int i = 0;
    printf("\n\nVado a decodificare la stringa\n");
    while((i < lunghezza) && (stringa[i] != '\0'))
    {
        stringa[i] -= 1;
        i++;
    }
    
    return 0;
}

int stampaStringa(char stringa[], int lunghezza)
{
    int i = 0;
    
    printf("\nLa stringa corrisponde a :\n");
    while((i < lunghezza) && (stringa[i] != '\0'))
    {
        printf("%c", stringa[i]);
        i++;
    }
    
    return 0;
}

int main(void)
{
    char frase[CARATTERI];
    
    inputStringa(frase, CARATTERI);
    codificaStringa(frase, CARATTERI);
    stampaStringa(frase, CARATTERI);  
    decodificaStringa(frase, CARATTERI);
    stampaStringa(frase, CARATTERI);
    
    printf("\n\n");
    return 0;
}
