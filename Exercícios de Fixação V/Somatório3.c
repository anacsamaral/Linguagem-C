#include <stdio.h>
#include <math.h>
int main()
{
    int d, n, soma = 0, expo = 1;
    printf("Valor de X:\n");
    scanf("%d", &n);
    while (n > 0)
    {
        d = 50;
        while (d >= 1)
        {
            soma += (pow(n, expo)) / d;
            if (expo == 1)
                printf("S = %d/%d + ", n, d);
            else if (expo == 50)
                printf("%d/%d = %d\n", n, d, soma);
            else
                printf("%d/%d + ", n, d);
            d--;
            expo++;
        }
        printf("Soma = %d\n", soma);
        printf("Valor de X:\n");
        scanf("%d", &n);
    }
    return 0;
}