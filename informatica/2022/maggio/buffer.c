/*
*   18 maggio 2022 Montecatini Terme Robert
*   
*   realizzazione di un programma che faccia scrivere in un buffer(array);
*   lo stampi;
*   e lo inserisca in un file. 
*
*   input - caratteri da tastiera
*   output - file di testo(ogni volta che si riavvia il programma si cancella il contenuto)  
*  
*/

#include<stdio.h>

#define LENGTH 255
    /*Prototipi*/
int scriviBuffer(FILE * pF, char buffer[], int length);
void stampaFrase(char buffer[], int length);

int main()
{
    char buffer[LENGTH];
    FILE * pF;
    pF = fopen("testo.txt", "w");
        
    scriviBuffer(pF, buffer, LENGTH);      
    
    printf("\n\n");
    return 0;
}

    /*Funzioni implementate*/
int scriviBuffer(FILE * pF, char buffer[], int length)
{
    char c;
    int i, k;
    
    printf("\nScrivi il tuo testo e premi 'Invio' e poi'CTRL + D' per confermare:\n");
    
    if(pF == NULL)
    {
        printf("Errore nell'apertura del file\n\n");
        return -1;        
    }
        
    i = 0;
    while(c != EOF)
    {
        c = getc(stdin);
        buffer[i] = c;
        i++;
            
        if((c == '\n') || (i == length - 1))
        {
            stampaFrase(buffer, i);
            k = 0;
            while(buffer[k] != '\n')
            {   
                fputc(buffer[k], pF);
                k++;
            } 
            fputc('\n', pF);
            i = 0;
        }
    }   
    
    if(fclose(pF) != 0)
    {
        printf("Errore nella chiusura del file\n\n");
        return -2;
    }
    return 0;
}

void stampaFrase(char buffer[], int length)
{
    printf("\nLa frase memorizzata e:\n");
    for(int i = 0; i < length; i++)
    {
        printf("%c", buffer[i]);
    }
    printf("\n");
}
