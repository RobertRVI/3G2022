/*
2 dicembre 2021 Its Marchi Roebrt

dato un array di N elementi,
caricare l'array inserendo il cubo 
del valore dell'indice corrispondente 
se l'indice è pari

il quadrato se l'indice è dispari

input - array di N elementi
output - cubo o quadrato dell' indice corrispondente
*/

#include<stdio.h>
#define ELEMENTI 30

int main()
{
    int array[ELEMENTI];

    printf("Vado a stampare %d elementi con \nil cubo del indice corrispondente se pari \nil quadrato se dispari\n\n");
    for(int i = 0; i < ELEMENTI; i++)
    {
        if(i %2 == 0)
        {
            array[i] = i * i * i;
        }
        else if(i %2 == 1)
        {
            array[i] = i * i;
        }

        printf("%3d) Valore = %5d\n", i, array[i]);
    }

    return 0;
}
