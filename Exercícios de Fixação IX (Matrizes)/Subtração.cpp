#include <stdio.h>
#define TF 3

int main()
{
    int MatA[TF][TF], MatB[TF][TF], l, c;

    printf("Digite os elementos da Matriz A (%dx%d):\n", TF, TF);
    for (l = 0; l < TF; l++)
        for (c = 0; c < TF; c++)
            scanf("%d", &MatA[l][c]);

    printf("Digite os elementos da Matriz B (%dx%d):\n", TF, TF);
    for (l = 0; l < TF; l++)
        for (c = 0; c < TF; c++)
            scanf("%d", &MatB[l][c]);

    for(l = 0; l < TF; l++)
        for(c = 0; c < TF; c++)
            MatA[l][c] = MatA[l][c] - MatB[l][c];


    printf("\nSubtracao:\n");
    for(l = 0; l < TF; l++)
    {
        for(c = 0; c < TF; c++)
            printf("[%d] ", MatA[l][c]);
        
        printf("\n");
    }
    
    return 0;
}