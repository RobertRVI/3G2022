/*
*   10 maggio 2022 ItsMarchi Robert 
*
*/
#include"punto.h"

void copiaStringa(char sorgente[], char destinazione[], int N)
{
    for(int i = 0; i < N; i++)
    {
        destinazione[i] = sorgente[i];
        if(sorgente[i] == '\0')
            break;
    }
}
struct punto setPunto(char * nome, float x, float y)
{
    struct punto puntoInizializzato;
    copiaStringa(nome, puntoInizializzato.nome, LENGTH);
    puntoInizializzato.x = x;
    puntoInizializzato.y = y;
    
    return puntoInizializzato;
}
void stampa(struct punto p)
{
    printf("\nPunto %s di coordinate (%.2f, %.2f)", p.nome, p.x, p.y);
}

void setName(struct punto *p, char * nome)
{
    copiaStringa(nome, (*p).nome, LENGTH);
}

char * getName(struct punto *p)
{   
    return (* p).nome;
}

void setX(struct punto *p, double x)
{
    (*p).x = x;
}

double getX(struct punto p)
{
    double ascissa;
    ascissa = p.x;
    
    return ascissa;
}

void setY(struct punto *p, double y)
{
    (*p).y = y; 
}

double getY(struct punto p)
{
    double ordinata;
    ordinata = p.y;

    return ordinata;
}

