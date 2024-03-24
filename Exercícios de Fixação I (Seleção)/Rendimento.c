#include <stdio.h>
int main()
{
    float deposito, taxa_juros, rendimento, valor_rendimento;
    printf("Digite o valor do depósito:\n");
    scanf("%f", &deposito);
    printf("Digite o valor da taxa de juros:\n");
    scanf("%f", &taxa_juros);
    rendimento = deposito * (taxa_juros/100);
    valor_rendimento = deposito + rendimento;
    printf("O valor do depósito é: %.2f\n", deposito);
    printf("O valor do rendimento é: %.2f\n", rendimento);
    printf("O valor total com rendimento é: %.2f\n", valor_rendimento);

    return 0;
}