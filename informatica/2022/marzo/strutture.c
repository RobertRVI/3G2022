/*
31 marzo 2022 Montecatini Terme Robert

utilizzo della struttura dati eterogenera struct

*/
#include<stdio.h>

int main(){

    struct punto
    {
        char nome;
        float x;
        float y;
    };  
    
    struct punto puntoA, puntoB;
    struct punto puntoSomma, puntoProdotto, puntoDivisione, puntoSottrazione;
    
    puntoA.nome = 'C';
    puntoA.x = 10;
    puntoA.y = 4;
    
    puntoB.nome = 'A';
    puntoB.x = 7;
    puntoB.y = 6;
    
    puntoSomma.nome = 'S';
    puntoSomma.x = puntoA.x + puntoB.x;
    puntoSomma.y = puntoA.y + puntoB.y;
    
    puntoProdotto.nome = 'P';
    puntoProdotto.x = puntoA.x * puntoB.x;
    puntoProdotto.y = puntoA.y * puntoB.y;
    
    puntoDivisione.nome = 'Q';
    puntoDivisione.x = puntoA.x / puntoB.x;
    puntoDivisione.y = puntoA.y / puntoB.y;
    
    puntoSottrazione.nome = 'D';
    puntoSottrazione.x = puntoA.x - puntoB.x;
    puntoSottrazione.y = puntoA.y - puntoB.y;
    printf("\nLa somma di A e C e %c = (%.2f, %.2f)", puntoSomma.nome, puntoSomma.x, puntoSomma.y);
    printf("\nIl prodotto di A e C e %c = (%.2f, %.2f)", puntoProdotto.nome, puntoProdotto.x, puntoProdotto.y);
    printf("\nLa divisione di A e C e %c = (%.2f, %.2f)", puntoDivisione.nome, puntoDivisione.x, puntoDivisione.y);
    printf("\nLa sottrazione di A e C e %c = (%.2f, %.2f)", puntoSottrazione.nome, puntoSottrazione.x, puntoSottrazione.y );
    
    printf("\n\n");
    return 0;
}
