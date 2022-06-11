/*
*   26 maggio 2022 ItsMarchi Robert
*   
*   creo una classe per Rettangolo con 
*   Attributi:
*       - base
*       -altezza
*   Metodi:
*       +area()
*       +perimetro() 
*   Costruttore :
*        +Rettangolo    
*
*/

#include<iostream>
#define NC "\e[0m"
#define T "\e[0;39m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YLW "\e[0;33m"
#define LB "\e[0;34m"
#define VIOLA "\e[0;35m"
#define CYN "\e[0;36m"
#define GRAY "\e[0;37m"

class Rettangolo{

    /* Attributi */
    double base;
    double altezza;

    /* dichiaro i metodi */
public:

    Rettangolo ()
    {
        base = 0;
        altezza = 0;
    }

    Rettangolo (double b, double h)
    {
        base = b;
        altezza = h;
    }
    
    void assegna(double b, double h)
    {
        base = b;
        altezza = h;
    }
    /* Calcolo dell' area del rettangolo */
    double area()
    {
        double area;
        area = base * altezza;
       
        return area;
    }
    
    /* Calcolo del perimetro del rettangolo */
    double perimetro()
    {
        double perimetro;
        perimetro = (base + altezza) * 2;
        
        return perimetro;
    }

};

int main()
{
    double area_r1, area_r2;
    
    /* Dichiaro due puntatori */
    Rettangolo * r1;
    Rettangolo * r2;

    /* Creo lo spazio nello HEAP */
    r1 = new Rettangolo();
    r2 = new Rettangolo();

    /* Assegno i valori di base e altezza */
    ( * r1).assegna(4.5, 7.2);
    r2->assegna(5.5, 8.1);

    /* Calcolo l'area dei rettangoli */
    area_r1 = ( * r1).area();
    area_r2 = r2->area();
    
    /* Stampo i risultati */
    printf(T"\nArea del primo rettangolo = " RED"%.2f\n", area_r1);
    printf(T"\nArea del secondo rettangolo = " VIOLA"%.2f\n", area_r2);

    printf("\n\n");
    return 0;
}
