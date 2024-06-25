#include <stdio.h>
int main()
{
    int n, d, soma = 0;
    for (n = 37, d = 1; n >= 1 && d <= 37; n--, d++)
    {
        soma += (n * n + 1 / d);
        if (d == 1)
            printf("S = (%dx%d)/%d + ", n, n + 1, d);
        else if (d == 37)
            printf("(%dx%d)/%d = %d\n", n, n+ 1, d, soma);
        else
            printf("(%dx%d)/%d + ", n, n + 1, d);
    }
    printf("\n");
    printf("S = %d\n", soma);
    return 0;
}