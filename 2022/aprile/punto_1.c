/*
05 aprile 2022 Its Marchi Robert

creare le funzioni getName, getX, getY, setName, setX, set Y

*/

#include<stdio.h>
struct punto
{
    char nome;
    double x;
    double y;
};

struct punto setPunto(char nome, float x, float y);
void stampa(struct punto p);
double getX(struct punto p);
void setX(struct punto *p, double x);
double getY(struct punto p);
void setY(struct punto *p, double y);
char getName(struct punto p);
void setName(struct punto *p, char nome);

int main()
{
    struct punto puntoA;

    puntoA = setPunto('A', 4.7, 2.1);
    stampa(puntoA);

    printf("\nModifico le coordinate del punto A\n");
    setX(&puntoA, 2);
    setY(&puntoA, 1.2);
    stampa(puntoA);
    

    printf("\n\n");
    return 0;
}

struct punto setPunto(char nome, float x, float y)
{
    struct punto puntoInizializzato;
    puntoInizializzato.nome = nome;
    puntoInizializzato.x = x;
    puntoInizializzato.y = y;
    
    return puntoInizializzato;
}
void stampa(struct punto p)
{
    printf("\nPunto %c di coordinate (%.2f, %.2f)", p.nome, p.x, p.y);
}

void setName(struct punto *p, char nome)
{
    (*p).nome = nome;
}

char getName(struct punto p)
{
    char name;
    name = p.nome;
    
    return name;
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


