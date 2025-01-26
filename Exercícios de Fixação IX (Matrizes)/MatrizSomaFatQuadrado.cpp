#include <stdio.h>

#define TAMANHO 10

int main() {
    // Declaração de variáveis
    int matrizA[TAMANHO];
    int matrizC[TAMANHO][3];
    int i, j;
    int resultado;

    // Entrada de dados para a matriz A
    printf("Digite os elementos da matriz A (10 elementos):\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &matrizA[i]);
    }

    // Construção da matriz C
    for (i = 0; i < TAMANHO; i++) {
        matrizC[i][0] = matrizA[i] + 5;               // Primeira coluna: elementos de A somados com 5

        // Cálculo do fatorial (segunda coluna)
        resultado = 1;
        for (j = 1; j <= matrizA[i]; j++) {
            resultado *= j;
        }
        matrizC[i][1] = resultado;

        matrizC[i][2] = matrizA[i] * matrizA[i];      // Terceira coluna: quadrado dos elementos de A
    }

    // Exibição da matriz C
    printf("\nMatriz C:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Linha %d: %d %d %d\n", i + 1, matrizC[i][0], matrizC[i][1], matrizC[i][2]);
    }

    return 0;
}
