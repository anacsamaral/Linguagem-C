#include <stdio.h>
int main()
{
    int n;
    printf("Digite um num. entre 1 e 50:\n");
    scanf("%d", &n);
    while (n < 0 || n >= 0)
    {
        while (n >= 1 && n < 50)
        {
            while (n < 250)
            {
                n = n * 2;
                if (n < 250)
                    printf("%d\n", n);
            }
        }
        printf("Digite um num. entre 1 e 50:\n");
        scanf("%d", &n);
    }
    return 0;
}