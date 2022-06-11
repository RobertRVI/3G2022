/*
*       14 aprile 2022 Montecatini Terme Robert
*
*           ***Concessionaria auto 3G***
*
*   definire una struct auto cone : targa, modello, 
*   motore(diesel, bensina, gas o elettrica), venduta(si/no)
*   
*   Implemento le funzioni: 
*   acquistaAuto(), rimuoviAuto(), contaAuto(),
*   setTarga(), setVenduta(), setAuto().
*   getTarga(), getModello(), getMotore(), getVenduta().
*   
*   stampaCatalogo(), stampaAuto().
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define LENGH 100
#define CARS 10
#define POSTIDINAMICI 5

struct car{

    char targa[LENGH];
    char modello[LENGH];
    char motore[LENGH];
    char venduta[LENGH];
};

    /*PROTOTIPI DELLE FUNZIONI*/
int confrontaStringhe(char strgSorgente[], char strgConfronto[], int N);
int contaAuto(struct car concessionaria[], int N);
void timerAttesa(); //per dare tempo di leggere le informazioni su schermo
void copiaStringa(char sorgente[], char destinazione[], int N);
void stampaCatalogo(struct car catalogo[], int N);
void stampaAuto(struct car veicolo);
void richiestaAcquisto(struct car *concessionaria, int car, int lengh); //per minimizzare le righe all'interno del main()
char *getTarga(struct car *catalogo);
char *getModello(struct car *catalogo);
char *getMotore(struct car *catalogo);
char *getVenduta(struct car *catalogo);
struct car acquistaAuto(struct car veicolo);
struct car rimuoviAuto(struct car catalogo);
struct car setAuto(char *targa, char *modello, char *motore, char *venduta);
struct car setVenduta(struct car veicolo, char *venduta);
struct car setTarga(struct car veicolo, char *targa);


int main()
{
    struct car concessionaria[CARS];
    struct car *postiDinamici[POSTIDINAMICI];

    char risposta;
    char autoDisponibile;
    int posto;
    printf("\n\t\t\tCONCESSIONARIA AUTO 3G 2022\n\n");
    /*Imposto le auto disponibili nella concessionaria*/
    concessionaria[0] = setAuto((char *)"*******", (char *)"Toyota Mr2 SW20", (char *)"Benzina", (char *)"No");
    concessionaria[1] = setAuto((char *)"*******", (char *)"BMW M3E30", (char *)"Benzina", (char *)"No");
    concessionaria[2] = setAuto((char *)"*******", (char *)"Nissan 180SX", (char *)"Benzina", (char *)"No");
    concessionaria[3] = setAuto((char *)"*******", (char *)"Mitsubishi 3000GT", (char *)"Benzina", (char *)"No");
    concessionaria[4] = setAuto((char *)"*******", (char *)"Mazda RX-7", (char *)"Benzina", (char *)"No");
    concessionaria[5] = setAuto((char *)"*******", (char *)"Mitsubishi Lancer EVO IV", (char *)"Benzina", (char *)"No");
    concessionaria[6] = setAuto((char *)"*******", (char *)"Toyota Corolla AE86", (char *)"Diesel", (char *)"No");
    concessionaria[7] = setAuto((char *)"*******", (char *)"Honda NSX 1990", (char *)"Benzina", (char *)"No");
    concessionaria[8] = setAuto((char *)"*******", (char *)"Nissan Skyline R33 GTS-T", (char *)"Benzina", (char *)"No");
    concessionaria[9] = setAuto((char *)"*******", (char *)"BMW i8", (char *)"Elettrica", (char *)"No");   
    
    stampaCatalogo(concessionaria, CARS);
    richiestaAcquisto(concessionaria, CARS, LENGH);  
    
    for(int i = 0; i < POSTIDINAMICI; i++)
    {
        postiDinamici[i] = (struct car *)malloc(sizeof(struct car)); 
    }
    
    *postiDinamici[0] = setAuto((char *)"*******", (char *)"Bugatti Chiron", (char *)"Benzina", (char *)"No");
    *postiDinamici[1] = setAuto((char *)"*******", (char *)"Lamborghini Centenario", (char *)"Benzina", (char *)"No");
    *postiDinamici[2] = setAuto((char *)"*******", (char *)"Porsche Taycan", (char *)"Elettrica", (char *)"No");
    *postiDinamici[3] = setAuto((char *)"*******", (char *)"McLaren 765LT", (char *)"Benzina", (char *)"No");
    *postiDinamici[4] = setAuto((char *)"*******", (char *)"Tesla Model X", (char *)"Elettrica", (char *)"No");
    
    printf("\n\nPer i clienti speciali abbiamo:\n");
    for(int i = 0; i < POSTIDINAMICI; i++)
    {
        stampaAuto(*postiDinamici[i]);
    }
   
    printf("\n\n");
    return 0;
}

        /*FUNZIONI IMPLEMENTATE*/
