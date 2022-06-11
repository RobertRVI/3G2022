/*
1 aprile 2022 Montecatini Terme Robert

utilizzo della struttura struct 

Creazione delle funzioni per somma, sottrazione, prodotto e divisione

*/
#include <stdio.h>

struct punto
{
    char nome;
    float x;
    float y;
};

struct punto setPunto(char nome, float x, float y);
struct punto somma(struct punto puntoA, struct punto puntoB);
struct punto sottrazione(struct punto puntoA, struct punto puntoB);
struct punto prodotto(struct punto puntoA, struct punto puntoB);
struct punto divisione(struct punto puntoA, struct punto puntoB);

int main()
{
    struct punto puntoA, puntoB;
    struct punto puntoSomma, puntoSottrazione, puntoProdotto, puntoDivisione;
    
    puntoA = setPunto('A', 5.2, 8.8);
    puntoB = setPunto('B', 3.4, 2.2);
   
    puntoSomma = somma(puntoA, puntoB);
    puntoSottrazione = sottrazione(puntoA, puntoB);
    puntoProdotto = prodotto(puntoA, puntoB);
    puntoDivisione = divisione(puntoA, puntoB);

    
    printf("\nLa somma del punto A con B e %c = (%.2f, %.2f)", puntoSomma.nome, puntoSomma.x, puntoSomma.y);
    printf("\nLa sottrazione del punto A con B e %c = (%.2f, %.2f)", puntoSottrazione.nome, puntoSottrazione.x, puntoSottrazione.y);
    printf("\nIl prodotto del punto A con B e %c = (%.2f, %.2f)", puntoProdotto.nome, puntoProdotto.x, puntoProdotto.y);
    printf("\nLa divisione del punto A con B e %c = (%.2f, %.2f)", puntoDivisione.nome, puntoDivisione.x, puntoDivisione.y);
    
    
    printf("\n\n");
    return 0;
}

struct punto setPunto(char nome, float x, float y)
{
    struct punto puntoInizializzato;
    puntoInizializzato.nome = nome;
    puntoInizializzato.x = x;
    puntoInizializzato.y = y;
    
    return puntoInizializzato;
}

struct punto somma(struct punto puntoA, struct punto puntoB)
{
    struct punto puntoSomma;
    puntoSomma = setPunto('S', puntoA.x + puntoB.x, puntoA.y + puntoB.y);
    
    return puntoSomma;
}

struct punto sottrazione(struct punto puntoA, struct punto puntoB)
{
    struct punto puntoSottrazione;
    puntoSottrazione = setPunto('s', puntoA.x - puntoB.x, puntoA.y - puntoB.y);
    
    return puntoSottrazione;
}

struct punto prodotto(struct punto puntoA, struct punto puntoB)
{
    struct punto puntoProdotto;
    puntoProdotto = setPunto('P', puntoA.x * puntoB.x, puntoA.y * puntoB.y);
    
    return puntoProdotto;
}

struct punto divisione(struct punto puntoA, struct punto puntoB)
{
    struct punto puntoDivisione;
    puntoDivisione = setPunto('Q', puntoA.x / puntoB.x, puntoA.y / puntoB.y);
    
    return puntoDivisione;
}
