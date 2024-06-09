#include <stdio.h>
int main()
{
    int quant, acertos;
    float porc;
    printf("Quantidade de perguntas:\n");
    scanf("%d", &quant);
    while (quant > 0)
    {
        printf("Quantidade de acertos:\n");
        scanf("%d", &acertos);
        porc = (float) acertos / quant * 100;

        if (porc >= 90.0 && porc <= 100.0)
            printf("Parabens, voce teve otimos resultados\n");
        else if (porc >= 70.0 && porc <= 89.9)
            printf("Voce foi muito bem, melhore sempre\n");
        else if (porc >= 55.0 && porc <= 69.9)
            printf("Voce foi bem, mas procure melhorar\n");
        else if (porc >= 40.0 && porc <= 54.9)
            printf("Voce nao foi muito bem, procure estudar\n");
        else if (porc >= 20.0 && porc <= 39.9)
            printf("Voce nao foi nada bem, estude muito\n");
        else
            printf("Voce foi pessimo, estude, estude e estude muito!!!\n");
        
        printf("Quantidade de perguntas:\n");
        scanf("%d", &quant);
    }
    return 0;
}