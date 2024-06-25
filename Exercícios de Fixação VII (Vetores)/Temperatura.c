#include <stdio.h>
#define tf 12
int main ()
{
    int i, mesMA, mesME;
    float vet[tf], maiorT, menorT;
    for (i = 0; i < tf; i++)
    {
        printf("Temperatura do %do. mes:\n", i+1);
        scanf("%f", &vet[i]);
    }
    for (i = 0; i < tf; i++)
    {
        if (i == 0)
        {
            maiorT = vet[i]; mesMA = i+1;
            menorT = vet[i]; mesME = i+1;
        }
        else
        {
            if (vet[i] > maiorT)
            {
                maiorT = vet[i];
                mesMA = i+1;
            }
            if (vet[i] < menorT)
            {
                menorT = vet[i];
                mesME = i+1;
            }
        }
    }
    printf("Maior temp: %.1f graus, mes: %d\n", maiorT, mesMA);
    printf("Menor temp: %.1f graus, mes: %d", menorT, mesME);
    return 0;
}