/*

18 novembre 2021 Its Marchi Robert

media di 4 numeri in input 

uso formula matematica della media 

differente comportamento variabili int e float

uso parametro %.2f per mostrare solo 2 cifre decimali

*/

#include<stdio.h>

int main()
{

int primoNumero, secondoNumero, terzoNumero, quartoNumero;
int mediaIntera, totaleNumeri;
float mediaReale;

totaleNumeri = 4;
primoNumero = 3;
secondoNumero = 5;
terzoNumero = 10;
quartoNumero = 20;

mediaReale = (primoNumero + secondoNumero + terzoNumero + quartoNumero)/totaleNumeri;
mediaIntera = (primoNumero + secondoNumero + terzoNumero + quartoNumero)/totaleNumeri;


printf("\n\nIl primo numero e %d\n", primoNumero);
printf("Il secondo numero e %d\n", secondoNumero);
printf("Il terzo numero e %d\n", terzoNumero);
printf("Il quarto numero e %d\n\n", quartoNumero);

printf("La media intera dei numeri e %d\n", mediaIntera);
printf("La media reale dei numeri e %.2f\n\n", mediaReale);

return 0;

}