int confrontaStringhe(char strgSorgente[], char strgConfronto[], int N)
{
    int verifica;
    
    for(int i = 0; i < N; i++)
    {
        if(strgConfronto[i] == '\0')
            break;
            
        if(strgSorgente[i] == strgConfronto[i])
        {
            verifica = 1; 
        }
        else if(strgSorgente[i] != strgConfronto[i])
        {
            verifica = 0; 
        }
    }
    
    return verifica;
}

int contaAuto(struct car concessionaria[], int N)
{
    int verifica = 0;
    
    for(int i = 0; i < N; i++)
    {
        if(confrontaStringhe(getVenduta(&concessionaria[i]), (char *) "No", N) == 0)// auto venduta
        {
            verifica++;
        }
        else if(confrontaStringhe(getVenduta(&concessionaria[i]), (char *) "Si", N) == 0)
        {
            break;
        }
    }
    
    return verifica;
}

void timerAttesa()
{
    for(int i = 0; i < time(0) / 4; i++);
}

void copiaStringa(char sorgente[], char destinazione[], int N)
{
    for(int i = 0; i < N; i++)
    {
        destinazione[i] = sorgente[i];
        if(sorgente[i] == '\0')
            break;
    }
}

void stampaCatalogo(struct car catalogo[], int N)
{
    for(int i = 0; i < N; i++)
    {
        printf("\nPosto: %d\nModello: %s\nMotore: %s\nTargata: %s\nVenduta: %s\n\n", i + 1,  getModello(&catalogo[i]), getMotore(&catalogo[i]), 
                    getTarga(&catalogo[i]), getVenduta(&catalogo[i]));
    }
}

void stampaAuto(struct car veicolo)
{
    printf("\nModello: %s\nMotore: %s\nTargata: %s\nVenduta: %s\n\n", getModello(&veicolo), getMotore(&veicolo), 
                    getTarga(&veicolo), getVenduta(&veicolo));
}

