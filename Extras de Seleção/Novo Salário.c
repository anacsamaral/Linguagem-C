#include <stdio.h>
int main ()
{
    int idade, ano_cont, matricula, ano_atual, anos_casa;
    float sal_b, sal_f, reaj_f, reaj_m;
    char sexo;
    printf("Digite a idade do funcionario:\n");
    scanf("%d", &idade);
    printf("Digite o sexo da pessoa:\n");
    scanf(" %c", &sexo);
    printf("Digite o salario base:\n");
    scanf(" %f", &sal_b);
    printf("Digite o ano de contratacao e ano atual:\n");
    scanf(" %d%d", &ano_cont, &ano_atual);
    printf("Digite a matricula:\n");
    scanf("%d", &matricula);

    anos_casa = ano_atual - ano_cont;

    if (idade >= 18 && idade <= 39)
    {
        if (sexo == 'f' || sexo == 'F')
        {
            reaj_f = sal_b * 0.08;
            sal_f = sal_b + reaj_f;
            if (anos_casa <= 10)
                sal_f -= 11.00;
            else
                sal_f += 16.00;
            
        }
        else if (sexo == 'm' || sexo == 'M')
        {
            reaj_m = sal_b * 0.10;
            sal_f = sal_b + reaj_m;
            if (anos_casa <= 10)
                sal_f -= 10.00;
            else
                sal_f += 17.00;
        }
        else 
            printf("Informação 'sexo' inválida.\n");
        
        printf("Idade: %d\n Sexo: %c\n, Salario Base: %.2f\n Ano de contratação: %d\n Matrícula: %d\n, Salário Final: %.2f\n", idade, sexo, sal_b, ano_cont, matricula, sal_f);
    }
    else if (idade >= 40 && idade <= 69)
    {
        if (sexo == 'f' || sexo == 'F')
        {
            reaj_f = sal_b * 0.10;
            sal_f = sal_b + reaj_f;
            if (anos_casa <= 10)
                sal_f -= 7.00;
            else
                sal_f += 14.00;
        }
        else if (sexo == 'm' || sexo == 'M')
        {
            reaj_m = sal_b * 0.08;
            sal_f = sal_b + reaj_m;
            if (anos_casa <= 10)
                sal_f -= 5.00;
            else
                sal_f += 15.00;
        }
        else 
            printf("Informação 'sexo' inválida.\n");
        
        printf("Idade: %d\n Sexo: %c\n, Salario Base: %.2f\n Ano de contratação: %d\n Matrícula: %d\n, Salário Final: %.2f\n", idade, sexo, sal_b, ano_cont, matricula, sal_f);
    }
    else if (idade >= 70 && idade <= 99)
    {
        if (sexo == 'f' || sexo == 'F')
        {
            reaj_f = sal_b * 0.17;
            sal_f = sal_b + reaj_f;
            if (anos_casa <= 10)
                sal_f -= 17.00;
            else
                sal_f += 12.00;
        }
        else if (sexo == 'm' || sexo == 'M')
        {
            reaj_m = sal_b * 0.15;
            sal_f = sal_b + reaj_m;
            if (anos_casa <= 10)
                sal_f -= 15.00;
            else
                sal_f += 13.00;
        }
        else 
            printf("Informação 'sexo' inválida.\n");
        
        printf("Idade: %d\n Sexo: %c\n, Salario Base: %.2f\n Ano de contratação: %d\n Matrícula: %d\n, Salário Final: %.2f\n", idade, sexo, sal_b, ano_cont, matricula, sal_f);
    }
    else 
        printf("Idade inválida.\n");

    return 0;
}