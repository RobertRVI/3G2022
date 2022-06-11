/*

18 novembre 2021 Its Marchi Robert

scambio di 2 numeri

utilizzo una variabile temporanea TMP

visualizzo i due numeri e i du numeri scambiati

*/

#include<stdio.h>

int main()
{
int primoNumero, secondoNumero, tmp;

primoNumero = 5;
secondoNumero = 8;

printf("I numeri sono:\n");
printf("Il primo numero e %d,\tIl secondo numero e %d\n\n", primoNumero, secondoNumero);

tmp = primoNumero;
primoNumero = secondoNumero;
secondoNumero = tmp;

printf("I numeri scambiati sono:\n");
printf("Il primo numero e %d,\tIl secondo numero e %d\n\n", primoNumero, secondoNumero);

return 0;
}
