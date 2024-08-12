#include <stdio.h>
#define TF 3
int main()
{
    int vet1[TF], vet2[TF], vetUniao[TF*2], i;
    for(i = 0; i < TF; i++)
    {
        printf("Digite o %do. numero do vetor 1:\n", i + 1);
        scanf("%d", &vet1[i]);
    }
    for(i = 0; i < TF; i++)
    {
        printf("Digite o %do. numero do vetor 2:\n", i + 1);
        scanf("%d", &vet2[i]);
    }
    for(i = 0; i < TF*2; i++)
    {
        vetUniao[i*2] = vet1[i];
        vetUniao[i*2+1] = vet2[i];
    }
    printf("Vetor 1:\n");

    for (i = 0; i < TF; i++)
        printf("%d ", vet1[i]);
    printf("\n");

    printf("Vetor 2:\n");
    for (i = 0; i < TF; i++)
        printf("%d ", vet2[i]);
    printf("\n");

    printf("Vetor Uniao:\n");
    for (i = 0; i < TF*2; i++)
        printf("%d ", vetUniao[i]);

    return 0;
}