void richiestaAcquisto(struct car *concessionaria, int cars, int lengh)
{
    /*PER L'ACQUISTO DELLE AUTOMOBILI*/
    char risposta;
    int posto;
    
    printf("\nVuole acquistare un veicolo?(s/n)");
    scanf("%s", &risposta);
    /*in caso si voglia acquistare l'auto questa viene immatricolata e poi rimossa dal catalogo*/
    if(risposta == 's')
    {
        printf("\nQuale modello?(INSERIRE IL POSTO DEL VEICOLO): ");
        scanf("%d", &posto);
        posto--;
        
        if(confrontaStringhe(getVenduta(&concessionaria[posto]), (char *) "No", lengh) == 0) // auto non disponibile
        {
            printf("\nL'auto non e disponibile.\nPuo provare con un altra auto oppure non acquistare nulla:\n");
        }
        else //auto disponibile
        {
            srand(time(0));
            concessionaria[posto] = acquistaAuto(concessionaria[posto]);
        
            stampaAuto(concessionaria[posto]);
            printf("\nIl suo veicolo e stato immatricolato!\n");
        
            printf("\nVuole ritirare subito il suo veicolo?(s/n)");
            scanf("%s", &risposta);
        
            if(risposta == 's')
            {
                printf("\nAdesso la sua auto verra rimossa dal catalogo(ci vorra un paio di secondi):\n");
                concessionaria[posto] = rimuoviAuto(concessionaria[posto]);
                
                timerAttesa();
                stampaCatalogo(concessionaria, cars);
                
                printf("\nVuole acquistare un altro veicolo?(s/n)");
                scanf("%s", &risposta);
            }
            else
            {  
                stampaCatalogo(concessionaria, cars);
                printf("\nVuole acquistare un altro veicolo?(s/n)");
                scanf("%s", &risposta);
            }
        }
    }            
        
        /*****************************************************************************/
        /*   continuo a chiedere se si vuole un altra auto fino a risposta negativa, */
        /*   altrimenti fino a che non vengono ascquistati tutti i veicoli           */
        /*****************************************************************************/
    while(risposta == 's')
    {            
        if(contaAuto(concessionaria, cars) == cars)//controllo se tutte le auto sono vendute
        {
            printf("\nCi dispiace dirle che abbiamo esaurito i veicoli\n");
            break;
        }
            
        if(risposta == 's')
        { 
            printf("\nQuale modello?(INSERIRE IL POSTO DEL VEICOLO): ");
            scanf("%d", &posto);
            posto--;
                
            if(confrontaStringhe(getVenduta(&concessionaria[posto]), (char *) "No", lengh) == 1) // auto disponibile
            {
                srand(time(0));
                concessionaria[posto] = acquistaAuto(concessionaria[posto]);                
                
                stampaAuto(concessionaria[posto]);
                printf("\nIl suo veicolo e stato immatricolato!\n");
                    
                printf("\nVuole ritirare subito il suo veicolo?(s/n)");
                scanf("%s", &risposta);
        
                if(risposta == 's')
                {
                    printf("\nAdesso la sua auto verra rimossa dal catalogo(ci vorra un paio di secondi):\n");
                    concessionaria[posto] = rimuoviAuto(concessionaria[posto]);
                        
                    timerAttesa();
                    stampaCatalogo(concessionaria, cars);
                }
                else  
                    stampaCatalogo(concessionaria, cars);

            }   
            else // auto non disponibile
                printf("\nL'auto non e disponibile.\nPuo provare con un altra auto oppure non acquistare nulla:\n");      
        }
        printf("\nVuole acquistare un altro veicolo?(s/n)");
        scanf("%s", &risposta);
    }
}

char *getTarga(struct car *catalogo)
{
    return (* catalogo).targa;
}

char *getModello(struct car *catalogo)
{
    return (* catalogo).modello;
}

char *getMotore(struct car *catalogo)
{
    return (* catalogo).motore;
}

char *getVenduta(struct car *catalogo)
{
    return (* catalogo).venduta;
}  

struct car acquistaAuto(struct car veicolo)
{
    veicolo = setVenduta(veicolo, (char *) "Si");
    veicolo = setTarga(veicolo, getTarga(&veicolo));
    
    return veicolo;
    
}

struct car rimuoviAuto(struct car veicolo)
{
    veicolo = setAuto((char *)"*******", (char *)"***********", (char *)"*******", (char *)"**"); 
    
    return veicolo;
}

struct car setAuto(char *targa, char *modello, char *motore, char *venduta)
{
    struct car veicolo;
    
    copiaStringa(targa, veicolo.targa, LENGH);
    copiaStringa(modello, veicolo.modello, LENGH);
    copiaStringa(motore, veicolo.motore, LENGH);
    copiaStringa(venduta, veicolo.venduta, LENGH);
    
    return veicolo;
}

struct car setVenduta(struct car veicolo, char *venduta)
{ 
    copiaStringa(venduta, veicolo.venduta, LENGH);
    
    return veicolo; 
}

struct car setTarga(struct car veicolo, char *targa)
{  
    /*genero una targa per immatricolare il veicolo venduto*/
    targa[0] = rand() % 26 + 65;
    targa[1] = rand() % 26 + 65;
    targa[2] = rand() % 10 + 48;
    targa[3] = rand() % 10 + 48;
    targa[4] = rand() % 10 + 48;
    targa[5] = rand() % 26 + 65;
    targa[6] = rand() % 26 + 65;
    
    copiaStringa(targa, veicolo.targa, LENGH); 
    
    return veicolo;
}
