#include <stdio.h>
#include <string.h>

#define TFP 10
#define TFA 5

int main()
{
    int l, c, Estoque[TFA][TFP], Total_Armazem, Total_Produto, Custo_Armazem, Armazem_Menor_Estoque, Armazem_Maior_Estoque, Maior_Estoque, Menor_Estoque;
    float Custo[TFP];
    char Produto[TFP][20], Produto_Menor_Estoque, Produto_Maior_Estoque;

    for(c = 0; c < TFP; c++)
    {
        printf("\nDigite o nome do %do. produto: ", c+1); fflush(stdin);
        scanf("%s", &Produto[c]);
        printf("\nDigite o custo do %do. produto: ", c+1);
        scanf("%f", &Custo[c]);

        for(l = 0; l < TFA; l++)
        {
            printf("\nDigite o estoque do %do. produto no armazem %d: ", c+1, l+1);
            scanf("%d", &Estoque[l][c]);
        }
    }

    //Total de itens armazenados em cada armazém;
    //Total de itens armazenados de cada produto em todos os armazéns juntos;
    //Produto e número do armazém que possui o maior número de itens estocados;
    //Produto e número do armazém que possui o menor número de itens estocados;

    Menor_Estoque = Maior_Estoque = Estoque[l-1][c-1];
    for(l = 0; l < TFA; l++)
    {
        Total_Armazem = 0;
        for(c = 0; c < TFP; c++)
            Total_Armazem += Estoque[l][c];
        if(Total_Armazem > Maior_Estoque)
        {
            Maior_Estoque = Total_Armazem;
            Armazem_Maior_Estoque = l+1;
        }
        if(Total_Armazem < Menor_Estoque)
        {
            Menor_Estoque = Total_Armazem;
            Armazem_Menor_Estoque = l+1;
        }
        printf("Estoque do armazem %d: [%d]", l+1, Total_Armazem);
    }
    printf("\nArmazem com maior Estoque: %d", Armazem_Maior_Estoque);
    printf("\nArmazem com menor Estoque: %d", Armazem_Menor_Estoque);
    
    Maior_Estoque = Menor_Estoque = Estoque[l][c];
    for(c = 0; c < TFP; c++)
    {
        Total_Produto = 0;
        for(l = 0; l < TFP; l++)
            Total_Produto += Estoque[l][c];
        if(Total_Produto > Maior_Estoque)
        {
            Maior_Estoque = Total_Produto;
            strcpy(Produto_Maior_Estoque, Produto[c]);
        }
        if(Total_Produto < Menor_Estoque)
        {
            Menor_Estoque = Total_Produto;
            strcpy(Produto_Menor_Estoque, Produto[c]);
        }    
        printf("Estoque do produto %s: [%d]", Produto[c], Total_Produto);
    }
    printf("\nProduto com maior Estoque: %s", Produto_Maior_Estoque);
    printf("\nProduto com menor Estoque: %s", Produto_Menor_Estoque);


    //Custo total de cada armazém
    for(l = 0; l < TFA; l++)
    {
        Custo_Armazem = 0;
        for(c = 0; c < TFP; c++)
            Custo_Armazem += Custo[c] * Estoque[l][c];
        printf("Custo do armazem %d: [%d]", l+1, Custo_Armazem);
    }

    //Produto que possui o menor custo

    //Produto que possui o maior custo

    return 0;
}