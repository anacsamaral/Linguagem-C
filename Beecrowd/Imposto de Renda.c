#include <stdio.h>
int main()
{
    float salario, imposto, isento, diferenca;
    scanf("%f", &salario);

    if (salario >= 0.00 && salario <= 2000.00)
        printf("Isento");

    else if (salario >= 2000.01 && salario <= 3000.00)
    {
        diferenca = salario - 2000.00;
        isento = salario - diferenca;
        impostoA = 
    
    }
    else if (salario >= 3000.01 && salario <= 4500.00)
    {
        salario = salario - 2000.00;
        printf("R$ %.2f", imposto);
    }
    else
    {
        salario = salario - 2000.00;
        imposto = salario * 0.28;
        printf("R$ %.2f", imposto);
    }

    return 0;
}