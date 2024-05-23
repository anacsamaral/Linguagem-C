#include <stdio.h>
int main()
{
    int nc, quantk, cod, cont = 0, maiorc = 0, menorc = 0, total1 = 0, total2 = 0, total3 = 0;
    float preco, total, media;
    printf("Num. do consumidor:\n");
    scanf("%d", &nc);
    while (nc > 0)
    {
        cont++;
        printf("Preço do Kwh:\n");
        scanf("%f", &preco);
        printf("Qtd. de Kwh consumido no mes:\n");
        scanf("%d", &quantk);
        printf("1 - Residencial\n2 - Comercial\n3 - Industrial\n");
        scanf("%d", &cod);
        total = quantk * preco;

        switch (cod)
        {
        case 1:
            total1 += quantk;
            break;
        case 2:
            total2 += quantk;
            break;
        case 3:
            total3 += quantk;
            break;
        default:
            break;
        }
        if (cont == 1)
        {
            maiorc = quantk;
            menorc =  quantk;
        }
        else
        {
            if (quantk > maiorc)
                maiorc = quantk;
            if (quantk < menorc)
                menorc = quantk;
        }
        printf("Total a pagar: %.2f\n", total);
        printf("Num. do consumidor:\n");
        scanf("%d", &nc);
    }
    media = (float) total1+total2+total3/cont;
    printf("Maior consumo verificado: %d\n", maiorc);
    printf("Menor consumo verificado: %d\n", menorc);
    printf("Total de consumo:\nResidencial: %d\nComercial: %d\nIndustrial: %d\n", total1, total2, total3);
    printf("Média geral de consumo: %.2f\n", media);

    return 0;
}