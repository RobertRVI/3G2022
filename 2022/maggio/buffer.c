/*
*   17 maggio 2022 ItsMarchi Robert    
*   
*   scrittura in un file di testo con input da tastiera
*   
*   input : caratteri da tastiera
*   output : file di testo.   
*/

#include<stdio.h>
#define LENGTH 255

void scriviBuffer(char * buffer);
void bufferToFile(FILE * pF, char * buffer);

int main()
{
    char c;
    int i;
    char buffer[LENGTH];
    FILE * pF;
    
    pF = fopen("testo.txt", "w");

    if(pF == NULL)
    {
        printf("\nErrore nell'apertura del file\n");
        return -1;
    }
  
    printf("\nInserisci il testo:");   
    scriviBuffer(buffer);

    bufferToFile(pF, buffer);
    
    if(fclose(pF) != 0)
    {
        printf("\nErrore nella chiusura del file\n");
        return -2;
    }
    printf("\n\n");
    return 0;
}

void scriviBuffer(char * buffer)
{
    int i = 0;
    while((buffer[i] = fgetc(stdin) != EOF))
    {
        printf("%c", buffer[i]); 
        i++;   
    } 

}

void bufferToFile(FILE * pF, char * buffer)
{
    int i = 0;
    char c;
    
    while((c = buffer[i]) != '\0')
    {
        fputc(c, pF);
    }
    
}
