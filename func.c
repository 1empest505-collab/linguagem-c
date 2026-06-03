#include <stdio.h>

int main()
{
    float p1[10], p2[10], pf[10];
    float maiorP1, menorP1;
    float maiorP2, menorP2;
    float maiorPF, menorPF;
    float media;

    // Leitura P1
    for(int i = 0; i < 10; i++)
    {
        printf("Digite a nota P1 do aluno %d: ", i + 1);
        scanf("%f", &p1[i]);

        if(i == 0)
        {
            maiorP1 = menorP1 = p1[i];
        }
        else
        {
            if(p1[i] > maiorP1) maiorP1 = p1[i];
            if(p1[i] < menorP1) menorP1 = p1[i];
        }
    }

    // Leitura P2
    for(int i = 0; i < 10; i++)
    {
        printf("Digite a nota P2 do aluno %d: ", i + 1);
        scanf("%f", &p2[i]);

        if(i == 0)
        {
            maiorP2 = menorP2 = p2[i];
        }
        else
        {
            if(p2[i] > maiorP2) maiorP2 = p2[i];
            if(p2[i] < menorP2) menorP2 = p2[i];
        }
    }

    printf("\n--- RESULTADO DOS ALUNOS ---\n");

    int primeiroPF = 1;

    for(int i = 0; i < 10; i++)
    {
        media = (p1[i] + p2[i]) / 2;

        printf("\nAluno %d", i + 1);
        printf("\nMedia = %.1f", media);

        if(media < 6)
        {
            printf("\nAluno em PF!");

            printf("\nDigite a nota da PF: ");
            scanf("%f", &pf[i]);

            if(primeiroPF)
            {
                maiorPF = menorPF = pf[i];
                primeiroPF = 0;
            }
            else
            {
                if(pf[i] > maiorPF) maiorPF = pf[i];
                if(pf[i] < menorPF) menorPF = pf[i];
            }
        }
        else
        {
            printf("\nAluno aprovado!");
        }

        printf("\n");
    }

    printf("\n--- ESTATISTICAS ---\n");
    printf("Maior nota P1: %.1f\n", maiorP1);
    printf("Menor nota P1: %.1f\n", menorP1);

    printf("Maior nota P2: %.1f\n", maiorP2);
    printf("Menor nota P2: %.1f\n", menorP2);

    if(!primeiroPF)
    {
        printf("Maior nota PF: %.1f\n", maiorPF);
        printf("Menor nota PF: %.1f\n", menorPF);
    }
    else
    {
        printf("Nenhum aluno foi para PF.\n");
    }

    return 0;
}