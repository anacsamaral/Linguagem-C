#include <stdio.h>
int main()
{
    int num, i, soma;
    printf("Digite o numero (zero para sair):\n");
    scanf("%d", &num);
    while (num > 0)
    {
        soma = 0;
    
        for (i = 1; i <= num / 2; i++)  // Verifica se há divisores até num/2
        {
            if (num % i == 0)
                soma += i;
        }
        if (soma == num)
            printf("Numero perfeito\n");
        else
            printf("Numero nao perfeito\n");

        printf("Digite o numero (zero para sair):\n");
        scanf("%d", &num);
    }
    return 0;
}
