#include <stdio.h>
#define tf 7
int main()
{
    int vet1[tf], vet2[tf], vet3[tf * 2], num, i, j, pos, tl1 = 0, tl2 = 0, tl3 = 0;
    printf("Digite o %do. numero do vet1:\n", tl1 + 1);
    scanf("%d", &num);
    while (tl1 < tf && num > 0)
    {
        pos = 0;
        while (pos < tl1 && num > vet1[pos])
            pos++;
        for (i = tl1; i > pos; i--)
            vet1[i] = vet1[i - 1];
        vet1[pos] = num;
        tl1++;
        if (tl1 < tf)
        {
            printf("Digite o %do. numero do vet1:\n", tl1 + 1);
            scanf("%d", &num);
        }
    }
    printf("Digite o %do. numero do vet2:\n", tl2 + 1);
    scanf("%d", &num);
    while (tl2 < tf && num > 0)
    {
        pos = 0;
        while (pos < tl2 && num > vet2[pos])
            pos++;
        for (i = tl2; i > pos; i--)
            vet2[i] = vet2[i - 1];
        vet2[pos] = num;
        tl2++;
        if (tl2 < tf)
        {
            printf("Digite o %do. numero do vet2:\n", tl2 + 1);
            scanf("%d", &num);
        }
    }
    i = 0; j = 0;
    while (i < tl1 && j < tl2)
    {
        if (vet1[i] < vet2[j])
        {
            vet3[tl3] = vet1[i];
            tl3++;
            i++;
        }
        else
        {
            vet3[tl3] = vet2[j];
            tl3++;
            j++;
        }
    }
    while (i < tl1)
    {
        vet3[tl3] = vet1[i];
        tl3++;
        i++;
    }
    while (j < tl2)
    {
        vet3[tl3] = vet2[j];
        tl3++;
        j++;
    }

    for (i = 0; i < tl1; i++)
        printf("%d ", vet1[i]);
    printf("\n");
    for (i = 0; i < tl2; i++)
        printf("%d ", vet2[i]);
    printf("\n");
    for (i = 0; i < tl3; i++)
        printf("%d ", vet3[i]);
    return 0;
}