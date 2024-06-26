#include <stdio.h>
#define tf 5
int main()
{
    int vet[tf], tl = 0, num, pos, i;
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
    for (i = 0; i < tl; i++)
        printf("%d ", vet[i]);
    return 0;
}