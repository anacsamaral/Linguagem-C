#include <stdio.h>

int main()
{
    int valor_inicial, valor, ced100, ced50, ced20, ced10, ced5, ced2, ced1;
    scanf("%d", &valor_inicial);

    ced100 = valor_inicial / 100;
    valor = valor_inicial % 100;
    ced50 = valor/50;
    valor = valor % 50;
    ced20 = valor / 20;
    valor = valor % 20;
    ced10 = valor / 10;
    valor = valor % 10;
    ced5 = valor / 5;
    valor = valor % 5;
    ced2 = valor / 2;
    valor = valor % 2;
    ced1 = valor / 1;
    
    printf("%d\n", valor_inicial);
    printf("%d nota(s) de R$ 100,00\n", ced100);
    printf("%d nota(s) de R$ 50,00\n", ced50);
    printf("%d nota(s) de R$ 20,00\n", ced20);
    printf("%d nota(s) de R$ 10,00\n", ced10);
    printf("%d nota(s) de R$ 5,00\n", ced5);
    printf("%d nota(s) de R$ 2,00\n", ced2);
    printf("%d nota(s) de R$ 1,00\n", ced1);
    return 0;
}