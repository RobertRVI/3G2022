/*
3 febbraio 2022 ITSMarchi Robert

creo le funzioni per calcolare il doppio, la meta, la potenza e radice di un numero

input - n
output - doppio n; meta di n; potenza di n; moltilicazione tra n e m; radice di n

creo funzioni diverse per ogni operazione

*/

#include<stdio.h>

int doppio(int n)
{
    int risultato;
    risultato = 2 * n;

    return (risultato);
}

float dimezza(float n)
{
    float risultato;
    risultato = n / 2;

    return (risultato);
}

int moltiplica(int n, int m)
{
    int risultato;
    risultato = n * m;

    return (risultato);
}

int potenza(int base, int e)
{
    int risultato = base;
    for(int i = 0; i < e - 1; i++)
    {
        risultato = risultato * base;
    }
    return (risultato);
}

int radice(int n)
{
    int risultato;
    int potenza; 

    for(int divisore = 0; divisore < n; divisore++)
    {
        potenza = divisore * divisore;
        risultato = divisore;
        
        if(potenza > n)
        {
            divisore = n - 1; 
            risultato--;
        }
    }
    
    return (risultato);  
}

int main(void)
{
    float valore;
    valore = doppio(4);
    printf("\n\nDoppio = %.0f", valore);

    valore = dimezza(5);
    printf("\n\nMetà = %.2f", valore);

    valore = potenza(2, 6);
    printf("\n\nPotenza = %.0f", valore);

    valore = moltiplica(4, 7);
    printf("\n\nMoltiplicazione = %.0f", valore);

    valore = radice(49);
    printf("\n\nRadice = %.0f", valore);

    printf("\n\n");
    return 0;
}
