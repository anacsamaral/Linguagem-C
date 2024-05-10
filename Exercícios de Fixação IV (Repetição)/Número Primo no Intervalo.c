#include <stdio.h>
int main ()
{
    int n1, n2, den, cont;
    printf("Informe o valor inicial:\n");
    scanf("%d", &n1);
    printf("Informe o valor final:\n");
    scanf("%d", &n2);
    while (n1 <= n2)
    {
        den = 2; cont = 0;
        while (den <= n1/2 && cont == 0)
        {
            if (n1 % den == 0)
                cont ++;
            den++;
        }
        if (cont == 0)
            printf("O numero %d eh primo\n", n1);
        n1++;
    }
    return 0;
}