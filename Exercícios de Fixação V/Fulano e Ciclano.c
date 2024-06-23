#include <stdio.h>
int main()
{
    int cont = 0;
    float fulano = 1.50, ciclano = 1.10;
    while (ciclano <= fulano)
    {
        cont++;
        fulano += 0.02;
        ciclano += 0.03;
    }
    printf("Serao necessarios %d anos para que ciclano se torne maior que fulano\n", cont);
    printf("Fulano tera %.2f metros de altura, enquanto Ciclano tera %.2f metros de altura\n", fulano, ciclano);
    return 0;
}