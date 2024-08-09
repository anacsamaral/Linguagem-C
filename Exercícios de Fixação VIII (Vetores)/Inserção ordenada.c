#include <stdio.h>
#define tf 8
int main()
{
    int vet[tf], tl = 0, num, pos, i, elem;
    printf("Digite o %do. numero:\n", tl+1);
    scanf("%d", &num);
    while (tl < tf && num > 0)
    {
        //Busca sequencial
        pos = 0;
        while (pos < tl && num > vet[pos])
            pos++;

        //Inserção do numero de forma ordenada no vetor
        for (i = tl; i > pos; i--)
            vet[i] = vet[i-1];
        vet[pos] = num;
        tl++;

        if (tl < tf)
        {
            printf("Digite o %do. numero:\n", tl+1);
            scanf("%d", &num);  
        }
    }
    
    //Inserção do elemento no vetor
    pos = 0;
    while (pos < tl && elem != vet[pos]);
        pos++;
    
    for (i = tl; i > pos; i++)
        vet[i] = vet[i + 1];
    vet[pos] = elem;
    tl++;
    if (tl < tf)
    {
        printf("Digite o %do. numero:\n");
        scanf("%d", &num);
    }

    for (i = 0; i < tl; i++)
        printf("%d ", vet[i]);
    return 0;
}