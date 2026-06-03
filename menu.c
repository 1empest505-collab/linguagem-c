#include "func.h"
#include "menu.h"
#include <stdio.h>
#include <string.h>

int menu () {

    Lista_Dupla lista;
    inicializar_lista(&lista);
    carregar_aluno(&lista);

    int op;
    printf("-= Menu =- \n\n 1-Cadastrar Aluno \n 2-Exibir dados \n 3-Calcular media \n 4-Sair");
    scanf("%d", &op);
    limpar_buffer();

        do {
            switch (op) {
            case 1:
                menu_cadastrar_aluno(&lista);
                break;
            case 2:
                menu_exibir_dados(&lista);
                break;
            case 3:
                menu_calcular_media(&lista);
                break;
            case 4:
                printf("\nSaindo...");
            break;

            default:
                printf("\nOpção invalida, tente novamente!");
            break;
            }
        } while (op != 4);
    
    return 0;

}

void menu_cadastrar_aluno(Lista_Dupla *lista) {
    char nome[100];
    char curso[15];
    int matricula;
    float nota;

    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove a nova linha

    printf("Digite o curso do aluno: ");
    fgets(curso, sizeof(curso), stdin);
    curso[strcspn(curso, "\n")] = '\0'; // Remove a nova linha

    printf("Digite a matricula do aluno: ");
    scanf("%d", &matricula);

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    adicionar_fim(lista, nome, curso, matricula, nota);

}

void menu_exibir_dados(Lista_Dupla *lista) {
    if (lista->inicio == NULL) {
        printf("Lista vazia!\n");
        return;
    }
    no *temp = lista->inicio;
    while (temp != NULL) {
        printf("Nome: %s\n", temp->nome);
        printf("Curso: %s\n", temp->curso);
        printf("Matricula: %d\n", temp->matricula);
        printf("Nota: %.2f\n", temp->nota);
        printf("-----------------------\n");
        temp = temp->prox;
    }

}

void menu_calcular_media(Lista_Dupla *lista) {
    float media = calcular_media(lista);
    if (media > 0) {
        printf("Media das notas: %.2f\n", media);
    }

}