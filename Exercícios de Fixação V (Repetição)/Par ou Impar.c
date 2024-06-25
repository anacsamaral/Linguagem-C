#include <stdio.h>
int main()
{
    int par = 0, imp = 0, cont = 0, n;
    printf("Numero:\n");
    scanf("%d", &n);
    while (cont <= 300 && n > 0)
    {
        cont++;
        if (n % 2 == 1)
            imp++;
        else
            par++;
        
        printf("Numero\n");
        scanf("%d", &n);
    }
    printf("%d sao pares e %d sao impares\n", par, imp);
    return 0;
}