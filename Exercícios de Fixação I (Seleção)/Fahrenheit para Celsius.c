#include <stdio.h>
int main()
{
    int grausC, grausF;
    printf("Digite a temperatura em Fahrenheit:\n");
    scanf("%d", &grausF);
    grausC = (grausF - 32)*5/9;
    printf("A temperatura em graus Celsius é: %d", grausC);

    return 0;
}