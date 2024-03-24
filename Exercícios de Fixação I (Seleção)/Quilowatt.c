#include <stdio.h>
int main()
{
    float sal_minimo, quant_quilowatt, valor_quilowatt, valor_pago, desconto, novo_valor;
    printf("Digite o valor do salario minimo:\n");
    scanf("%f", &sal_minimo);
    printf("Digite a quantidade de quilowatt:\n");
    scanf("%f", &quant_quilowatt);
    valor_quilowatt = sal_minimo * 1/5;
    valor_pago = valor_quilowatt * quant_quilowatt;
    desconto = valor_pago * 15/100;
    novo_valor = valor_pago - desconto;
    printf("Cada quilowatt custa: R$%.2f\n", valor_quilowatt);
    printf("O valor a ser pago: R$%.2f\n", valor_pago);
    printf("O valor a ser pago com desconto: R$%.2f\n", novo_valor);

    return 0;
}