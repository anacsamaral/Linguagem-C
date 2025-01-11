#include <stdio.h>

int main()
{
    int l, c, linhas, colunas, num, fatorial;

    printf("\nDigite o numero de linhas e colunas [l] [c]: ");
    scanf("%d %d", &linhas, &colunas);

    int Matriz[linhas][colunas];

    // Preenchendo a matriz
    for (l = 0; l < linhas; l++)
        for (c = 0; c < colunas; c++) 
        {
            printf("\nElemento [%d][%d]: ", l, c);
            scanf("%d", &Matriz[l][c]);
        }

    // Calculando fatoriais ou zerando elementos negativos
    for (l = 0; l < linhas; l++)
        for (c = 0; c < colunas; c++) 
        {
            num = Matriz[l][c];
            if (num < 0) 
                Matriz[l][c] = 0; // Substitui números negativos por 0
            else if (num > 12)
            { 
                // Evita overflow: Fatorial de 13 já excede o limite de int
                printf("\nErro: Fatorial de %d excede o limite de um int.\n", num);
                Matriz[l][c] = -1; // Usa -1 para indicar um valor inválido
            } 
            else
            {
                fatorial = 1;
                for (int k = 1; k <= num; k++)
                    fatorial *= k;
                Matriz[l][c] = fatorial;
            }
        }

    // Imprimindo a matriz atualizada
    printf("\nMatriz atualizada com os fatoriais:\n");
    for (l = 0; l < linhas; l++) 
    {
        for (c = 0; c < colunas; c++)
            printf("%d ", Matriz[l][c]);

        printf("\n");
    }

    return 0;
}