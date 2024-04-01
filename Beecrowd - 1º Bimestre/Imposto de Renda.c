#include <stdio.h>
int main()
{
    float salario, imposto = 0;
    scanf("%f", &salario);

    if (salario > 4500.00)
    {
        imposto += (salario - 4500.00) * 0.28;
        salario -= (salario - 4500.00);
    }
    if (salario > 3000.00) 
    {
        imposto += (salario - 3000.00) * 0.18;
        salario -= (salario - 3000.00);
    }
    if (salario > 2000.00 )
        imposto += (salario - 2000.00) * 0.08;
    
    if (imposto == 0.00)
        printf("Isento\n");
    else
        printf("R$ %.2f\n", imposto);
    return 0;
}