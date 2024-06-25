#include <stdio.h>
int main()
{
    int quant, quantipo, cormqv, cormpu, cod, cont, codmt;
    float precou, tot, totp, tipomt,menorpu;
    char cor, cormv, cormp, maiort;
    quantipo = tipomt = maiort = tot = 0;
    printf("Cod da roupa:\n");
    scanf("%d", &cod);
    while(cod > 0)
    {
        cormqv = cormpu = menorpu = 0;
        quantipo++;
        cont = 0;
        printf("Cor:\n");
        scanf(" %c", &cor);
        while(cor != '@')
        {
            totp = 0;
            cont++;
            printf("Qtd vendida:\n");
            scanf("%d", &quant);
            printf("Preco unitario:\n");
            scanf("%f", &precou);
            totp = quant * precou;
            tot += totp;
            if (cont == 1)
            {
                cormqv = quant;
                cormv = cor;
                menorpu = precou;
                cormp = cor;
            }
            else
            {
                if (quant > cormqv)
                {
                    cormqv = quant;
                    cormv = cor;
                }
                if (precou < menorpu)
                {
                    menorpu = precou;
                    cormp = cor;
                }
            }
            printf("Total parcial: R$%.2f\n", totp);
            printf("Cor:\n");
            scanf(" %c", &cor);
        }
        printf("Cor que obteve a maior qtd vendida: %c\n", cormv);
        printf("A cor do menor preco unitario: %c\n", cormp);
        if (tot > maiort)
        {
            maiort = tot;
            codmt = cod;
        }
        printf("Cod da roupa:\n");
        scanf("%d", &cod);
    }
    printf("Sao %d tipos de roupas\n", quantipo);
    printf("Tipo de roupa que obteve um maior total: %d\n", codmt);
    
    return 0;
}