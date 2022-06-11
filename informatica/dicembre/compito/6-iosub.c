/*
12 dicembre 2021 Montecatini Terme Robert

Leggere N caratteri e stabilire se sono lettere maiuscole,
minuscole, numeri o altri caratteri (Uso else if).
Stampare il carattere (uso %c) con l'informativa

ciclo for - else if
*/

#include<stdio.h>
#define ELEMENTI 128

int main()
{
  int array[ELEMENTI];

  printf("\nVado a stampare i caratteri della tabella ASCII.\nTranne quelli di controllo che non si possono stampare.\n");

  printf("\n-------------------------------------------------------------------\n");

  for(int i = 0; i < ELEMENTI; i++)
  {
    array[i] = i;

    if((i >= 32) && (i <= 47))
    {
      printf("\n%3d) Carattere: %c\tTipo: Punteggiatura", i, array[i]);
    }

    else if((i >= 48) && (i <= 57))
    {
    
      if (i == 48)
      {
        printf("\n\n-------------------------------------------------------------------\n");
      }
      
      printf("\n%3d) Carattere: %c\tTipo: Numero", i, array[i]);
    }

    else if ((i >= 58) && (i <= 64))
    {
    
      if (i == 58)
      {
        printf("\n\n-------------------------------------------------------------------\n");
      }
      
      printf("\n%3d) Carattere: %c\tTipo: Punteggiatura", i, array[i]);
    }

    else if ((i >= 65) && (i <= 90))
    {
    
      if (i == 65)
      {
        printf("\n\n-------------------------------------------------------------------\n");
      }
      
      printf("\n%3d) Carattere: %c\tTipo: Maiuscolo", i, array[i]);
    }

    else if ((i >= 91) && (i <= 96))
    {
    
      if (i == 91)
      {
        printf("\n\n-------------------------------------------------------------------\n");
      }
      
      printf("\n%3d) Carattere: %c\tTipo: Punteggiatura", i, array[i]);
    }

    else if((i >= 97) && (i <= 122))
    {
    
      if (i == 97)
      {
        printf("\n\n-------------------------------------------------------------------\n");
      }
      
      printf("\n%3d) Carattere: %c\tTipo: Minuscolo", i, array[i]);
    }

    else if ((i >= 123) && (i <= 126))
    {
    
      if (i == 123)
      {
        printf("\n\n-------------------------------------------------------------------\n");
      }
      printf("\n%3d) Carattere: %c\tTipo: Punteggiatura", i, array[i]);
    }
    
    
  }

  printf("\n\n");
  return 0;
}
