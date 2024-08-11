#include <stdio.h>
#define TF 8
int main()
{
    int vet[TF], i, j, pos, num, elem, TL = 0;
    printf("Digite o %do. numero:\n", TL+1);
    scanf("%d", &num);
    while (TL < TF && num > 0)
    {
        vet[TL] = num;
        TL++;
        if (TL < TF)
        {
            printf("Digite o %do. numero:\n", TL+1);
            scanf("%d", &num);
        }
    }
    printf("Digite o numero e a posicao:\n");
    scanf("%d%d", &elem, &pos);

    j = 0;
    while (vet[j] > 0 && j < TL)
        j++;

    for (i = pos; i < TL; i++)
    {
        vet[pos+TL] = vet[pos];
        TL++;
    }
    for(i = 0; i < TL; i++)
        printf("%d ", vet[i]);

    return 0;
    
}