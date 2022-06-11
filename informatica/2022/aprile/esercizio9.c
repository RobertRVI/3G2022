/*
*   25 aprile 2022 ItsMarchiForti Robert
*
*   Dichiarato un punto nella retta come struct
*       - Dichiarare un array di 20 punti e popolarli random tra 1 e 99 
*       - Stampare l'array (nome e  valore)
*       - Ordinare l'array
*       - Ristampare l'array  (nome e valore)
*       
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define LENGTH 20

struct punto
{
    char nome;
    int x;
};

struct punto setPunti(struct punto p, char nome);
void stampoPunti(struct punto p[], int length);
void ordinoPunti(struct punto p[], int length);

int main()
{
    struct punto ascissa[LENGTH];
    char nome;
    
    printf("\nPrendo %d punti random su un ascissa\n", LENGTH);
    srand(time(0));
    for(int i = 0; i < LENGTH; i++)
    {
        nome = 'A' + i;
        ascissa[i] = setPunti(ascissa[i], nome);
    }  
    stampoPunti(ascissa, LENGTH);
          
    printf("\nMetto in ordine crescente i punti\n");
    ordinoPunti(ascissa, LENGTH);    
    stampoPunti(ascissa, LENGTH);
    
    printf("\n\n");   
    return 0;
}

struct punto setPunti(struct punto p, char nome)
{    
     p.nome = nome;
     p.x = rand() % 98 + 1;

    return p; 
}

void stampoPunti(struct punto p[], int length)
{
    for(int i = 0; i < length; i++)
    {
        printf("%c - %d\n", p[i].nome, p[i].x);
    }
}

void ordinoPunti(struct punto p[], int length)
{
    struct punto scambio[length];
    
    for(int i = 0; i < length; i++)
    {
        for(int k = 0; k < length - 1; k++)
        {
            if(p[k].x > p[k + 1].x)
            { 
                scambio[k].x = p[k].x;
                p[k].x = p[k + 1].x;
                p[k + 1].x = scambio[k].x;
                
                scambio[k].nome = p[k].nome;
                p[k].nome = p[k + 1].nome;
                p[k + 1].nome = scambio[k].nome;
            }  
        }
    } 
    
}
