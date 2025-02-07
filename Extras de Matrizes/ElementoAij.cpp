#include <stdio.h>

#define TFL 5
#define TFC 7

int main() {
    int MatrizA[TFL][TFC], l, c, OutraL, MenorL, MenorC, MaiorC, PontoDeSela = 0;

    // Entrada da matriz
    printf("Digite os elementos da matriz %dx%d:\n", TFL, TFC);
    for (l = 0; l < TFL; l++)
        for (c = 0; c < TFC; c++)
            scanf("%d", &MatrizA[l][c]);

    // Verificando o ponto de sela
    for (l = 0; l < TFL; l++) {
        // Encontrar o menor elemento na linha atual
        MenorL = MatrizA[l][0];
        MenorC = 0;
        for (c = 1; c < TFC; c++)
            if (MatrizA[l][c] < MenorL) {
                MenorL = MatrizA[l][c];
                MenorC = c;
            }

        // Verificar se o menor elemento da linha � o maior na sua coluna
        MaiorC = MenorL;
        for (OutraL = 0; OutraL < TFL; OutraL++)
            if (MatrizA[OutraL][MenorC] > MaiorC)
                MaiorC = MatrizA[OutraL][MenorC];

        // Se o menor da linha for o maior da coluna, temos um ponto de sela
        if (MaiorC == MenorL) {
            printf("O ponto de sela da matriz � o n�mero %d e est� na linha %d e coluna %d.\n",
                   MenorL, l + 1, MenorC + 1);
            PontoDeSela = 1;
        }
    }

    if (!PontoDeSela)
        printf("A matriz n�o possui ponto de sela.\n");

    return 0;
}
