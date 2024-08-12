#include <stdio.h>
#define TF 8
int main()
{
    int vet[TF], i, pos, num, elem, TL = 0;
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

    vet[TL] = vet[pos];
    vet[pos] = elem;
    TL++;

    for (i = 0; i < TL; i++)
        printf("%d ", vet[i]);

    return 0;
    
}