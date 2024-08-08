#include <stdio.h>
#define tf 4
int main()
{
    int vet1[tf], vet2[tf], i, j, temp;

    //leitura do vetor
    for (i = 0; i < tf; i++)
    {
        printf("Dig o %do. num do vetor:\n", i + 1);
        scanf("%d", &vet1[i]);
    }

    //ordenação do vetor
    for (i = 0; i < 4 - 1; i++) 
    {
        for (j = 0; j < 4 - i - 1; j++) 
        {
            if (vet1[j] > vet1[j + 1]) 
            {
                // Troca de elementos
                temp = vet1[j];
                vet2[j] = vet1[j + 1];
                vet2[j + 1] = temp;
            }
    }

    //exibição do vet1 e vet2
    for (i = 0; i < tf; i++)
        printf("%d ", vet1[i]);
    printf("\n");
    for (i = 0; i < tf; i++)
        printf("%d ", vet2[i]);

    return 0;
}