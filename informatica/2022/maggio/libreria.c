/*
*   1 maggio 2022 Monteacatini Terme Robert
*
*   Una libreria ha uno scaffale con 10 posti statici e 10 posti dinamici nei quali dispone libri.
*   Il libro ha un titolo, uno nome, uno costo, una posizione e un flag presente assente.
*
*   Implementare le funzioni get e set delle variabili titolo, nome, costo, posizione e presente assente.
*   Implementare le funzioni stampa libro e stampa scaffale.  
*   implementare la funzione trova libri che hanno un costo superiore ad un determinato valore.
*
*/

#include<stdio.h>
#include<stdlib.h>
#define LENGTH 100
#define LIBRI 10
#define POSTIDINAMICI 10

int indicePos = 0;

struct book{
    char titolo[LENGTH];
    char autore[LENGTH];
    int prezzo;
    int posizione;
    char presente[LENGTH]; // si/no.
    };

void copyString(char sorgente[], char destinazione[], int N);
void stampaLibro(struct book libro);
void stampaLibreria(struct book scaffale[], int length);   
void setTitolo(struct book *libro, char * titolo);
void setAutore(struct book *libro, char * autore);
void setPrezzo(struct book *libro, int prezzo);
void setPosizione(struct book *libro);
void setPresente(struct book *libro, char * presente);
char * getTitolo(struct book *libro);
char * getAutore(struct book *libro);
int getPrezzo(struct book *libro);
int getPosizione(struct book *libro);
char * getPresente(struct book *libro);
struct book setLibro(char * titolo, char * autore, int prezzo, char *  presente);
struct book *newLibro();
void trovaPrezzo(struct book scaffale[], int libri);

int main()
{
    struct book scaffale[LIBRI];
    struct book *pLibro[POSTIDINAMICI];
    
    scaffale[0] = setLibro((char*)"Harry Potter e la Pietra Filosofale", (char *)"J.K. Rowling", 15, (char *) "Si");
    scaffale[1] = setLibro((char*)"Harry Potter e la Camera dei Segreti", (char *)"J.K. Rowling", 15, (char *) "Si");
    scaffale[2] = setLibro((char*)"Harry Potter e il Prigioniero di Azkaban", (char *)"J.K. Rowling", 17, (char *) "Si");
    scaffale[3] = setLibro((char*)"Harry Potter e il Calice di Fuoco", (char *)"J.K. Rowling", 18, (char *) "Si");
    scaffale[4] = setLibro((char*)"Harry Potter e l'Ordine della Fenice", (char *)"J.K. Rowling", 24, (char *) "Si");
    scaffale[5] = setLibro((char*)"Harry Potter e il Principe Mezzosangue", (char *)"J.K. Rowling", 23, (char *) "Si");
    scaffale[6] = setLibro((char*)"Harry Potter e i Doni dela  Morte", (char *)"J.K. Rowling", 25, (char *) "Si");
    scaffale[7] = setLibro((char*)"Harry Potter e la Maledizione delle'Erede", (char *)"J.K. Rowling", 25, (char *) "Si");
    scaffale[8] = setLibro((char*)"Gli animali fantastici: dove trovarli", (char *)"J.K. Rowling", 12, (char *) "Si");
    scaffale[9] = setLibro((char*)"Le Fiabe di Beda il Bardo", (char *)"J.K. Rowling", 12, (char *) "Si");
    
    printf("\nSullo scaffale troviamo : \n");
    stampaLibreria(scaffale, LIBRI);
    for(int i = 0; i < POSTIDINAMICI; i++)
    {
        pLibro[i] = newLibro();
        *pLibro[i] = setLibro((char*)"*************", (char *)"*******", 0, (char *) "**");
    }
    
    printf("\nLa libreria aggiunge un libro:\n\n");
    *pLibro[0] = setLibro((char*)"La Verita del Ghiaccio", (char *)"Dan Brown", 18, (char *) "Si");
    stampaLibro(*pLibro[0]);
    
    trovaPrezzo(scaffale, LIBRI);
    printf("\n\n");
    return 0;
}

void copyString(char sorgente[], char destinazione[], int N)
{
    for(int i = 0; i < N; i++)
    {
        destinazione[i] = sorgente[i];
        if(sorgente[i] == '\0') break;
    }
}

void stampaLibro(struct book libro)
{
    printf("\nTitolo: %s\nAutore: %s\nPrezzo: %d\nPosizione: %d\nPresente: %s\n\n", 
                getTitolo(&libro), getAutore(&libro), getPrezzo(&libro), getPosizione(&libro), getPresente(&libro));
}

void stampaLibreria(struct book scaffale[], int libri)
{
    for(int i = 0; i < libri; i++)
    {
        printf("\nTitolo: %s\nAutore: %s\nPrezzo: %d\nPosizione: %d\nPresente: %s\n\n", 
                getTitolo(&scaffale[i]), getAutore(&scaffale[i]), getPrezzo(&scaffale[i]), getPosizione(&scaffale[i]), getPresente(&scaffale[i]));
    }
}

struct book setLibro(char * titolo, char * autore, int prezzo, char *  presente)
{
    struct book libro;
    copyString(titolo, libro.titolo, LENGTH);
    copyString(autore, libro.autore, LENGTH);
    libro.prezzo = prezzo;
    setPosizione(&libro);
    copyString(presente, libro.presente, LENGTH);
    
    return libro;
}

void setTitolo(struct book *libro, char * titolo)
{
    copyString(titolo, (*libro).titolo, LENGTH);
}

void setAutore(struct book *libro, char * autore)
{
    copyString(autore, (*libro).autore, LENGTH);
}

void setPrezzo(struct book *libro, int prezzo)
{
    (* libro).prezzo = prezzo;
}

void setPosizione(struct book *libro)
{
    (* libro).posizione = indicePos;
    indicePos += 1;
}

void setPresente(struct book *libro, char * presente)
{
    copyString(presente, (*libro).presente, LENGTH);
}

char * getTitolo(struct book *libro)
{
    return (* libro).titolo;
}

char * getAutore(struct book *libro)
{
    return (* libro).autore;
}

int getPrezzo(struct book *libro)
{
    return (* libro).prezzo;
}

int getPosizione(struct book *libro)
{
    return (* libro).posizione;
}

char * getPresente(struct book *libro)
{
    return (* libro).presente;
}

struct book *newLibro()
{
    struct book *pLibro;
    pLibro = (struct book *)malloc(sizeof(struct book));
    
    return pLibro;
}

void trovaPrezzo(struct book scaffale[], int libri)
{
    int max = 20;
    int prezzo;
    printf("\nEcco i libri che costano piu di %d euro\n", max);
    for(int i = 0; i < libri; i++)
    {
        prezzo = getPrezzo(&scaffale[i]);
        if(prezzo > max)
            stampaLibro(scaffale[i]);
    }

}
