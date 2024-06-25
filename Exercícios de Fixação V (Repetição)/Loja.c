#include <stdio.h>
int main()
{
    int dia, diaMV, quant, maiorQ = 0;
    printf("Digite o dia do mes de marco:\n");
    scanf("%d", &dia);
    while (dia > 0 && dia <= 31)
    {
        printf("Qtd de pares vendidos:\n");
        scanf("%d", &quant);
        if (maiorQ == 0)
        {
            maiorQ = quant;
            diaMV = dia;
        }
        else 
            if (quant > maiorQ)
            {
                maiorQ = quant;
                diaMV = dia;
            }
        printf("Digite o dia do mes de marco:\n");
        scanf("%d", &dia);
    }
    printf("Dia da maior venda: %d/03\n", diaMV);
    printf("Qtd vendida nesse dia: %d\n", maiorQ);
    return 0;
}