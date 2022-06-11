/*
18 gennaio Montecatini Terme 2022 Robert

Data una equazione di 2° della forma ax^2 + bx + c = 0, trovare le soluzioni
specificando se sono reali e distinte, reali e coincidenti, complesse e coniugate.
Informare debitamente l'utente sia nella fase di input che nella fase della visualizzazione
dei risultati. 

input - equazione di 2°
output - soluzioni specificando se reali e distinte; reali e coincidenti o complesse e coniugate 

per trovare la radice vado a cercare quel divisore che moltiplicato per stesso mi da delta;
verifico che questa condizione avvenga tramite la variabile potenza;
*/

#include<stdio.h>
#define CENTESIMI 0.01 // arrotondero il risultato ai centesimi 
#define CONTACENTESIMI 100 
int main()
{
    float a, b, c;
    float delta;
    float potenza; //usato per vedere quale numero moltiplicato per se stesso mi da come risulto un numero <= radicando
    float radice;
    float divisore;
    float denominatore; // usato per calcolare le soluzioni finali
    float x1, x2;
    
    printf("\nVado a risolvere l'equazione di 2° ax^2 + bx + c = 0\n");
    printf("\nScegli dei valori per a, b e poi c:\n");
    scanf("%f %f %f", &a, &b, &c);
    denominatore = 2 * a; //utilizzato alla fine;(formula = (-b +- radice)/ 2 * a)
    
    delta = (b * b) - (4 * a * c);
    
    if(delta > 0)
    {
        for(divisore = 0; divisore < delta; divisore++)
        {
            potenza = divisore * divisore;
            radice = divisore;
        
            if(potenza > delta)
            {
                divisore = delta - 1; //per terminare il ciclo
                radice--;
            }
        }
        // aggiungo centesimi fin quando non trovo il valore che moltiplicato per se stesso e <= delta
        for(int conta = 0; conta < CONTACENTESIMI; conta ++)
        {
            radice = radice + CENTESIMI; 
            potenza = radice * radice;
        
            if(potenza > delta)
            {
                conta = CONTACENTESIMI - 1; //per terminare il ciclo
                radice = radice - CENTESIMI; //torno all'ultimo risultato che mi da un numero moltiplicato per se stesso <= a delta
            }
        }
    
        printf("\nLa radice quadrata di delta corrisponde a %.2f\n", radice);
   
        printf("\nDelta: %.2f > 0 quindi soluzioni reali e distinte\n", delta);
    }
    if(delta < 0)
    {
        printf("\nDelta: %.2f < 0 quindi soluzioni complesse e coniugate\n", delta);
    }
    else if(delta == 0)
    {
        printf("\nDelta: %.2f = 0 quindi soluzioni reali e coincidenti\n", delta);
    }
    
    //calcolo il valore delle soluzioni solo quando le soluzioni NON sono complesse e coniugate
    if((delta > 0) || (delta == 0))
    {
        x1 = (- b + radice) / denominatore;
        x2 = (- b - radice) / denominatore;

        printf("\nLe soluzioni sono x1 = %.2f e x2 = %.2f", x1, x2);
    }
    
    printf("\n\n");
    return 0;
}
