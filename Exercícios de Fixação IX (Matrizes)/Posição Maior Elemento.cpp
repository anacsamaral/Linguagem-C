#include <stdio.h>
#define TF 3

int main() 
{
    int Matriz[TF][TF], maior, posicoes[TF * TF][2], cont = 0, l, c, i;

    // Carregamento da matriz
    printf("Digite os elementos da matriz:\n");
    for (l = 0; l < TF; l++) {
        for (c = 0; c < TF; c++) {
            printf("Elemento [%d][%d]: ", l, c);
            scanf("%d", &Matriz[l][c]);
        }
    }

    // Inicialização do maior elemento
    maior = Matriz[0][0];
    cont = 0;

    // Cálculo do maior elemento e suas posições
    for (l = 0; l < TF; l++) {
        for (c = 0; c < TF; c++) {
            if (Matriz[l][c] > maior) 
            {
                maior = Matriz[l][c];
                cont = 0; // Reinicia o contador
                posicoes[cont][0] = l;
                posicoes[cont][1] = c;
                cont++;
            } 
            else if (Matriz[l][c] == maior) 
            {
                posicoes[cont][0] = l;
                posicoes[cont][1] = c;
                cont++;
            }
        }
    }

    // Exibição do maior elemento e suas posições
    printf("\nO maior elemento da matriz eh: %d\n", maior);
    printf("Posicoes:\n");
    for (i = 0; i < cont; i++) {
        printf("Linha: %d, Coluna: %d\n", posicoes[i][0], posicoes[i][1]);
    }

    return 0;
}