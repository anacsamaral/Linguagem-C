#include <stdio.h>
int main()
{
    float preco_compra, preco_venda, lucro, lucro_percentual;
    printf("Digite o preco de compra:\n");
    scanf("%f", &preco_compra);
    printf("Digite o preco de venda:\n");
    scanf("%f", &preco_venda);
    lucro = preco_venda - preco_compra;
    lucro_percentual = lucro/preco_venda * 100;
    printf("O lucro percentual e de %.2f porcento", lucro_percentual);
    return 0;
}