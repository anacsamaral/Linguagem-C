#include <stdio.h>
int main()
{
    float salario, salarioR, reajus;
    printf("Digite o salário:\n");
    scanf("%f", &salario);
    if (salario <= 300)
    {
        reajus = salario * 0.50;
        salarioR = salario + reajus;
    }
    else
    {
        reajus = salario * 0.30;
        salarioR = salario + reajus;
    }
    printf("Seu novo salário é de R$%.2f", salarioR);

    return 0;
}