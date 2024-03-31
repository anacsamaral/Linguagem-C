#include <stdio.h>
int main()
{
    int num_teste = 0, cont = 0, quantCobaias = 0, quantC = 0, quantR = 0, quantS = 0, totCobaias = 0;
    float percentC, percentR, percentS;
    char especie;
    scanf("%d", &num_teste);
    while (cont < num_teste)
    {
        scanf("%d %c", &quantCobaias, &especie);
        cont++;

        if (quantCobaias > 0)
        {
            if (especie == 'C')
                quantC += quantCobaias;
            if (especie == 'R')
                quantR += quantCobaias;
            if (especie == 'S')
                quantS += quantCobaias;
        }
    }
        totCobaias = quantC + quantR + quantS;
        percentC = (float) quantC/totCobaias * 100;
        percentR = (float) quantR/totCobaias * 100;
        percentS = (float) quantS/totCobaias * 100;

        printf("Total: %d cobaias\n", totCobaias);
        printf("Total de coelhos: %d\n", quantC);
        printf("Total de ratos: %d\n", quantR);
        printf("Total de sapos: %d\n", quantS);
        printf("Percentual de coelhos: %.2f%%\n", percentC);
        printf("Percentual de ratos: %.2f%%\n", percentR);
        printf("Percentual de sapos: %.2f%%\n", percentS);

    }
    return 0;
        
}