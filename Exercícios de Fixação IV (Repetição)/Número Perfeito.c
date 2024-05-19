#include <stdio.h>

int main()
{
    int num, i, soma;
    while (1)  // loop infinito
    {
        soma = 0;
        printf("Digite o numero (digite um numero negativo para sair):\n");
        scanf("%d", &num);

        if (num <= 0) // termina a condição
            break;
    
        for (i = 1; i <= num / 2; i++) { // Verifica se há divisores até num/2
            if (num % i == 0)
                soma += i;
        if (soma == num)
            printf("Numero perfeito\n");
        else
            printf("Numero nao perfeito\n");
    }
    return 0;
}
