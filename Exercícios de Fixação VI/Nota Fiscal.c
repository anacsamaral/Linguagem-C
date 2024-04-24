#include <stdio.h>
int main()
{
    int nf, cod, quant, maior_qt, cod_ma_q, cod_ma_p, cont, cod_me_q, cod_menor_p, notaMT, menor_qt, contNF;
    float precoU, total, total_nf, total_vendas, menor_preco, maior_preco, menor_totnf;
    total_vendas = 0, maior_preco = 0, contNF = 0; // item B
    printf("Nota fiscal: ");
    scanf("%d", &nf);
    while (nf > 0)
    {
        contNF++;
        total_nf = 0, maior_qt = 0;
        printf("Cod. do produto: ");
        scanf("%d", &cod);
        cont = 0;
        while (cod > 0)
        {
            cont++;
            printf("Quantidade: ");
            scanf("%d", &quant);
            printf("Preco unitario: ");
            scanf("%f", &precoU);
            total = quant * precoU;
            printf("Total: %.2f\n", total);
            total_nf += total; // item A
            if (cont == 1)
            {
                menor_qt = quant;
                cod_me_q = cod;
                menor_preco = precoU;
                cod_menor_p = cod;
            }
            else
            {
                if(precoU <  menor_preco)
                {
                    menor_preco = precoU;
                    cod_menor_p = cod;
                }
                if (quant < menor_qt)
                {
                    menor_qt = quant;
                    cod_me_q = cod;
                }
            }
            if (quant > maior_qt)
            {
                maior_qt = quant;
                cod_ma_q = cod;
            }
            if (precoU > maior_preco)
            {
                maior_preco = precoU;
                cod_ma_p = cod;
            }
            printf("Cod. do produto: ");
            scanf("%d", &cod);
        }
        printf("Total Nota: %.2f\n", total_nf); // item A
        total_vendas += total_nf;               // item B
        printf("O prod. com maior quant. vendida foi o %d\n", cod_ma_q);
        if (contNF == 1)
        {
            menor_totnf = total_nf;
            notaMT = nf;
        }
        else
        {
            if (total_nf < menor_totnf)
            {
                menor_totnf = total_nf;
                notaMT = nf;
            }
        }
        printf("O prod. c/ o menor preço da nota foi o %d\n", cod_menor_p);
        printf("Nota fiscal:\n");
        scanf("%d", &nf);
    }
    printf("Total de todas as vendas: %.2f\n", total_vendas); // item B
    printf("O prod. c/ a menor qtd. de vendas foi o %d\n", cod_me_q);
    printf("O prod. c/ o maior preço das notas foi o %d\n", cod_ma_p);
    printf("A nota fiscal que obteve a menor venda foi a %d\n", notaMT);

    return 0;
}