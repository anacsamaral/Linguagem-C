#include <stdio.h>
int main()
{
    int i, j, num, soma;
    for (i = 0; i <= 100; i++)
    {
        printf("Digite o numero:\n");
        scanf("%d", &num);
        soma = 0;
        for (j = 1; num != soma; j++)
        {
            if (num % j == 0)
                soma += j;
        }
        if (soma == num)
            printf("Numero perfeito\n");
    }
    return 0;
}