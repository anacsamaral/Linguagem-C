#include <stdio.h>

#define TF 3

int main()
{
    int MatA[TF][TF], MatB[TF][TF], MatS[TF][TF], MatM[TF][TF], l, c;

    printf("===== MATRIZ A [leitura] =====\n");
    for(l = 0; l < TF; l++)
        for(c = 0; c < TF; c++)
        {
            printf("\nElemento [%d|%d]: ", l, c);
            scanf("%d", &MatA[l][c]);
        }

    printf("\n===== MATRIZ A [exibicao] =====\n");
    for(l = 0; l < TF; l++)
    {
        for(c = 0; c < TF; c++)
            printf("[%d] ", MatA[l][c]);
        printf("\n");
    }
        

    printf("\n===== MATRIZ B [leitura] =====\n");
    for(l = 0; l < TF; l++)
        for(c = 0; c < TF; c++)
        {
            printf("\nElemento [%d|%d]: ", l, c);
            scanf("%d", &MatB[l][c]);
        }

    printf("\n===== MATRIZ B [exibicao] =====\n");
    for(l = 0; l < TF; l++)
    {
        for(c = 0; c < TF; c++)
            printf("[%d] ", MatB[l][c]);
        printf("\n");
    }

    for(l = 0; l < TF; l++)
        for(c = 0; c < TF; c++)
        {
            MatS[l][c] = MatA[l][c] + MatB[c][l];
            MatM[l][c] = MatB[l][c] * MatA[c][l];
        }

    printf("\nMatriz de Soma de A pela transposta de B\n");
    for(l = 0; l < TF; l++)
    {
        for(c = 0; c < TF; c++)
            printf("[%d] ", MatS[l][c]);
        printf("\n");
    }

    printf("\nMultiplicacao de B pela transposta de A\n");
    for(l = 0; l < TF; l++)
    {
        for(c = 0; c < TF; c++)
            printf("[%d] ", MatM[l][c]);
        printf("\n");
    }

    for(l = 0; l < TF; l++)
        for(c = 0; c < TF; c++)
            MatA[c][l] = MatA[c][l] * 4 + MatB[c][l];
        
    printf("\n=== Matriz A x 4 e resultado + transposta de B\n");    
    for(l = 0; l < TF; l++)
    {
        for(c = 0; c < TF; c++)
            printf("[%d] ", MatA[l][c]);
        printf("\n");
    }

    return 0;
}