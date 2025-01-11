#include <stdio.h>

int main()
{
    int l, c, linhas, colunas, num, fatorial;

    printf("\nDigite o numero de linhas e colunas [l] [c]: ");
    scanf("%d %d", &linhas, &colunas);

    int Matriz[linhas][colunas];

    for(l = 0; l < linhas; l++)
        for(c = 0; c < colunas; c++)
        {
            printf("\nElemento [%d][%d]: ", l, c);
            scanf("%d", &Matriz[l][c]);
        }

    for (l = 0; l < linhas; l++)
        for (c = 0; c < colunas; c++)
            num = Matriz[l][j];
            if (num < 0) 
                Matriz[l][c] = 0;
            else 
            {
                fatorial = 1;
                for (int k = 1; k <= valor; k++) {
                    fatorial *= k;
                }
                matriz[l][j] = fatorial;
            }
        }

    // Imprime a matriz atualizada
    printf("\nMatriz atualizada com os fatoriais:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%llu ", (unsigned long long)matriz[i][j]);
        }
        printf("\n");
    }

    return 0;

}