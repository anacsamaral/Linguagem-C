#include <stdio.h>
#define tf 32

int main()
{
    int n1, vet1[tf], i, pos;
    printf("Digite dois numeros. 0 - SAIR\n");
    while (scanf ("%d", &n1) != 0)
    {
        for (i = 0; i < tf-1; i++)
        {
            for (i = 0; i < tf-1 && )
            if (n1 % 2^(tf-1) == 0)
                vet1[i] = 0;
            else
                vet1[i] = 1;
        }
        for (i = 0; i < tf; i++)
            printf("%d ", vet1[i]);
    }
    printf("num invalido\n");
}