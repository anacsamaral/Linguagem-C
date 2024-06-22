#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    float p, m, juro1, juro2, juroA, juroB;
    printf("Valor da aplicacao:\n");
    scanf("%f", &p);
    while (p > 0)
    {
        for (i = 1; i <= 12; i++)
        {
            m = p * pow(1 + 3.5/100, i); //Cálculo do montante do mês atual
            if (i == 1)
            {
                juro1 = m - p;
                juroA = juro1 - juroB;
                juroB = juro1;
            }
            else
            {
                juro1 = m - p;
                juro2 = p * pow(1 + 3.5/100, i - 1) - p; //Cálculo do juro do mês anterior
                juroA = juro1 - juroB;
                juroB = juro1;
            }
            printf("Mes %d:\n", i);
            printf("Juros ganho em relacao ao mes anterior: %.2f\n", juroA);
            printf("Juros ganho em relacao a aplicacao inicial: %.2f\n", juroB);
            printf("=========================================================\n");
            printf("\n");
        }
        printf("Valor da aplicacao:\n");
        scanf("%f", &p);
    }
    return 0;
}