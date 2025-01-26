#include <stdio.h>
#include <string.h>
#include <limits.h>

#define TFP 10
#define TFA 5

int main()
{
    int l, c, Estoque[TFA][TFP], Total_Armazem, Total_Produto, Armazem_Menor_Estoque, Armazem_Maior_Estoque;
    float Custo[TFP], Custo_Armazem;
    char Produto[TFP][20], Produto_Menor_Estoque[20], Produto_Maior_Estoque[20];
    int Maior_Estoque = INT_MIN, Menor_Estoque = INT_MAX;

    for (c = 0; c < TFP; c++)
    {
        printf("\nDigite o nome do %do produto: ", c + 1);
        fflush(stdin);
        gets(Produto[c]);
        printf("\nDigite o custo do %do produto: ", c + 1);
        scanf("%f", &Custo[c]);

        for (l = 0; l < TFA; l++)
        {
            printf("\nDigite o estoque do %do produto no armazem %d: ", c + 1, l + 1);
            scanf("%d", &Estoque[l][c]);
        }
    }

    for (l = 0; l < TFA; l++)
    {
        Total_Armazem = 0;
        for (c = 0; c < TFP; c++)
            Total_Armazem += Estoque[l][c];

        if (Total_Armazem > Maior_Estoque)
        {
            Maior_Estoque = Total_Armazem;
            Armazem_Maior_Estoque = l + 1;
        }
        if (Total_Armazem < Menor_Estoque)
        {
            Menor_Estoque = Total_Armazem;
            Armazem_Menor_Estoque = l + 1;
        }
        printf("\nEstoque do armazem %d: [%d]", l + 1, Total_Armazem);
    }

    printf("\nArmazem com maior estoque: %d", Armazem_Maior_Estoque);
    printf("\nArmazem com menor estoque: %d", Armazem_Menor_Estoque);

    Maior_Estoque = INT_MIN;
    Menor_Estoque = INT_MAX;
    for (c = 0; c < TFP; c++)
    {
        Total_Produto = 0;
        for (l = 0; l < TFA; l++)
            Total_Produto += Estoque[l][c];

        if (Total_Produto > Maior_Estoque)
        {
            Maior_Estoque = Total_Produto;
            strcpy(Produto_Maior_Estoque, Produto[c]);
        }
        if (Total_Produto < Menor_Estoque)
        {
            Menor_Estoque = Total_Produto;
            strcpy(Produto_Menor_Estoque, Produto[c]);
        }
        printf("\nEstoque do produto %s: [%d]", Produto[c], Total_Produto);
    }

    printf("\nProduto com maior estoque: %s", Produto_Maior_Estoque);
    printf("\nProduto com menor estoque: %s", Produto_Menor_Estoque);

    for (l = 0; l < TFA; l++)
    {
        Custo_Armazem = 0;
        for (c = 0; c < TFP; c++)
            Custo_Armazem += Custo[c] * Estoque[l][c];
        printf("\nCusto do armazem %d: [%.2f]", l + 1, Custo_Armazem);
    }

    return 0;
}
