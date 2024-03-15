#include <stdio.h>
int main()
{
    int idade, ano_cont, dependentes, ano_atual, anos_casa;
    float sal_base, sal_final, reajuste1, reajuste2, reajuste3;
    printf("Digite o salário base:\n");
    scanf("%f", &sal_base);
    printf("Digite a idade, o ano de contratação, a idade do casamento, o número de dependentes e o ano atual:\n");
    scanf("%d%d%d%d%d", &idade, &ano_cont, &anos_casa, &dependentes, &ano_atual);

    if (idade > 25)
        reajuste1 = 1/100 * sal_base * idade - 25;
    if (anos_casa > 0)
        reajuste2 = 3/100 * sal_base * anos_casa;
    if (dependentes > 0)
        reajuste3 = 5/100 * sal_base * dependentes;
    
    sal_final = sal_base + reajuste1 + reajuste2 + reajuste3;
    printf("Seu salário final é: R$%.2f", &sal_final);
}
