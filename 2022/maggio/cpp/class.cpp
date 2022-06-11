/*
*   21 maggio 2022 ItsMarchi Robert
*
*   creo una classe per Rettangolo con 
*   Attributi:
*       - base
*       -altezza
*   Metodi:
*       -area()
*       -perimetro()      
*/

#include<iostream>

class Rettangolo{

private:

    /*Attributi privati*/
    double base;
    double altezza;
    
    /* Metodi pubblici */

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

    /* funzione per ritornare il valore della base del rettangolo */
    double getBase()
    {
        return base;
    }
    
    /* funzione per ritornare il valore dell' altezza del rettangolo */
    double getAltezza()
    {
        return altezza;
    }
    
    /* funzione per settare il valore della base del rettangolo */
    void setBase(double b)
    {
        base = b;
    }
    
    /* funzione per settare il valore dell' altezza del rettangolo */
    void setAltezza(double h)
    {
        altezza = h;
    }
};

int main()
{
    double area_r1, area_r2;
    double perimetro_r1, perimetro_r2;

    Rettangolo r1(5, 3), r2(7, 2.5);  
    
    area_r1 = r1.area();
    area_r2 = r2.area();

    perimetro_r1 = r1.perimetro();
    perimetro_r2 = r2.perimetro();

    /* Stampo le proprieta del rettangolo r1 */
    printf("\nRettangolo R1 di: \n\nBase = %.2f\nAltezza = %.2f\nPerimetro = %.2f\nArea = %.2f\n", 
                r1.getBase(), r1.getAltezza(), r1.perimetro(), r1.area());
    
    /* Stampo le proprieta del rettangolo r2 */
    printf("\n\nRettangolo R2 di: \n\nBase = %.2f\nAltezza = %.2f\nPerimetro = %.2f\nArea = %.2f\n", 
                r2.getBase(), r2.getAltezza(), r2.perimetro(), r2.area());

    printf("\n\n");
    return 0;
}
