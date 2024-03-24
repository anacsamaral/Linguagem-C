#include <stdio.h>
int main()
{
    float salario, impostoR, salarioL;
    printf("Digite seu salário:\n");
    scanf("%f", &salario);
    impostoR = salario * 5/100;
    salarioL = salario - impostoR;
    printf("O valor do Imposto de Renda é: %.2f\n", impostoR);
    printf("O valor do salário líquido é: %.2f\n", salarioL);

    return 0;
}