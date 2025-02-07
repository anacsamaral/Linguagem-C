#include <stdio.h>

int main() 
{
    int n, minVal, i, j;
    printf("Digite o tamanho da matriz (NxN): ");
    scanf("%d", &n);

    if (n <= 0)
	{
        printf("O tamanho da matriz deve ser maior que 0.\n");
        return 1;
    }

    int matriz[n][n];

    // Preenchimento da matriz
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
		{
            minVal = i;
            if (j < minVal)
				minVal = j;
            if (n - i - 1 < minVal)
				minVal = n - i - 1;
            if (n - j - 1 < minVal)
				minVal = n - j - 1;
				
            matriz[i][j] = minVal + 1;
        }

    // Exibição da matriz
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

