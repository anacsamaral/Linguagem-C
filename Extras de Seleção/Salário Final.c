#include <stdio.h>
int main()
{
    float sal_base, sal_final, reajuste1=0, reajuste2=0, reajuste3=0;
    int idade, ano_cont, dependentes, ano_atual, ano_casa;
    printf("Digite o salario base:\n");
    scanf("%f", &sal_base);
    printf("Digite a idade, o ano de contratacao, a quanto tempo esta na empresa, o numero de dependentes e o ano atual:\n");
    scanf("%d%d%d%d%d", &idade, &ano_cont, &ano_casa, &dependentes, &ano_atual);

    if (idade > 25)
        reajuste1 = 0.01 * sal_base * (idade - 25);
    if (ano_casa > 0)
        reajuste2 = 0.03 * sal_base * ano_casa;
    if (dependentes > 0)
        reajuste3 = 0.05 * sal_base * dependentes;
    
    sal_final = sal_base + reajuste1 + reajuste2 + reajuste3;
    printf("Seu salario final e: R$%.2f\n", sal_final);

    return 0;
}