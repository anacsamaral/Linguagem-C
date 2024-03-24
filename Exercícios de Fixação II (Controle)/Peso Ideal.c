#include <stdio.h>
int main()
{
    float altura, peso_ideal;
    char sexo;
    printf("Digite seu sexo:\n f - feminino\n m - masculino\n");
    scanf("%c", &sexo);
    printf("Digite sua altura (Ex.: 1.70):\n");
    scanf("%f", &altura);
    if (sexo == 'f')
    {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O seu peso ideial é: %.1f kg\n", peso_ideal);
    }
    else
    {
        peso_ideal = (72.7 * altura) - 58;
        printf("O seu peso ideal é: %.1f kg\n", peso_ideal);
    }
    return 0;
}