#include <stdio.h>
int main()
{
    float hora_trabalhada, hora_extra, salario_hora_trabalhada, salario_hora_extra;
    printf("Digite a quantidade de horas que trabalhou na semana:\n");
    scanf("%f", &hora_trabalhada);

    if (hora_trabalhada == 44)
    {
	    salario_hora_trabalhada = 20 * 44;
        printf("Voce trabalhou 44 horas, e seu salario � de: R$%.2f",salario_hora_trabalhada);
	}
	else
	{
        hora_extra = hora_trabalhada - 44;
        salario_hora_extra = hora_extra * 10 + 44 * 20;
        printf("Voce trabalhou mais de 44 horas, entao seu salário é de: R$%.2f", salario_hora_extra);
	}
    return 0;
}
