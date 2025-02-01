#include <stdio.h>

#define TF 12 // Tamanho fixo da matriz

int main() {
    int Matriz[TF][TF], MenorElemento, LinhaMenor, ColunaMenor, SomaElemento, l, c, cont;
    float MediaElementos;

    // Leitura da matriz
    printf("Leitura da Matriz (%d x %d):\n", TF, TF);
    for (l = 0; l < TF; l++) {
        for (c = 0; c < TF; c++) {
            printf("Elemento [%d][%d]: ", l, c);
            scanf("%d", &Matriz[l][c]);
        }
    }

    // Exibi��o da matriz
    printf("\nMatriz digitada:\n");
    for (l = 0; l < TF; l++) {
        for (c = 0; c < TF; c++) {
            printf("[%d] ", Matriz[l][c]);
        }
        printf("\n");
    }

    // Processamento do item (a) - �rea hachurada
    MenorElemento = Matriz[0][0];
    SomaElemento = 0;
    cont = 0;

    for (l = 0; l < TF; l++) {
        for (c = l; c < TF - l; c++) { // �rea hachurada no item (a)
            SomaElemento += Matriz[l][c];
            cont++;
            if (Matriz[l][c] < MenorElemento) {
                MenorElemento = Matriz[l][c];
                LinhaMenor = l;
                ColunaMenor = c;
            }
        }
    }

    MediaElementos = (float)SomaElemento / cont;
    printf("\nITEM (A):\n");
    printf("Menor elemento da �rea hachurada: %d\n", MenorElemento);
    printf("Posi��o: [%d][%d]\n", LinhaMenor, ColunaMenor);
    printf("M�dia dos elementos da �rea hachurada: %.2f\n", MediaElementos);

    // Processamento do item (b) - Outra �rea hachurada
    MenorElemento = Matriz[0][0];
    SomaElemento = 0;
    cont = 0;

    for (l = 0; l < TF; l++) {
        for (c = 0; c < TF; c++) {
            if ((c >= l && c < TF - l) || (c <= l && c >= TF - l - 1)) { // �rea hachurada no item (b)
                SomaElemento += Matriz[l][c];
                cont++;
                if (Matriz[l][c] < MenorElemento) {
                    MenorElemento = Matriz[l][c];
                    LinhaMenor = l;
                    ColunaMenor = c;
                }
            }
        }
    }

    MediaElementos = (float)SomaElemento / cont;
    printf("\nITEM (B):\n");
    printf("Menor elemento da �rea hachurada: %d\n", MenorElemento);
    printf("Posi��o: [%d][%d]\n", LinhaMenor, ColunaMenor);
    printf("M�dia dos elementos da �rea hachurada: %.2f\n", MediaElementos);

    return 0;
}
