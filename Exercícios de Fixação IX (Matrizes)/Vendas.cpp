#include <stdio.h>
#include <string.h>

#define TFV 5
#define TFS 4

int main()
{
    int MatVendas[TFS][TFV], l, c, TotVendasV, TotVendasS, TotVendasM = 0;
    char Vendedores[TFV][20];

    for(c = 0; c < TFV; c++)
    {
        printf("\n[%do.] Vendedor: ", c + 1); fflush(stdin);
        scanf("%s", &Vendedores[c]);

        for(l = 0; l < TFS; l++)
        {
            printf("\nVendas na %da. Semana: ", l + 1);
            scanf("%d", &MatVendas[l][c]);
        }
    }

    for(c = 0; c < TFV; c++)
    {
        TotVendasV = 0;
        for(l = 0; l < TFS; l++)
            TotVendasV += MatVendas[l][c];

        printf("\nO vendedor %s fez %d vendas no mes.", Vendedores[c], TotVendasV);
    }

    for(l = 0; l < TFS; l++)
    {
        TotVendasS = 0;
        for(c = 0; c < TFV; c++)
            TotVendasS += MatVendas[l][c];

        printf("\nA %da. semana teve %d vendas", l + 1, TotVendasS);
        TotVendasM += TotVendasS;
    }

    printf("\nNo mes, houveram %d vendas no total.", TotVendasM);
    return 0;
}