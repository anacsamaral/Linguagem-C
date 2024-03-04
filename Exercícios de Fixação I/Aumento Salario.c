#include <stdio.h>
int main()
{
    float salario, reajuste, salarioR;
    printf("Digite o salario:\n");
    scanf("%f", &salario);
    reajuste = salario * 25/100;
    salarioR = salario + reajuste;
    printf("Seu salario é: %.2f\n", salario);
    printf("O reajuste foi de: %.2f\n", reajuste);
    printf("Seu novo salario é: %.2f\n", salarioR);

    return 0;
}