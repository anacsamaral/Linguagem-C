#include <stdio.h>
int main()
{
    int num1, num2, soma, sub, mult; float div;
    printf("Digite os dois numeros:\n");
    scanf("%d%d", &num1, &num2);
    if (num1 % 2 == 0 && num2 % 2 == 0)
    {
        printf("Os dois são pares.\n");
        soma = num1 + num2;
        printf("A soma é: %d\n", soma);
    }
    if (num1 % 2 == 1 && num2 % 2 == 1)
    {
        printf("Os dois são ímpares.\n");
        sub = num1 - num2;
        printf("A subtração é: %d\n", sub);
    }
    if (num1 % 2 == 0 && num2 % 2 == 1)
    {
        printf("O primeiro é par e o outro é impar.\n");
        mult = num1 * num2;
        printf("A multiplicação é: %d\n", mult);
    }
    if (num1 % 2 == 1 && num2 % 2 == 0)
    {
        printf("O primeiro é ímapr e o outro é par.\n");
        div = (float) num1 / num2;
        printf("A divisão é: %.1f\n", div);
    }
    return 0;
}