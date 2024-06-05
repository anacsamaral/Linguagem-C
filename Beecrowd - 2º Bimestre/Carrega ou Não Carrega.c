#include <stdio.h>
#define tf 2
int main()
{
    long long int vet[tf], soma;
    while (scanf ("%lld %lld", &vet[0], &vet[1]) != EOF)
    {    
        soma = vet[0]^vet[1];
        printf("%lld\n", soma);
    }
}