#include <stdio.h>
#define tf 9
int main()
{
    int vet[tf], i, j, cont;

    for (i = 0; i < tf; i++)
    {
        printf("%d.o Valor\n", i+1);
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < tf; i++)
    {
        cont = 0;
        for (j = 1; j <= vet[i]; j++)
        {
            if (vet[i] % j == 0)
                cont++;
        }
        if (cont <= 2)
            printf("%d - [%d]\n", vet[i], i);
    }
    return 0;
}