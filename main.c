#include <stdio.h>

int main()
{
    float n,media,soma=0;
    for(int i=1;i<=10;i++)
    {
        printf("Digite %da. dos alunos: \n",i);
        scanf("%f",&n);
        soma=soma+n;
    }
    media=soma/10;
    printf("A media é:%.1f \n",media);

    return 0;
}
