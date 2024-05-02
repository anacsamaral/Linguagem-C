#include <stdio.h>
int main()
{
    int he, hf, extrah, extraf;
    float premio, H;
    printf("Horas extras em minutos:\n");
    scanf("%d", &he);
    while (he > 0)
    {
        printf("Horas faltas em minutos:\n");
        scanf("%d", &hf);
        H = he - (2 / 3 * hf);
        extrah = he / 60;
        extraf = hf / 60;

        if (H > 2400)
            premio = 500.00;
        else if (H >= 1800 && H < 2400)
            premio = 400.00;
        else if (H >= 1200 && H < 1800)
            premio = 300.00;
        else if (H >= 600 && H < 1200)
            premio = 200.00;
        else
            premio = 100.00;

        printf("Horas extras: %d\n", extrah);
        printf("Horas faltas: %d\n", extraf);
        printf("Premio: %.2f\n", premio);
        printf("Digite outra hora extra:\n");
        scanf("%d", &he);
    }
    return 0;
}