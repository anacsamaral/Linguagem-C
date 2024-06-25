#include <stdio.h>
#define tf 6
int main()
{
    int vet[tf], i, par = 0, imp = 0;

    for (i = 0; i < tf; i++)
    {
        printf("%do. valor:\n", i+1);
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < tf; i++)
    {
        if (vet[i] % 2 == 0)
            par++;
        else
            imp++;
    }

    printf("Valores do vetor:\n");
    for (i = 0; i < tf; i++)
    {
        if (i < tf - 1)
            printf("%d,", vet[i]);
        else
            printf("%d\n", vet[i]);
    }

    printf("Sao %d numeros pares e %d numeros impares.\n", par, imp);
    return 0;
}