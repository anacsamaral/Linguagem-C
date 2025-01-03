#include <stdio.h>
#define TF 3

int main()
{
    int l, c, somaD = 0, Mat[TF][TF];

    for(l = 0; l < TF; l++)
        for(c = 0; c < TF; c++)
        {
            printf("\nElemento [%d|%d]: ", l, c);
            scanf("%d", &Mat[l][c]);
        }

    for(c = 0, l = TF - 1; c < TF && l >= 0; c++, l--)
        somaD += Mat[l][c];
    
    printf("\nA soma dos elementos da diagonal principal eh %d.", somaD);

    return 0;
}