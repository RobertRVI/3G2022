/*
19 novembre 2021 Its Marchi Robert

inverto il segno del numero in ingresso
esempio: 
input - n positivo --- output - n negativo

uso printf e scanf e if (condition)

capire se lo zero e vero o falso
*/

#include<stdio.h>
int main()
{

int numero;

printf("Seleziona un valore intero:");
scanf("%d", &numero);

if (numero>0)
{
printf("\nHai inserito un numero positivo quindi stampo un numero negativo:\n");

numero = (-1) * numero;

printf("Il numero invertito di segno e %d\n\n", numero);

}
else 
{
printf("\n\nHai inserito un numero negativo quindi stampo un numero positivo:\n");

numero = (-1) * numero;

printf("Il numero invertito di segno e %d\n\n", numero);

}

return 0;


}
