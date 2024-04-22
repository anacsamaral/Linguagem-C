#include <stdio.h>
int main()
{
    int nf, cod, quant, maior_qt, cod_ma_q;
    float precoU, total, total_nf, total_vendas;
    total_vendas = 0; //item B
    printf("Nota fiscal: ");
    scanf("%d", &nf);
    while (nf > 0)
    {
        total_nf = 0;
        maior_qt = 0;
        printf("Cod. do produto: ");
        scanf("%d", &cod);
        while (cod > 0)
        {
            printf("Quantidade: ");
            scanf("%d", &quant);
            printf("Preco unitario: ");
            scanf("%f", &precoU);
            total = quant * precoU;     
            printf("Total: %.2f\n", total);
            total_nf += total;  //item A    
            if (quant > maior_qt)
            {
                maior_qt = quant;
                cod_ma_q = cod;
            }





































            printf("Cod. do produto: ");
            scanf("%d", &cod);
        }
        printf("Total Nota: %.2f\n", total_nf); //item A
        total_vendas += total_nf; //item B
        printf("O prod. com maior quant. vendida eh %d\n", cod_ma_q);




































        printf("Nota fiscal: ");
        scanf("%d", &nf);
    }
    printf("Total de todas as vendas: %.2f\n", total_vendas); //item B
}