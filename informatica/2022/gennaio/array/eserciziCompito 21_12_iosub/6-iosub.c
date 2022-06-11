/*
3 gennaio 2022 Montecatini Temre Robert

Popolare un array con N numeri interi random (range 65-90) con N = 100. 
Stampare ogni vocale e il numero delle volte che è presente e il numero totale delle vocali, con l'opportuna informazione all'utente.
(La vocale ''A"  è presente 0 volte, la vocale  "B" è presente 3 volte ....  il numero delle vocali presenti è 17)

input - N ELEMENTI random compresi tra 65 e 90.
output - vocali e quante volte sono presenti.

uso ciclo for - if 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ELEMENTI 100

int main(void) 
{
    int array[ELEMENTI];
  
    int contaA = 0, contaE = 0, contaI = 0, contaO = 0, contaU = 0, contaVocali = 0;

    printf("\nVado a caricare un array con numeri random range 65-90.\nPoi stampo solo i valori corrispondenti a vocali secondo la tabella ASCII\ne conto quante volte sono ripetutte\n\n");
    srand(time(0));
    for(int i = 0; i < ELEMENTI; i++)
    {
        array[i] = rand() % 26 + 65;
    
        //stampa le vocali
        if((array[i] == 'A') || (array[i] == 'E') || (array[i] == 'I') || (array[i] == 'O') || (array[i] == 'U'))
        {
            printf("\n Valore = %d -- Tabella ASCII == %c", array[i], array[i]);
        }


        //conta le vocali totali
        if((array[i] == 'A') || (array[i] == 'E') || (array[i] == 'I') || (array[i] == 'O') || (array[i] == 'U'))
        {
            contaVocali++;
        }

        //conta singole vocali
        if(array[i] == 'A')
        {
            contaA++;
        }
        else if(array[i] == 'E')
        {
            contaE++;
        }
        else if(array[i] == 'I')
        {
            contaI++;
        }
        else if(array[i] == 'O')
        {
            contaO++;
        }
        else if(array[i] == 'U')
        {
            contaU++;
        }

    }

    printf("\n\nLe vocali sono in tutto %d\nLe 'A' sono %d\nLe 'E' sono %d\nLe 'I' sono %d\nLe 'O' sono %d\nLe 'U' sono %d", contaVocali, contaA, contaE, contaI, contaO, contaU);
 

    printf("\n\n");
    return 0;
}
