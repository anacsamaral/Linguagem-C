#include <stdio.h>
#include <math.h>
int main()
{
    int soma = 0;
    for (int i = 1; i <= 500; i++)
    {
        if (i % 2 == 1 && i % 3 == 0)
        {
            soma += i;
            printf("i: %d\n", i);
        }
    }
    printf("Soma de todos os numeros impares e multiplos de 3, entre 1 e 500: %d", soma);
}