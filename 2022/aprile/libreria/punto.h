/*
*   10 maggio 2022 ItsMarchi Robert 
*
*/
#include<stdio.h>
#define LENGTH 10
struct punto
{
    char nome[LENGTH];
    double x;
    double y;
};

void copiaStringa(char sorgente[], char destinazione[], int N);
struct punto setPunto(char * nome, float x, float y);
void stampa(struct punto p);
double getX(struct punto p);
void setX(struct punto *p, double x);
double getY(struct punto p);
void setY(struct punto *p, double y);
char * getName(struct punto *p);
void setName(struct punto *p, char * nome);
