#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	char nome[100];
    char curso[15];
    int matricula[20];
    float nota;
	struct no *anterior;
	struct no *prox;
} no;

typedef struct {
	no *inicio;
	no *fim;
} Lista_Dupla;

void inicializar_lista(Lista_Dupla *lista);

no* criar_no(char *nome, char *curso, int matricula, float nota);

void adicionar_fim(Lista_Dupla *lista, char *nome, char *curso, int matricula, float nota);

void remover_no(Lista_Dupla *lista, no* no_remover);

void carregar_musicas(Lista_Dupla *lista);

void limpar_buffer();