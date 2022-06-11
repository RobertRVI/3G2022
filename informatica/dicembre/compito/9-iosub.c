/*
12 dicembre 2021 Montecatini Terme Robert

Stampare i divisori per ogni numero compreso tra 1 a 100

ciclo for
*/

#include<stdio.h>
#define ELEMENTI 100

int main()
{
  printf("\nVado a stampare tutti i divisori per i numeri da 1 a %d", ELEMENTI);

  for(int numero = 1; numero <= ELEMENTI; numero++)
  {
    printf("\n\n%3d)", numero);
    for(int divisore = 1; divisore <= ELEMENTI; divisore++)
    {
    
      if(numero %divisore == 0)
      {
        printf("\t%d", divisore);
      }
      
    }
    
  }

  printf("\n\n");
  return 0;
}
