#include <stdio.h>
#include <math.h>
int main()
{
    int soma = 0, num, contP = 0;
    float media;
    printf("Digite os números ou 0 para terminar o programa:\n");
    scanf("%d", &num);
    while(num != 0)
    {
        if (num % 2 == 0)
        {
            contP = contP + 1;
            soma = soma + num;
            printf("PARES = %d\n", contP);
            printf("SOMA = %d\n", soma);
        }
        printf("Digite outro numero ou 0 para terminar o programa:\n");
        scanf(" %d", &num);
    }
    media = (float) soma/contP;
    printf("A media dos numeros pares é: %.1f\n", media);
    return 0;
}