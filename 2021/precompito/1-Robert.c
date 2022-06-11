/*
2 dicembre 2021 Its Marchi Robert

dati o letti 4 numeri trovare il minore

intput - numero intero
output - minore

uso della if 

*/

#include<stdio.h>

int main()
{
    int primoNumero, secondoNumero, terzoNumero, quartoNumero, minore;

    printf("\nTrovo il minore tra quattro numeri interi\n\n");

    //input dei numeri dall'utente
    printf("\n\nSeleziona il primo numero intero:");
    scanf("%d", &primoNumero);

    printf("\nSeleziona il secondo numero intero:");
    scanf("%d", &secondoNumero);

    printf("\nSeleziona il terzo numero intero:");
    scanf("%d", &terzoNumero);

    printf("\nSeleziona il quarto numero intero:");
    scanf("%d", &quartoNumero);

    if((primoNumero < secondoNumero) && (primoNumero < terzoNumero) && (primoNumero < quartoNumero))
    {
        printf("\n\nIl minore tra i numeri da te selezionati è %d", primoNumero);   
    }
    
    else if ((secondoNumero < primoNumero) && (secondoNumero < terzoNumero) && (secondoNumero < quartoNumero))
    {
        printf("\n\nIl minore tra i numeri da te selezionati è %d", secondoNumero);
    }
    else if ((terzoNumero < primoNumero) && (terzoNumero < secondoNumero) && (terzoNumero < quartoNumero))
    {
        printf("\n\nIl minore tra i numeri da te selezionati è %d", terzoNumero);
    }
    else
    {
        printf("\n\nIl minore tra i numeri da te selezionati è %d", quartoNumero);
    }

    printf("\n\n");
    return 0;
}
