#include <stdio.h>
int main()
{
    int n, i, cont;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    while (n > 0)
    {
        cont = 0;
        for (i = 1; i <= n; i++)
            if (n % i == 0)
                cont++;
        if (cont <= 2)
            printf("Eh primo\n");
        else
            printf("Nao eh primo\n");

        printf("Digite um numero:\n");
        scanf("%d", &n);
    }
    return 0;
}