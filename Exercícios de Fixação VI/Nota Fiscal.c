#include <stdio.h>
int main()
{
    int numNF, cod, quant, codM, menorQT, maiorQV = 0, prodMQV, codME, prodMP, codPM, codA = 0, cont, notaMV;
    float totTV = 0, totVC, precoU, menorPC, total, valor_notaMV;
    printf("Nota fiscal:\n");
    scanf("%d", &numNF);
    while (numNF > 0)
    {
        cont = 0; totVC = 0;
        printf("Código do produto:\n");
        scanf("%d", &cod);
        while(cod > 0)
        {
            printf("Quantidade:\n");
            scanf("%d", &quant);
            printf("Preço unitário:\n");
            scanf("%f", &precoU);
            total = quant * precoU;
            totVC += total;
            
            if (quant > maiorQV)
            {
                maiorQV = quant;
                codM = cod;
            }
            cont++;
            if (cont == 1)
            {
                menorQT = quant;
                prodMP = precoU;
                menorPC = precoU;
                prodMQV = quant;
                codME = cod;
            }
            else
            {
                if (quant < menorQT)
                    menorQT = quant;
                if (precoU < menorPC)
                    menorPC = precoU;
                if (quant < prodMQV)
                    codME = cod;
                if (precoU > prodMP)
                {
                    prodMP = precoU;
                    codPM = cod;
                }
            }
            printf("Código do produto:\n");
            scanf("%d", &cod);
        }
        printf("Total de vendas da nota: %.2f\n", totVC);
        printf("O produto %d foi o mais vendido\n", codM);
        printf("O produto %d teve o menor preço\n", codME);
        codA++; 
        totTV += totVC;
        if (codA == 1)
        {   
            valor_notaMV = totVC;
            notaMV = numNF;
        }
        else
        {
            if (totVC < notaMV)
            {
                valor_notaMV = totVC;
                notaMV = numNF;
            }
        }
        printf("Nota fiscal:\n");
        scanf("%d", &numNF);
    }
    printf("Total de todas as vendas:R$%.2f\n", totTV);
    printf("O produto %d foi o menos vendido\n", prodMQV);
    printf("O produto %d foi o mais caro de todas as notas\n", codPM);
    printf("A nota %d foi a que teve menor venda\n", notaMV);

    return 0;
}