#include <stdio.h>
int main()
{
    float deposito, taxa_juros, rendimento, valor_rendimento;
    printf("Digite o valor do depósito:\n");
    scanf("%f", &deposito);
    rendimento = deposito * taxa_juros/100;
    valor_rendimento = deposito + rendimento;
    printf("O valor do depósito é: %f", deposito);
    printf("O valor do rendimento é: %f", rendimento);
    printf("O valor total é: %f", valor_rendimento);

    return 0;
}