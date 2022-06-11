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
void copiaStringa(char sorgente[], char destinazione[],  int N);
struct alunno setAlunno(char *nome, char *cognome, char sezione, int classe, int anno);
struct alunno setNome(struct alunno tizio, char *nome);
struct alunno setCognome(struct alunno tizio, char *cognome);
void setClasse(struct alunno *tizio, int classe);
void setSezione(struct alunno *tizio, char sezione);
char getNome(struct alunno tizio);
//char getCognome(struct alunno tizio);
//int getClasse(struct alunno tizio);
//char getSezione(struct alunno tizio);


int main()
{
    struct alunno tizio, caio;
    
    tizio = setAlunno((char *)"Pipo", (char *)"Baudo", 'G', 3, 2022);
    caio = setAlunno((char *)"Sempronio", (char *)"Caia", 'G', 3, 2022);
     
    stampaAlunno(tizio);
    stampaAlunno(caio);
    
    printf("\nCorreggo il nome '%s' e il cognome '':\n\n", getNome(tizio));
    
    tizio = setNome(tizio, (char *)"Pippo");
    caio = setCognome(caio, (char *)"Caio");
    
    stampaAlunno(tizio);
    stampaAlunno(caio);
    
    printf("\n\n");
    return 0;
}

void stampaAlunno(struct alunno tizio)
{
    printf("%s %s %d%c - Anno Scolastico %d\n", tizio.nome, tizio.cognome, tizio.classe, tizio.sezione, tizio.anno);
}

void copiaStringa(char sorgente[], char destinazione[],  int N)
{
    for(int i = 0; i < N; i++)
    {
        destinazione[i] = sorgente[i];
        
        if(sorgente[i] == '\0')
            break;
            
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

char getNome(struct alunno tizio)
{  
    char *nome;
    copiaStringa(nome, tizio.nome, LENGTH);
    
    return *nome;
}


