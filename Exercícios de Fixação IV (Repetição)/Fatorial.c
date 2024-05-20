#include <stdio.h>
int main()
{
    int n, total, i;
    printf("Valor de N:\n");;
    scanf("%d", &n);
    while (n >= 0)
    {
        if (n == 0)
            printf("%d! = 1\n", n);
        else
        {
            for (i = 1; i <= n; i++)
                if (i == 1)
                    total = i;
                else
                    total = total * i;
            printf("%d! = %d\n", n, total);
        }
        printf("Valor de N: \n");
        scanf("%d", &n);
    }
    return 0;
}