/*
05 aprile 2022 Its Marchi Robert

Scrivere una funzione copyString,
che copi il contenuto di una stringa sorgente in una stringa di destinazione.

La funzione accetta tre parametri:
la stringa sorgente, la stringa destinazione e la lunghezza.
Per semplicità le stringhe hanno lunghezza uguale e la funzione non considera gli overflow.

*/

#include<stdio.h>
#define LENGTH 100

struct alunno
{
    char nome[LENGTH];
    char cognome[LENGTH];
    char sezione;
    int classe;
    int anno; 
};

void stampaAlunno(struct alunno tizio);
void copiaStringa(char sorgente[], char destinazione[], int N);
struct alunno setAlunno(char *nome, char *cognome, char sezione, int classe, int anno);
struct alunno setNome(struct alunno tizio, char *nome);
struct alunno setCognome(struct alunno tizio, char *cognome);
void setClasse(struct alunno *tizio, int classe);
void setSezione(struct alunno *tizio, char sezione);
char *getName(struct alunno *tizio);
char *getCognome(struct alunno *tizio);
int getClasse(struct alunno tizio);
char getSezione(struct alunno tizio);
int getAnno(struct alunno tizio);

int main()
{
    struct alunno mike, davide, alessandro;
    struct alunno terzaG[20];

    mike = setAlunno((char *)"Michael", (char *) "Ancona", 'G', 3, 2022);
    davide = setAlunno((char *)"Davide", (char *) "Candeloro", 'G', 3, 2022);
    alessandro = setAlunno((char *)"Alessandro", (char *) "Cerbone", 'G', 3, 2022);
    
    terzaG[0] = mike;
    terzaG[1] = davide;
    terzaG[2] = alessandro;
    
    setSezione(&terzaG[0], 'Z');

    stampaAlunno(terzaG[0]);
    stampaAlunno(terzaG[1]);
    stampaAlunno(terzaG[2]);

    printf("\n\n");
    return 0;
}

void stampaAlunno(struct alunno tizio)
{
    printf("\n%s %s %d%c - Anno Scolastico %d\n", getName(&tizio), getCognome(&tizio), getClasse(tizio), getSezione(tizio), getAnno(tizio));
}

void copiaStringa(char sorgente[], char destinazione[], int N)
{
    for(int i = 0; i < N; i++)
    {
        destinazione[i] = sorgente[i];
        if(sorgente[i] == '\0') break;

    }
}

struct alunno setAlunno(char *nome, char *cognome, char sezione, int classe, int anno)
{
    struct alunno tizio;
    copiaStringa(nome, tizio.nome, LENGTH);
    copiaStringa(cognome, tizio.cognome, LENGTH);
    tizio.sezione = sezione;
    tizio.classe = classe;
    tizio.anno = anno;   

    return tizio;
}

struct alunno setNome(struct alunno tizio, char *nome)
{
    copiaStringa(nome, tizio.nome, LENGTH);
    
    return tizio;
}

struct alunno setCognome(struct alunno tizio, char *cognome)
{
    copiaStringa(cognome, tizio.cognome, LENGTH);
    
    return tizio;
}

void setClasse(struct alunno *tizio, int classe)
{
    (*tizio).classe = classe;
}

void setSezione(struct alunno *tizio, char sezione)
{
    (*tizio).sezione = sezione;
}

char *getName(struct alunno *tizio)
{
    return (* tizio).nome;
}

char *getCognome(struct alunno *tizio)
{
    return (* tizio).cognome;
}

int getClasse(struct alunno tizio)
{
    int classe;
    classe = tizio.classe;

    return classe;
}

char getSezione(struct alunno tizio)
{
    char sezione;
    sezione = tizio.sezione;
    return sezione;
}

int getAnno(struct alunno tizio)
{
    int anno;
    anno = tizio.anno;
    
    return anno;
}
