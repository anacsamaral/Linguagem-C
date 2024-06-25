#include <stdio.h>
#define TF 5
int main()
{
    int vet1[TF], vet2[TF], vet3[TF * 2], i;

    // Inserindo os valores no vetor
    for (i = 0; i < TF; i++)
    {
        printf("Digite o %do. numero do vetor 1:\n", i + 1);
        scanf("%d", &vet1[i]);
        printf("Digite o %do. numero do vetor 2:\n", i + 1);
        scanf("%d", &vet2[i]);
    }

    // Intercalando os valores no terceiro vetor
    for (i = 0; i < TF; i++)
    {
        vet3[i * 2] = vet1[i];
        vet3[i * 2 + 1] = vet2[i];
    }

    // Exibindo vet1 e vet2
    for (i = 0; i < TF; i++)
    {
        if (i == TF - 1)
            printf("%d", vet1[i]);
        else
            printf("%d,", vet1[i]);
    }
    printf("\n");
    for (i = 0; i < TF; i++)
    {
        if (i == TF - 1)
            printf("%d", vet2[i]);
        else
            printf("%d,", vet2[i]);
    }
    printf("\n");

    // Exibindo o vet3
    for (i = 0; i < TF * 2; i++)
    {
        if (i == TF * 2 - 1)
            printf("%d", vet3[i]);
        else
            printf("%d,", vet3[i]);
    }
    return 0;
}