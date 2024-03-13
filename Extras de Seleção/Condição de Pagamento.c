#include <stdio.h>
int main()
{
    float valor_venda, desconto_juro, pagamento_total;
    int codigo;
    printf("Digite o valor do produto:\n");
    scanf("%f", &valor_venda);
    printf("Escolha a opção de pagamento desejada, selecionando o número respectivo:\n 1 - A vista em dinheiro ou cheque, recebe 10 porcento de desconto\n 2 - A vista no cartao de debito, recebe 5 porcento de desconto\n 3 - Em 2 vezes, preço normal de venda sem juros\n 4 - Em 3 vezes, preço normal de venda mais juros de 10 porcento\n");
    scanf("%d", &codigo);

    if (codigo == 1)
    {
        pagamento_total = valor_venda - valor_venda * 10/100;
        desconto_juro = valor_venda * 10/100;
        printf("O valor do desconto e de: R$ %.0f\n", desconto_juro);
        printf("O valor a ser pago e de: R$ %.2f\n", pagamento_total);
    }
    else
    {
        if (codigo == 2)
        {
            pagamento_total = valor_venda - valor_venda * 5/100;
            desconto_juro = valor_venda * 5/100;
            printf("O valor do desconto e de: R$ %.2f\n", desconto_juro);
            printf("O valor a ser pago e de: R$ %.2f\n", pagamento_total);
        }
        else
        {
            if (codigo == 3)
            {
                pagamento_total = valor_venda;
                desconto_juro = 0;
                printf("O valor do juro e desconto e de: R$ %.2f\n", desconto_juro);
                printf("O valor a ser pago e de: R$ %.2f\n", pagamento_total);
            }
            else
            {
                if (codigo == 4)
                {
                    pagamento_total = valor_venda + valor_venda * 10/100;
                    desconto_juro = valor_venda * 10/100;
                    printf("O valor do juro e de: R$ %.2f\n", desconto_juro);
                    printf("O valor a ser pago e de: R$ %.2f\n", pagamento_total);
                }
                else
                    printf("Opção Inválida!\n");
            }
        }
    }
            
}   
