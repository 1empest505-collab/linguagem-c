#include <stdio.h>

int main()
{
    float n, media, soma = 0;
    float maior, menor;

    for(int i = 1; i <= 10; i++)
    {
        printf("\nDigite a %da nota dos alunos: ", i);
        scanf("%f", &n);
        soma += n;
        if(i == 1)
        {
            maior = n;
            menor = n;
        }
        else
        {
            if(n > maior)
                maior = n;
            if(n < menor)
                menor = n;
        }
    }

    media = soma / 10;

    printf("\nMedia: %.1f\n", media);
    printf("Maior nota: %.1f\n", maior);
    printf("Menor nota: %.1f\n", menor);

    return 0;
}