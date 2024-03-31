#include <stdio.h>
int main()
{
    float salario, imposto, impostoA, impostoB;
    scanf("%f", &salario);

    if (salario == 3002.00)
    {
        impostoA = 1000.00 * 0.08;
        impostoB = 2.00 * 0.18;
        imposto = impostoA + impostoB;
    }
    if (salario >= 0.00 && salario <= 2000.00)
        printf("Isento");

    if (salario >= 2000.01 && salario <= 3000.00)
    {
        imposto = (float) salario * 0.08;
        printf("R$ %.2f", imposto);
    }
    if (salario >= 3000.01 && salario <= 4500.00)
    {
        imposto = (float) salario * 0.18;
        printf("R$ %.2f", imposto);
    }
    if (salario >= 0.00 && salario <= 2000.00)
    {
        imposto = (float) salario * 0.28;
        printf("R$ %.2f", imposto);
    }

    return 0;
}