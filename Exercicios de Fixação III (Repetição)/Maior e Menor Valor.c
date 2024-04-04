#include <stdio.h>
#include <limits.h>
int main()
{
    int num, maior = INT_MIN, menor = INT_MAX;
    printf("Digite varios numeros. Para encerrar, digite 0.\n");
    scanf("%d", &num);
    while (num != 0)
    {
        if (num < 0)
            printf("Não considerado!");
        else
        {
            if (num > maior)
                maior = num;
            if (num < menor)
                menor = num;  
        }
        printf("Digite outro numero (0 para encerrar)\n");
        scanf(" %d", &num);  
    }
    printf("O numero maior e %d\n", maior);
    printf("O numero menor e %d\n", menor);
    return 0;
}