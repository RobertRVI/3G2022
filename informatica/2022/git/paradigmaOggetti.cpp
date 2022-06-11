/*
*   3 giugno 2022 Montecatini Robert
*   
*   Realizzare la gestione giornaliera di un parcheggio a pagamento con 5 posti statici
*    auto: targa, orario ingresso, posizione, orario uscita
*
*   funzioni stampa; get,set : targa, orario i/o, posizione
*   report giornaliero 
*/

#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<time.h>
#define CAR 5
#define LENGTH 100
#define ORARIOUSCITA 24

/* codici per colore testo */
#define NC "\e[0m"
#define T "\e[0;39m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YLW "\e[0;33m"
#define LB "\e[0;34m"
#define VIOLA "\e[0;35m"
#define CYN "\e[0;36m"
#define GRAY "\e[0;37m"

int indicePos = 0;

class Car{

    char targata[LENGTH];
    int posizione;
    int oraIngresso;
    int oraUscita;

public:  
    
    /* settaggio della targa */
    void setTarga(char * targa)
    {
        strcpy(targata, targa);
    }
    
    /* ritorno della targa */
    char * getTarga()
    {
        return targata;
    }
    
    /* settaggio dell' orario di ingresso */
    void setOrarioIng()
    {
        oraIngresso = rand() % 24;
    }
    
    /* ritorno dell'orario di ingresso */
    int getOrarioIng()
    {
        return oraIngresso;
    }

    /* settaggio dell'orario di uscita */
    void setOrarioUsc()
    {
        oraUscita = ORARIOUSCITA;
    }
    
    /* ritorno dell'orario di uscita */
    int getOrarioUsc()
    {
        return oraUscita;
    }
    
    /* settaggio della posizione */
    void setPos()
    {
        posizione = indicePos;
        indicePos += 1;
    }
    
    /* ritorno della posizione */
    int getPos()
    {
        return posizione;
    }
};

 /* Dichiarazione dei prototipi */
char * generaTarga(char * targa);
void veicoloEntratoPrima(Car veicolo[], int car);
void stampaAuto(Car veicolo);
void stampaCatalogo(Car veicolo[], int car);
int reportGiornata(Car veicolo);

int main()
{
    Car concessionaria[CAR];
    Car * postiDinamici[CAR];

    int incasso = 0;
    char targa[LENGTH];

    srand(time(0));
    for(int i = 0; i < CAR; i++)
    {
        postiDinamici[i] = new Car;
        /*gestione dei pargheggi dinamici*/        
        postiDinamici[i]->setTarga(generaTarga((char *)targa));
        postiDinamici[i]->setOrarioIng(); 
        postiDinamici[i]->setOrarioUsc();
        postiDinamici[i]->setPos();
        
        /*gestione dei pargheggi normali*/
        concessionaria[i].setTarga(generaTarga((char *)targa)); // il generaTarga() genera sempre una targa casuale diversa
        concessionaria[i].setOrarioIng(); 
        concessionaria[i].setOrarioUsc(); 
        concessionaria[i].setPos(); 
    } 
    
    /* Stampa delle varie informazioni richieste */
    printf(T"\nStampo il veicolo che è entrato prima:\n");
    veicoloEntratoPrima(concessionaria, CAR); //veirfico e stampo il veicolo che entra prima
    
    printf(T"\nStampo tutti i veicolo:\n");
    stampaCatalogo(concessionaria, CAR); //stampo tutti i veicolo
    
    printf(T"\n\n");
    printf(T"\nStampo il report Giornaliero:\n");
    for(int i = 0; i < CAR; i++)
    {
        incasso += reportGiornata(concessionaria[i]);
    }

    printf(T"\n\nOggi la concessionaria ha incassato %d €\n", incasso);

    printf(T"\n\nPosti dinamici:\n");

    printf(T"\nStampo il veicolo che si trova nei posti dinamici:\n");
    stampaAuto(*postiDinamici[0]);
    
    printf("\n\n");
    
    return 0;
}

    /* Implementazione dei prototipi*/
char * generaTarga(char * targa)
{
    targa[0] = rand() % 26 + 65; //genero una lettare A-Z
    targa[1] = rand() % 26 + 65; //genero una lettare A-Z
    targa[2] = rand() % 10 + 48; //genero una lettare 0-9
    targa[3] = rand() % 10 + 48; //genero una lettare 0-9
    targa[4] = rand() % 10 + 48; //genero una lettare 0-9
    targa[5] = rand() % 26 + 65; //genero una lettare A-Z
    targa[6] = rand() % 26 + 65; //genero una lettare A-Z
    targa[7] = '\0';
    return targa;
}

void veicoloEntratoPrima(Car veicolo[], int car)
{
    int indiceAuto;
    int min = ORARIOUSCITA;
    
    /* Verifico gli orario per vedere chi e entrato prima */
    for(int i = 0; i < car; i++)
    {
        if(veicolo[i].getOrarioIng() < min)
        {
            min = veicolo[i].getOrarioIng();
            indiceAuto = veicolo[i].getPos();
        }
    } 
    stampaAuto(veicolo[indiceAuto]);
}

void stampaAuto(Car veicolo)
{
    printf(T"\nVeicolo : Targata: " RED " %s " T " | Orario Entrata: " GRN "%2d " T " | Orario Uscita: " GRN "%2d\n", 
            veicolo.getTarga(), veicolo.getOrarioIng(), veicolo.getOrarioUsc());
}

void stampaCatalogo(Car veicolo[], int car)
{
    for(int i = 0; i < car; i++)
    {
        printf(T"\nVeicolo : Targata: " RED " %s " T " | Orario Entrata: " GRN "%2d " T " | Orario Uscita: " GRN "%2d", 
                veicolo[i].getTarga(), veicolo[i].getOrarioIng(), veicolo[i].getOrarioUsc());
    }
}

int reportGiornata(Car veicolo)
{
    int oreDaPagare;
    int tariffa = 10;
    int pagato = 0;

    oreDaPagare = veicolo.getOrarioUsc() - veicolo.getOrarioIng();
    pagato = tariffa * oreDaPagare;

    printf(T"\nVeicolo : Targata: " RED " %s " T " | Orario Entrata: " GRN "%2d " T 
            " | Orario Uscita: " GRN "%2d " T "| Tariffa: " YLW "%2d" T " - Pagato " VIOLA "%4d", 
                veicolo.getTarga(), veicolo.getOrarioIng(), veicolo.getOrarioUsc(), tariffa, pagato);

    return pagato;
}
