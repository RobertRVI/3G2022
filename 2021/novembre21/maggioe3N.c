/*
27 novembre 2021 Its Marchi Robert

controllo il maggiore tra 3 numeri 
inseriti dall' utente

utilizzo if- else if - else
printf - scanf
*/

#include<stdio.h>

int main()
{
    int num1, num2, num3;    

    printf("\nConfronto tre numeri per vedere qual è il maggiore\n\n");

    printf("Scegli il primo numero: ");
    scanf("%d", &num1);

    printf("\nScegli il secondo numero: ");
    scanf("%d", &num2);

    printf("\nScegli il terzo numero: ");
    scanf("%d", &num3);

    if((num1 > num2) && (num1 > num3))
    {
        printf("\n\nIl maggiore è %d\n\n", num1);
    }

    else if ((num2 > num1) && (num2 > num3))
    {
        printf("\n\nIl maggiore è %d\n\n", num2);
    }

    else
    {
        printf("\n\nIl maggiore è %d\n\n", num3);
    }


return 0;
}
