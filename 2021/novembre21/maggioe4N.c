/*
27 novembre 201 Its Marchi Robert

mostro il maggiore fra 4 numeri 
inseriti dall ' utente

utilizzo if - else if - else
printf - scanf

*/

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;

    printf("\nVado a confrontare quattro numeri inseriti dall' utente per vedere il maggiore\n\n");

    printf("Seleziona il primo numero: ");
    scanf("%d", &num1);

    printf("\nSeleziona il secondo numero: ");
    scanf("%d", &num2);

    printf("\nSeleziona il terzo numero: ");
    scanf("%d", &num3);

    printf("\nSeleziona il quarto numero: ");
    scanf("%d", &num4);

    if((num1 > num2) && (num1 > num3) && (num1 > num4))
    {
        printf("\n\nIl maggiore è %d", num1);
    }

    else if ((num2 > num1) && (num2 > num3) && (num2 > num4))
    {
        printf("\nIl maggiore è %d", num2);
    }

    else if (() && () && ())

return 0;
}
