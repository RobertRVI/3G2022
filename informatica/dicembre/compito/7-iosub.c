/*
12 dicembre 2021 Montecatini Terme Robert

Dati pari e dispari, due array di N elementi,
popolare l'array pari con soli numeri pari da 0 a N-2
(Se N = 20 inserisce i valori 0, 2, 4, ..., 16, 18)
e popolare l'array dispari con i valori da 1 a N-1
(Se N = 20 inserire i valori 1, 3, 5, ... 17, 19).
Copiare i due array in un array numeri di N elementi
tale che l'array risulti popolato a valori crescenti (0,1,2,3, .., 18, 19)

ciclo for - else if
*/

#include<stdio.h>
#define ELEMENTI 10


int main()
{
  int arrayPari[ELEMENTI];
  int arrayDispari[ELEMENTI];

  int doppioElementi = ELEMENTI * 2;
  int arrayTotale[doppioElementi];

  printf("\nVado a stampare \nprima i valori pari\npoi quelli dispari\ne infine tutti insieme\n");

  printf("\n-----------------------------------------\n");
  printf("\nArray con solo valori pari: \n\n");

  for(int i = 0; i < ELEMENTI; i++)
  {
    arrayPari[i] = i * 2;
    printf("\n%2d) Valore = %2d ", i, arrayPari[i]);
  }


  printf("\n-----------------------------------------\n");
  printf("\nArray con solo valori dispari: \n\n");

  for(int i = 0; i < ELEMENTI; i++)
  {
    arrayDispari[i] = i * 2 + 1;
    printf("\n%2d) Valore = %2d ", i, arrayDispari[i]);
  }

  printf("\n-----------------------------------------\n");
  printf("\nArray con tutti i valori: \n\n");

  for(int i = 0, k = i; i < doppioElementi; i++, k++)
  {
    
    if(i < ELEMENTI)
    {
      if(i %2 == 0)
      {
      arrayTotale[i] = arrayPari[k];
      k--; 
      }
      else if(i %2 == 1)
      {
        arrayTotale[i] = arrayDispari[k];
      }
    }
    else if(i >= ELEMENTI)
    {
      if(i %2 == 0)
      {
      arrayTotale[i] = arrayPari[i/2]; 
      }
      else if(i %2 == 1)
      {
        arrayTotale[i] = arrayDispari[i/2];
      }
    }

    printf("\n%2d) Valore = %2d ", i, arrayTotale[i]);
  }

  printf("\n\n");
  return 0;
}
