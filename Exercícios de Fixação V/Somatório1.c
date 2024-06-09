#include <stdio.h>
int main()
{
    int n = 1, d, soma = 0;
    while (n <= 10)
    {
        d = n * n;
        soma += n / d;
        if (n == 10)
            printf("%d/%d = %d\n", n, d, soma);
        else if (n == 1)
            printf("S = %d/%d + ", n, d);
        else
            printf("%d/%d + ", n, d);
        n++;
    }
    printf("Soma: %d\n", soma);
    return 0;
}