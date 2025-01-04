#include <stdio.h>

#define TF 3 // Tamanho fixo para linhas e colunas da matriz

int main() {
    // Declaração de variáveis
    float matriz[TF][TF], diagonal;
    int i, j;

    // Entrada dos elementos da matriz
    printf("Digite os elementos da matriz (%dx%d):\n", TF, TF);
    for (i = 0; i < TF; i++)
        for (j = 0; j < TF; j++)
            scanf("%f", &matriz[i][j]);

    printf("\nMatriz (%dx%d):\n", TF, TF);
    for (i = 0; i < TF; i++)
    {
        for (j = 0; j < TF; j++)
            printf("[%.2f]", matriz[i][j]);
        printf("\n");
    }
        

    // Processamento da matriz
    for (i = 0; i < TF; i++) 
    {
        diagonal = matriz[i][i]; // Elemento da diagonal principal

        if (diagonal == 0)
            printf("Aviso: O elemento da diagonal principal na linha %d é zero. Linha não processada.\n", i + 1);

        for (j = 0; j < TF; j++)
            matriz[i][j] /= diagonal;
    }

    // Impressão da matriz processada
    printf("\nMatriz processada:\n");
    for (i = 0; i < TF; i++) {
        for (j = 0; j < TF; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
