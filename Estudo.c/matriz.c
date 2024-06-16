#include <stdio.h>
#include <string.h>
#define tfa 5
#define tfp 10
int main()
{
    char vetNome[tfp][20];
    int matEst[tfa][tfp], c, l;
    float vetCusto[tfp], somaC, menorC, maiorC;
    for (c = 0; c < tfp; c++)
    {
        printf("%do. produto:\n", c + 1);
        fflush(stdin);
        gets(vetNome[c]);
        for (l = 0, l < tfa; l++)
        {
            printf("Estoque no armazen %d:\n", l + 1);
            scanf("%d", &matEst [l][c]);
        }
        printf("Custo:\n");
        scanf("%f", &vetCusto[c]);
        printf("==================\n"); //Separar visualmente
    }
    for 
}