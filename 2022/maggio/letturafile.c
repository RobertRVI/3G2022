/*
*   12 maggio 2022 ItsMarchi Robert
*
*   apertura e lettura di un file
*
*   utilizzo le funzioni : fopen(); fclose; fgetc();
*
*/

#include<stdio.h>

int main()
{
    FILE * pF;
    char c;
    int numLettere = 0;
    int numVocale = 0;
    int numTerzine = 0;
    int spazi; 
    int righe;

    pF = fopen("divina.txt", "r");

    if(pF == NULL)
    {
        printf("Errore nell'apertura del file\n");
        return -1;        
    }

    while((c = fgetc(pF)) != EOF)
    {
        printf("%c", c);

        if((c >= 65) && (c <= 90) || (c >= 97) && (c <= 122))      
        {  
            numLettere++;
        }  
        if(c == ' ')
        {
            spazi++;
        }
        if((c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U') || (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'))     
        {  
            numVocale++;
        }
        if(c == '\n')      
        {  
            numTerzine++;
        } 
    }
    
    numTerzine = numTerzine / 4;
    printf("\nIn totale ci sono %d lettere e %d vocali in %d terzine\n%d spazi e %d righe\n", numLettere, numVocale, numTerzine, spazi, righe);
    if(fclose(pF) != 0)
    {
        printf("Errore nella chiusura del file\n");
        return -2;
    }

    printf("\n\n");
    return 0; 
}
