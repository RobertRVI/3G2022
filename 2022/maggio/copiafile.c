/*
*   14 maggio 2022 Itsmarchi Robert
*   lettura e copia di un file
*
* utilizzo funzioni fopen(); fclose(); fgetc(); fputc(); 
*/

#include<stdio.h>

int main()
{
    FILE * pIn;
    FILE * pOut;
    char c;

    pIn = fopen("divina.txt", "r");
    pOut = fopen("copia_divina.txt", "w");

    if(pIn == NULL)
    {
        printf("Errore nell'apertura del file\n\n");
        return -1;        
    }
    
    while((c = fgetc(pIn)) != EOF)
    {
        fputc(c, pOut);
    }

    printf("\nValore ritorno EOF : %d\n", EOF);
    printf("\nRitorno funzione fputc() : %d\n", fputc(c, pOut));

    if(fclose(pIn) != 0)
    {
        printf("Errore nella chiusura del file\n\n");
        return -2;
    }

    if(fclose(pOut) != 0)
    {
        printf("Errore nella chiusura del file\n\n");
        return -2;
    }

    /*Stampa della copia*/
    
    pOut = fopen("copia_divina.txt", "r");

    if(pOut == NULL)
    {
        printf("Errore nell'apertura del file\n\n");
        return -1;        
    }
    
    printf("\nStampo la copia\n\n");

    while((c = fgetc(pOut)) != EOF)
    {
        printf("%c", c);
    }

    printf("\n\n");
    return 0;
}

