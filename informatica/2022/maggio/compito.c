/*
*   3 maggio 2022 ItsMarchi Robert
*   
*   Realizzare la gestione giornaliera di un parcheggio a pagamento con 5 posti statici
*    auto: targa, orario ingresso, posizione, orario uscita
*
*   funzioni stampa; get,set : targa, orario i/o, posizione
*   report giornaliero 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define CAR 5
#define LENGTH 100
#define ORARIOUSCITA 24

int indicePos = 0;

struct car{
    char targa[LENGTH];
    int posizione;
    int oraIngresso;
    int oraUscita;
};

void copyString(char sorgente[], char destinatario[], int length);
 /*stampo nome e cognome dell'autore del codice*/
void autore(); 
 /*genero una targa casuale*/
char * generaTarga(char * targa);
 /*immatricolo il veicolo*/
void setTarga(struct car * veicolo, char * targa); 
 /*per ritornare il valore della targa di un veicolo*/
char * getTarga(struct car *veicolo); 
 /*imposto l'orario di entrata*/
void setOrarioIng(struct car * veicolo); 
 /*per ritornare l'orario di entrata*/
int getOrarioIng(struct car *veicolo); 
 /*imposto l'orario di uscita*/
void setOrarioUsc(struct car * veicolo); 
 /*per ritornare l'orario di uscita*/
int getOrarioUsc(struct car *veicolo); 
 /*controllo quale veicolo è entrato prima e lo stampo*/
void veicoloEntratoPrima(struct car veicolo[], int car);
 /*imposto la posizione dell'auto*/
void setPos(struct car * veicolo);
 /*ritorno la posizione del veicolo*/
int getPos(struct car *veicolo);
 /*stampo veicolo*/
void stampaAuto(struct car veicolo);
 /*stampo tutte le auto*/
void stampaCatalogo(struct car veicolo[], int car);
 /*faccio un report giornaliero delle tariffe e l'incasso giornaliero*/
int reportGiornata(struct car veicolo);

int main()
{
    struct car concessionaria[CAR];
    struct car *postiDinamici[CAR];

    int incasso = 0;
    char targa[LENGTH];

    srand(time(0));
    for(int i = 0; i < CAR; i++)
    {
        /*gestione dei pargheggi dinamici*/
        postiDinamici[i] = (struct car *)malloc(sizeof(struct car));
        setTarga(postiDinamici[i], generaTarga((char *)targa)); 
        setOrarioIng(postiDinamici[i]); 
        setOrarioUsc(postiDinamici[i]); 
        setPos(postiDinamici[i]); 

        /*gestione dei pargheggi normali*/
        setTarga(&concessionaria[i], generaTarga((char *)targa)); // il generaTarga() genera sempre una targa casuale diversa
        setOrarioIng(&concessionaria[i]); 
        setOrarioUsc(&concessionaria[i]); 
        setPos(&concessionaria[i]); 
    } 
    
    printf("\nStampo il veicolo che è entrato prima:\n");
    veicoloEntratoPrima(concessionaria, CAR); //veirfico e stampo il veicolo che entra prima
    
    printf("\nStampo tutti i veicolo:\n");
    stampaCatalogo(concessionaria, CAR); //stampo tutti i veicolo
    
    printf("\n\n");
    printf("\nStampo il report Giornaliero:\n");
    for(int i = 0; i < CAR; i++)
    {
        incasso += reportGiornata(concessionaria[i]);
    }

    printf("\n\nOggi la concessionaria ha incassato %d €\n", incasso);

    printf("\n\nPosti dinamici:\n");

    printf("\nStampo tutti i veicolo nei pargheggi dinamici:\n");
    stampaCatalogo(*postiDinamici, CAR);
    
    printf("\n\n");
    return 0;
}

void copyString(char sorgente[], char destinatario[], int length)
{
    for(int i = 0; i < length; i++)
    {
        destinatario[i] = sorgente[i];
        if(sorgente[i] == '\0') break;
    }
}

void autore()
{
    printf("\nCompito in classe 03 maggio 2022 - Classe 3G\n Iosub Robert Valentin Firma________________\n\n");
}
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

void setTarga(struct car * veicolo, char * targa)
{
    copyString(targa, (*veicolo).targa, LENGTH);
}

char * getTarga(struct car *veicolo)
{
    return (*veicolo).targa;
}

void setOrarioIng(struct car * veicolo)
{
    (*veicolo).oraIngresso = rand() % 24;
}

int getOrarioIng(struct car *veicolo)
{
    return (*veicolo).oraIngresso;
}

void setOrarioUsc(struct car * veicolo)
{
    (*veicolo).oraUscita = ORARIOUSCITA;
}

int getOrarioUsc(struct car *veicolo)
{
    return (*veicolo).oraUscita;
}

void setPos(struct car * veicolo)
{
    (*veicolo).posizione = indicePos;
    indicePos += 1;
}

int getPos(struct car *veicolo)
{
    return (* veicolo).posizione;
}

void veicoloEntratoPrima(struct car veicolo[], int car)
{
    int indiceAuto;
    int min = ORARIOUSCITA;

    for(int i = 0; i < car; i++)
    {
        if(veicolo[i].oraIngresso < min)
        {
            min = veicolo[i].oraIngresso;
            indiceAuto = getPos(&veicolo[i]);
        }
    } 
    stampaAuto(veicolo[indiceAuto]);
}

void stampaAuto(struct car veicolo)
{
    printf("\nVeicolo : Targata: %s | Orario Entrata: %d | Orario Uscita: %d\n", getTarga(&veicolo), getOrarioIng(&veicolo), getOrarioUsc(&veicolo));
}

void stampaCatalogo(struct car veicolo[], int car)
{
    for(int i = 0; i < car; i++)
    {
        printf("\nVeicolo : Targata: %s | Orario Entrata: %d | Orario Uscita: %d", getTarga(&veicolo[i]), getOrarioIng(&veicolo[i]), getOrarioUsc(&veicolo[i]));
    }
}

int reportGiornata(struct car veicolo)
{
    int oreDaPagare;
    int tariffa = 10;
    int pagato = 0;

    oreDaPagare = getOrarioUsc(&veicolo) - getOrarioIng(&veicolo);
    pagato = tariffa * oreDaPagare;

    printf("\nVeicolo : Targata: %s | Orario Entrata: %d | Orario Uscita: %d | Tariffa: %d - Pagato %d", 
        getTarga(&veicolo), getOrarioIng(&veicolo), getOrarioUsc(&veicolo), tariffa, pagato);

    return pagato;
}

