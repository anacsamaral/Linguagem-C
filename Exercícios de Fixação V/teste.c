#include <stdio.h>
#include <math.h>

int main()
{
    int n, expo;
    long long int potencia, soma;
    printf("Valor de X:\n");
    scanf("%d", &n);

    while (n > 0)
    {
        expo = 0;
        soma = 0;

        for (int d = 50; d >= 1; d--)
        {
            expo++;
            potencia = pow(n, expo);
            soma += potencia / d;

            if (expo == 1)
                printf("S = %lld/%d + ", potencia, d);
            else if (expo == 50)
                printf("%lld/%d = %lld\n", potencia, d, soma);
            else
                printf("%lld/%d + ", potencia, d);
        }

        printf("Soma = %lld\n", soma);
        printf("\n");
        printf("Valor de X:\n");
        scanf("%d", &n);
    }

    return 0;
}
