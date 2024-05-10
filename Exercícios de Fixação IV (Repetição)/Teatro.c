#include <stdio.h>
int main()
{
    int quant = 120, quantM;
    float preco = 5.00, lucro, maior = 0, precoM;
    printf("Preco\t Quantidade\t Despesas\t Lucro\n");
    while (preco >= 1.00)
    {
        lucro = preco * quant - 200;
        printf("%.2f\t %d\t\t 200.00\t\t %.2f\n", preco, quant, lucro);
        if (lucro > maior)
        {
            maior = lucro;
            precoM = preco;
            quantM = quant;
        }
        preco -= 0.50;
        quant += 26;
    }

    printf("\nLucro maximo = R$%.2f\nPreco do ingresso = %.2f\nQuantidade = %d", maior, precoM, quantM);
    return 0;
}