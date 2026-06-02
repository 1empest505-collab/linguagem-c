#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "func.h"

void inicializar_lista(Lista_Dupla *lista) {
    lista->inicio = NULL;
    lista->fim = NULL;
}

no* criar_no(char *nome, char *curso, int matricula, float nota) {
    no *novo_no = (no*)malloc(sizeof(no));
    if (novo_no == NULL) {
        printf("Erro de memoria!\n");
        exit(1);
    }
    strcpy(novo_no->nome, nome);
    strcpy(novo_no->curso, curso);
    novo_no->matricula = matricula;
    novo_no->nota = nota;
    novo_no->anterior = NULL;
    novo_no->prox = NULL;
    return novo_no;
}

void adicionar_fim(Lista_Dupla *lista, char *nome, char *curso, int matricula, float nota) {
    no *temp = criar_no(nome, curso, matricula, nota);
    if (lista->fim == NULL) {
        lista->inicio = temp;
        lista->fim = temp;
    } else {
        temp->anterior = lista->fim;
        lista->fim->prox = temp;
        lista->fim = temp;
    }
}

void remover_no(Lista_Dupla *lista, no* no_remover) {
    if (lista->inicio == NULL || no_remover == NULL) return;
    
    if (lista->inicio == no_remover) lista->inicio = no_remover->prox;
    if (lista->fim == no_remover) lista->fim = no_remover->anterior;
    
    if (no_remover->prox != NULL) no_remover->prox->anterior = no_remover->anterior;
    if (no_remover->anterior != NULL) no_remover->anterior->prox = no_remover->prox;
    
    free(no_remover);
}

void carregar_musicas(Lista_Dupla *lista) {
    adicionar_fim(lista, "juan", "adm", 1111, 8.5);
    adicionar_fim(lista, "Sambinha", "comput", 2222, 9.0);
}

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}