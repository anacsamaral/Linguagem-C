#include <stdio.h>

#define PRODUTOS 5
#define LOJAS 3

int main() {
    float vendasJunho[PRODUTOS][LOJAS], vendasJulho[PRODUTOS][LOJAS], vendasAgosto[PRODUTOS][LOJAS], totalProdutoLoja[PRODUTOS][LOJAS] = {0}, totalProduto[PRODUTOS] = {0}, totalLoja[LOJAS] = {0}, totalTrimestre[PRODUTOS][LOJAS];

    // Entrada de dados
    printf("Digite os valores das vendas de Junho:\n");
    for (int i = 0; i < PRODUTOS; i++) {
        for (int j = 0; j < LOJAS; j++) {
            printf("Produto %d, Loja %d: ", i + 1, j + 1);
            scanf("%f", &vendasJunho[i][j]);
        }
    }

    printf("\nDigite os valores das vendas de Julho:\n");
    for (int i = 0; i < PRODUTOS; i++) {
        for (int j = 0; j < LOJAS; j++) {
            printf("Produto %d, Loja %d: ", i + 1, j + 1);
            scanf("%f", &vendasJulho[i][j]);
        }
    }

    printf("\nDigite os valores das vendas de Agosto:\n");
    for (int i = 0; i < PRODUTOS; i++) {
        for (int j = 0; j < LOJAS; j++) {
            printf("Produto %d, Loja %d: ", i + 1, j + 1);
            scanf("%f", &vendasAgosto[i][j]);
        }
    }

    // Cálculo do total vendido de cada produto em cada loja no trimestre
    for (int i = 0; i < PRODUTOS; i++) {
        for (int j = 0; j < LOJAS; j++) {
            totalProdutoLoja[i][j] = vendasJunho[i][j] + vendasJulho[i][j] + vendasAgosto[i][j];
        }
    }

    // Cálculo do total vendido de cada produto em todas as lojas no trimestre
    for (int i = 0; i < PRODUTOS; i++) {
        for (int j = 0; j < LOJAS; j++) {
            totalProduto[i] += totalProdutoLoja[i][j];
        }
    }

    // Cálculo do total vendido em cada loja no trimestre
    for (int j = 0; j < LOJAS; j++) {
        for (int i = 0; i < PRODUTOS; i++) {
            totalLoja[j] += totalProdutoLoja[i][j];
        }
    }

    // Exibição dos resultados
    printf("\nTotal vendido de cada produto em cada loja no trimestre:\n");
    for (int i = 0; i < PRODUTOS; i++) {
        for (int j = 0; j < LOJAS; j++) {
            printf("Produto %d, Loja %d: %.2f\n", i + 1, j + 1, totalProdutoLoja[i][j]);
        }
    }

    printf("\nTotal vendido de cada produto em todas as lojas no trimestre:\n");
    for (int i = 0; i < PRODUTOS; i++) {
        printf("Produto %d: %.2f\n", i + 1, totalProduto[i]);
    }

    printf("\nTotal vendido em cada loja no trimestre:\n");
    for (int j = 0; j < LOJAS; j++) {
        printf("Loja %d: %.2f\n", j + 1, totalLoja[j]);
    }

    // Cálculo do aumento de 15%
    printf("\nNovos valores com aumento de 15%%:\n");
    for (int i = 0; i < PRODUTOS; i++) {
        for (int j = 0; j < LOJAS; j++) {
            totalTrimestre[i][j] = totalProdutoLoja[i][j] * 1.15;
            printf("Produto %d, Loja %d: %.2f\n", i + 1, j + 1, totalTrimestre[i][j]);
        }
    }

    return 0;
}