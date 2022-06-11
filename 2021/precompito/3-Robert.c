/*
2 dicembre 2021 Its Marchi Robert

dato o letto un numero stabilire se è compreso tra 1 e -1
uso if

input - numero
output - compreso tra 1 e -1  dire se è vero o falso
*/

#include<stdio.h>

int main()

{
    float numero;
    
    printf("\nSeleziona un numero (anche con la virgola) \ne ti dirò se è compreso tra 1 e -1:");
    scanf("%f", &numero);

    if((numero > -1) && (numero < 1))
    {
        printf("\n\nIl numero è compreso tra 1 e -1\n\n");
    }
    else
    {   
        printf("\n\nIl numero non è compreso tra 1 e -1\n\n");
    }
    
    return 0;
}
