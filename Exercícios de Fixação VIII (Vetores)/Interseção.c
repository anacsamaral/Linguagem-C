#include <stdio.h>
#define TF 3
int main()
{
    int vet1[TF], vet2[TF], vetUniao[TF*2], i;

    //Preenchimento vetor 1
    for(i = 0; i < TF; i++)
    {
        printf("Digite o %do. numero do vetor 1:\n", i + 1);
        scanf("%d", &vet1[i]);
    }

    //Preenchimento vetor 2
    for(i = 0; i < TF; i++)
    {
        printf("Digite o %do. numero do vetor 2:\n", i + 1);
        scanf("%d", &vet2[i]);
    }

    //Intercalação dos vetores
    for(i = 0; i < TF; i++)
    {
        vetUniao[i*2] = vet1[i];
        vetUniao[i*2+1] = vet2[i];
    }

    //Exibição do vetor 1
    printf("Vetor 1:\n");
    for (i = 0; i < TF; i++){
        printf("%d ", vet1[i]);
    }
    printf("\n");

    //Exibição do vetor 2
    printf("Vetor 2:\n");
    for (i = 0; i < TF; i++){
        printf("%d ", vet2[i]);
    }
    printf("\n");

    //Exibição do vetor união
    printf("Vetor Uniao:\n");
    for (i = 0; i < TF*2; i++){
        printf("%d ", vetUniao[i]);
    }
    printf("\n");
    return 0;
}