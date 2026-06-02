#include "func.c"
#include "func.h"
#include <stdio.h>
#include <string.h>

int menu () {
    int op;
    printf("-= Menu =- \n\n 1-Cadastrar Aluno \n 2-Exibir dados \n 3-Calcular media \n 4-Sair");
    scanf("%d", &op);

        do {
            switch (op) {
            case 1:
            break;
            
            case 2:
            break;
            
            case 3:
            break;
            
            case 4:
                printf("\nSaindo...");
            break;

            default:
                printf("\nOpção invalida, tente novamente!");
            break;
            }
        } while (op != 0);
    
    

}