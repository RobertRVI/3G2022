#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define RIGHE 12
#define COLONNE 12

int textMatrice(char matrice[][COLONNE], int righe)
{
    int i = 0;
    int k;
    char c;
    while(i < righe)
    {
        k = 0;
        while((k < COLONNE) && (c != '\n'))
        {
            scanf("%c", &c);  
            matrice[i][k] = c;
            k++;
        }
        i++;   
        matrice[i][k] = '\0';              
    }    
    
    return 0;
}

int stampaMatrice(char matrice[][COLONNE], int righe)
{
    int i = 0;
    int k;
     
    printf("\n\nAdesso stampo cio che ho memorizzato:\n\n");
    while((i < righe) && (matrice[i - 1][k] != '\0'))
    {
        k = 0;
        while((k < COLONNE) && (matrice[i][k] != '\0'))
        {
            printf("%c", matrice[i][k]);  
            k++;    
        }
        i++;
    }  
    
    return 0;
}


int main()
{
    char testo[RIGHE][COLONNE];
    
    textMatrice(testo, RIGHE);
    stampaMatrice(testo, RIGHE);
    
    printf("\n\n");
    return 0;
}
