/*
21 marzo 2022 ItsMarchi Robert

Piano cartesiano e funzioni:

Definire un piano cartesiano di 120 punti per 36 punti
(una matrice di char 36x120 i )

    Realizzare una funzione cancella il piano (inserisce in ogni elemento della matrice il valore  '  ' )
    Realizzare una funzione stampa il piano e il suo contenuto.
    Realizzare una funzione disegna gli assi cartesiani
    Realizzare una funzione disegna una parabola
    Realizzare una funzione disegna una retta
    Realizzare le funzioni inserisci e cancella punto
    Realizzare la funzione calcola area del rettangolo (dati due punti nel piano)
    
*/

#include<stdio.h>
#include<math.h>
#define RIGHE 36
#define COLONNE 120

void cancellaPiano(char matrice[][COLONNE], int righe, int colonne);
void stampaPiano(char matrice[][COLONNE], int righe, int colonne);
void assiPiano(char matrice[][COLONNE], int righe, int colonne);
void parabola(char matrice[][COLONNE], int righe, int colonne);
void retta(char matrice[][COLONNE], int righe, int colonne);
int inserisciPunto(char matrice[][COLONNE], int righe, int colonne, int *x, int *y);
int cancellaPunto(char matrice[][COLONNE], int righe, int colonne, int *x, int *y);

int main(void)
{
    char piano[RIGHE][COLONNE];
    int x, y;
    
    cancellaPiano(piano, RIGHE, COLONNE);
    assiPiano(piano, RIGHE, COLONNE);
    parabola(piano, RIGHE, COLONNE);
    retta(piano, RIGHE, COLONNE);
    inserisciPunto(piano, RIGHE, COLONNE, &x, &y);
    stampaPiano(piano, RIGHE, COLONNE);
    cancellaPunto(piano, RIGHE, COLONNE, &x, &y);
    stampaPiano(piano, RIGHE, COLONNE);
    printf("\n\n");
    return 0;
}

void cancellaPiano(char matrice[][COLONNE], int righe, int colonne)
{
    for(int i = 0; i < righe; i++)
    {
        for(int k = 0; k < colonne; k++)
        {
            matrice[i][k] = ' ';
        }
    }
}

void stampaPiano(char matrice[][COLONNE], int righe, int colonne)
{
    for(int i = 0; i < righe; i++)
    {
        printf("\n");
        for(int k = 0; k < colonne; k++)
        {
            printf("%c", matrice[i][k]);
        }
    }
}

void assiPiano(char matrice[][COLONNE], int righe, int colonne)
{
    for(int i = 0; i < righe; i++)
    {
        for(int k = 0; k < colonne; k++)
        {
            if(i == righe / 2 - 1)
            {
                matrice[i][k] = '-';
            }
            if(k == colonne / 2 - 1)
            {
                matrice[i][k] = '-';
            }
        }
    }
}

void parabola(char matrice[][COLONNE], int righe, int colonne)
{
    int y;
    int x;
    
    for(int i = 0; i < righe; i++)
    {
        x = i;
        for(int k = 0; k < colonne; k++)
        {
            y = x * x - 2;
            if((x < righe / 2 - 1) && (y < colonne / 2 - 1))
            {
                matrice[righe / 2 - 1 - x][colonne / 2 - 1 + y] = '*'; 
            }
            
             
        }
    }
    
    for(int i = 0; i < righe; i++)
    {
        x = i;
        for(int k = 0; k < colonne; k++)
        {
            y = x * x - 2;
            if((x < righe / 2 - 1) && (y < colonne / 2 - 1))
            {
                matrice[righe / 2 - 1 + x][colonne / 2 - 1 + y] = '*';
            }
            
        }
    }
}

void retta(char matrice[][COLONNE], int righe, int colonne)
{
    int y;
    int x;
    int m = 2;
    
    for(int i = 0; i < righe; i++)
    {
        for(int k = 0; k < colonne; k++)
        {
            x = k;
            y = m * x ;
            if((y < righe / 2 - 1) && (x < colonne / 2 - 1))
            {
                matrice[righe / 2 - 1 - y][colonne / 2 - 1 + x] = '/'; 
            }
            
             
        }
    }
    
    for(int i = 0; i < righe; i++)
    {
        for(int k = 0; k < colonne; k++)
        {
            x = k;
            y = m * x;
            if((y < righe / 2 - 1) && (x < colonne / 2 - 1))
            {
                matrice[righe / 2 - 1 + y][colonne / 2 - 1 - x] = '/';
            }
            
        }
    }
    
}

int inserisciPunto(char matrice[][COLONNE], int righe, int colonne, int *x, int *y)
{
   printf("\nScegli un punto da inserire nel piano di coordinate P(x, y)\n Range(x) -59 a 59 Range(y) -17 a 17 :");
   scanf("%d %d", &*x, &*y);
   
   matrice[righe / 2 + *y][colonne / 2 + *x] = '#';
   
   return 0; 
}

int cancellaPunto(char matrice[][COLONNE], int righe, int colonne, int *x, int *y)
{
    int risposta;
    
    printf("\n Vuoi eliminare il punto selezionato?[1 = si; 0 = no]: ");
    scanf("%d", &risposta);
    
    if(risposta == 1)
    {
        matrice[righe / 2 + *y][colonne / 2 + *x] = ' '; 
    }
    
    return 0;
}
