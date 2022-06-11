/*
11 novembre 2021 - Its Marchi Pescia - Robert

calcolo area e circonferenza del cerchio

input - raggio

uso dei tipi primitivi e loro limmitazioni
uso di printf

*/

#include<stdio.h>

int main()
{
char nomeCirconferenza = 'C';
int raggio; //dichiaro la variabile raggio
float piGreco = 3.1415; //assegno il valore a piGreco
float circonferenza; //dichiaro la variabile circonferenza
float area; //dichiaro la variabile area

raggio = 13; //assegno un valore a raggio

circonferenza = 2 * piGreco * raggio; 
area = 2 * piGreco * raggio * raggio;

//stampo su schermo i valori
printf("\nIl valore di pi greco utilizzato è %f\n\n", piGreco);
printf("La circonferenza chiamata %c", nomeCirconferenza);
printf(" di raggio %d\n\n", raggio);
printf("La circonferenza misura %f\n\n", circonferenza);
printf("L'area misura %f\n\n", area);

return 0;

}
