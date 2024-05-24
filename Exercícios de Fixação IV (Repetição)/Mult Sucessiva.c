#include <stdio.h>
int main()
{
    int N = 0;
    printf("Dig um num entre 1 e 50:\n");
    scanf("%d", &N);
    while (N < 0 || N >= 0)
    {
        while (N < 1 || N > 50)
        {
            printf("Num. Invalido. Digite novamente:\n");
            scanf("%d", &N);
        }
        while (N >= 1 && N < 250)
        {
            N = N * 2;
            if (N < 250)
                printf("%d\n", N);
        }
        printf("Dig um num entre 1 e 50:\n");
        scanf("%d", &N);
    }
    return 0;
}