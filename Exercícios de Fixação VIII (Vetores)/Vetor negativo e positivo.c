#include <stdio.h>
#define tf 4
int main()
{
    int vet1[tf], vet2[tf], i;
    for (i = 0; i < tf; i++)
    {
        printf("Dig o %do. num do vetor:\n", i + 1);
        scanf("%d", &vet1[i]);
    }
    for (i = 0; i < tf; i++)
    {
        if (vet1[i] < 0)
            vet2[i] = vet1[i];
    }
    for (i = 0; i < tf; i++)
    {
        if (vet1[i] >= 0)
            vet2[i] = vet1[i];
    }
    for (i = 0; i < tf; i++)
        printf("%d ", vet1[i]);
    printf("\n");
    for (i = 0; i < tf; i++)
        printf("%d ", vet2[i]);

    return 0;
}