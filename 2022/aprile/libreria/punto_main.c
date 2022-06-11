/*
*   10 maggio 2022 ItsMarchi Robert 
*
*/

#include"punto.h"

int main()
{
    struct punto puntoA;

    puntoA = setPunto((char *)"PuntoA", 4.7, 2.1);
    stampa(puntoA);

    printf("\nModifico le coordinate del punto %s\n", puntoA.nome);
    setX(&puntoA, 2);
    setY(&puntoA, 1.2);
    stampa(puntoA);
    

    printf("\n\n");
    return 0;
}
