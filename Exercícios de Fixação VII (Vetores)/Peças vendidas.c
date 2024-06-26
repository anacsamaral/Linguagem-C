#include <stdio.h>
#define tf 10
int main()
{
    int i, vetQ[tf], peca = 0;
    float vetP[tf], total;
    for (i = 0; i < tf; i++)
    {
        printf("Quantidade:\n");
        scanf("%d", &vetQ[i]);
        peca += vetQ[i];
        printf("Preco Unitario:\n");
        scanf("%f", &vetP[i]);
        total = vetQ[i] * vetP[i];
        printf("Total da venda: R$%.2f\n", total);
    }
    printf("Total de pecas vendidas: %d\n", peca);
    return 0;
}