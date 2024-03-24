#include <stdio.h>
int main()
{
    int ano_nascimento, ano_atual, idade, idade_semana;
    printf("Digite o ano atual:\n");
    scanf("%d", &ano_atual);
    printf("Digite o ano de nascimento:\n");
    scanf("%d", &ano_nascimento);
    idade = ano_atual - ano_nascimento;
    idade_semana = idade * 52;
    printf("Sua idade em anos: %d\n", idade);
    printf("Sua idade em semanas: %d\n", idade_semana);
}