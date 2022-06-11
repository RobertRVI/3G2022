/*
29 marzo 2022 Montecatini Terme Robert

Compito, creo le funzioni: autore; crea, stampa e cancella ascissa; inserisci e cancella punto; trova punto;
equazione primo e secondo grado; disequazione primo e secondo grado;

*/

#include<stdio.h>
#include<math.h>
#define LENGTH 78

void autore();
void creaAscissa(char array[], int n);
void stampaAscissa(char array[], int n);
void cancellaAscissa(char array[], int n);
void inserisciPunti(char array[], int n, int *A, int *B);
void cancellaPunti(char array[], int n, int *A, int *B);
void trovaPunti(char array[], int n, int *A, int *B, int *C);
void eqPrimoGrado(int a, int b, int *px1);
void eqSecondoGrado(int a, int b, int c, int *px1, int *px2);
void disequazionePrimoGrado(int a, int b, int *px1);
void inserisciSoluzioneEq(char array[], int n, int *px);
void inserisciSoluzioneDis(char array[], int n, int *px);

int main()
{
    char ascissa[LENGTH];
    int A, B, C;
    int a = 2;
    int b = 16;
    int c = 10;
    
    int x1, x2;
    
    
    autore();
    
    printf("\n\nStampo l'asse delle x vuoto\n");
    creaAscissa(ascissa, LENGTH);
    stampaAscissa(ascissa, LENGTH);
    printf("\n\nInserisco i punti A e B\n");
    inserisciPunti(ascissa, LENGTH, &A, &B);
    stampaAscissa(ascissa, LENGTH);
    trovaPunti(ascissa, LENGTH, &A, &B, &C);
    printf("\n\nCancello i punti A e B\n");
    cancellaPunti(ascissa, LENGTH, &A, &B);
    stampaAscissa(ascissa, LENGTH);    
    eqPrimoGrado(a, b, &x1);
    printf("\n\nCalcolo della equazione: %dx + %d = 0 \t\t\t soluzione: x = %d\n", a, b, x1);
    inserisciSoluzioneEq(ascissa, LENGTH, &x1);
    stampaAscissa(ascissa, LENGTH);
    cancellaAscissa(ascissa, LENGTH);
    eqSecondoGrado(a, b, c, &x1, &x2);
    printf("\n\nCalcolo della equazione: %dx^2 + %dx + %d = 0 \t soluzione: x1 = %d  x2 = %d\n", a, b, c, x1, x2);
    inserisciSoluzioneEq(ascissa, LENGTH, &x1);
    inserisciSoluzioneEq(ascissa, LENGTH, &x2);
    stampaAscissa(ascissa, LENGTH);
    cancellaAscissa(ascissa, LENGTH);
    disequazionePrimoGrado(a, b, &x1);
    printf("\n\nCalcolo della disequazione: %dx + %d > 0 \t\t soluzione: x > %d \n", a, b, x1);
    inserisciSoluzioneDis(ascissa, LENGTH, &x1);
    stampaAscissa(ascissa, LENGTH);
    cancellaAscissa(ascissa, LENGTH);
    
    printf("\n\n");
    return 0;
}

void autore()
{
    printf("\nCompito in classe 29 marzo 2022 - Classe 3 G\nRobert Valentin Iosub - Firma ____________________\n\n");
}

void creaAscissa(char array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        array[i] = '-';
    }
    array[n / 2 - 1] = '|';
    array[n - 1] = 'x';
}

void stampaAscissa(char array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%c", array[i]);
    }
    
    printf("\n");
}

void cancellaAscissa(char array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        array[n / 2 - 1] = '|';
        array[i] = '-';
    }
}

void inserisciPunti(char array[],int n, int *A, int *B)
{
    *A = 8;
    *B = 12;
   
    array[n / 2 - 1 + *A] = 'A';
    array[n / 2 - 1 + *B] = 'B';
}

void cancellaPunti(char array[],int n, int *A, int *B)
{   
    array[n / 2 - 1 + *A] = '-';
    array[n / 2 - 1 + *B] = '-';
}

void trovaPunti(char array[], int n, int *A, int *B, int *C)
{
    if(array[n / 2 - 1 + *A] == 'A')
    {
        printf("\nIl punto A esiste ed e nella posizione %d", *A);
    }
    else
    {
        printf("\nIl punto A non esiste");
    }
    if(array[n / 2 - 1 + *B] == 'B')
    {
        printf("\nIl punto B esiste ed e nella posizione %d", *B);
    }
    else
    {
        printf("\nIl punto B non esiste");
    }
    if(array[n / 2 - 1 + *C] == 'C')
    {
        printf("\nIl punto C esiste ed e nella posizione %d", *C);
    }
    else
    {
        printf("\nIl punto C non esiste");
    }
}

void eqPrimoGrado(int a, int b, int *px1)
{
    if(a != 0)
    {
        *px1 = -b / a;
    }   
    else
    {
        printf("\nL'equazione e indeterminata\n");
    }
}

void inserisciSoluzioneEq(char array[], int n, int *px)
{
    array[n / 2 - 1 + *px] = 'X';
}
void eqSecondoGrado(int a, int b, int c, int *px1, int *px2)
{
    int delta = (b * b) - (4 * a * c);
    int radice = sqrt(delta);
    
    *px1 = (- b + radice) / 2 * a;
    *px2 = (- b - radice) / 2 * a;
}

void disequazionePrimoGrado(int a, int b, int *px1)
{
    if(a > 0)
    {
        *px1 = -b / a;
    }
    else
    {
        printf("\nLa disequazione e indeterminata\n");
    }
}

void inserisciSoluzioneDis(char array[], int n, int *px)
{
    for(int i = n / 2 + *px; i < n; i++)
    {
        array[i] = '*';
    }
    array[n / 2 - 1 + *px] = 'X'; 
}
