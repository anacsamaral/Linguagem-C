#include <stdio.h>
#include <math.h>
int main()
{
    int d, n, expo = 0, potencia, soma = 0;
    printf("Valor de X:\n");
    scanf("%d", &n);
    while (n > 0)
    {
        d = 50;
        while (d >= 1)
        {
            expo++;
            potencia = pow(n, expo);
            if (expo == 1)
                printf("S = %d/%d + ", potencia, d);
            else if (expo == 50)
                printf("%d/%d = %d\n", potencia, d, soma);
            else
                printf("%d/%d + ", potencia, d);
            soma += potencia / d;
            d--;
        }
        printf("Soma = %.2f\n", soma);
        printf("\n");
        printf("Valor de X:\n");
        scanf("%d", &n);
    }
    return 0;
}