#include <stdio.h>
int main()
{
    int n = 1, d, total = 0;
    while (n <= 10)
    {
        d = n * n;
        if (n % 2 == 1)
            if (n == 1)
            {
                printf("S = %d/%d - ", n, d);
                n++;
                total += n / d;
            }
            else
            {
                printf("%d/%d - ", n, d);
                n++;
                total += n / d;
            }
        else
            if (n == 10)
            {
                printf("%d/%d = %d\n", n, d, total);
                n++;
            }
            else
            { 
                printf("%d/%d + ", n, d);
                n++;
                total += n / d;
            }
    }
    printf("Soma = %d\n", total);

    return 0;
}