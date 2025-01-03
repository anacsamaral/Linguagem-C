#include <stdio.h>
#define TF 4

int main()
{
    int MatA[TF-1][TF], MatB[TF-1][TF], MatSoma[TF-1][TF], l, c;

    printf("\n===== Matriz A =====\n");

    for(l = 0; l < TF - 1; l++)
        for(c = 0; c < TF; c++)
        {
            printf("\nElemento [%d|%d]: ", l, c);
            scanf("%d", &MatA[l][c]);
        }

    printf("\n===== Matriz B =====\n");

    for(l = 0; l < TF - 1; l++)
        for(c = 0; c < TF; c++)
        {
            printf("\nElemento [%d|%d]: ", l, c);
            scanf("%d", &MatB[l][c]);
        }

    for(l = 0; l < TF - 1; l++)
        for(c = 0; c < TF; c++)
            MatSoma[l][c] = MatA[l][c] + MatB[l][c];

    printf("\n========== Soma das Matrizes A e B ============\n");

    for(l = 0; l < TF - 1; l++)
    {
        for(c = 0; c < TF; c++)
            printf("[%d] ", MatSoma[l][c]);
        printf("\n");
    }

    return 0;
}