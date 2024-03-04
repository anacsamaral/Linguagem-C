#include <stdio.h>
#include <math.h>
int main()
{
    float P, i, n, M, lucro_bruto, ioF, lucro_liquido, lucro_percentual;
    printf("Digite o valor da aplicação, a taxa e o periodo em meses:\n");
    scanf("%f%f%f", &P, &i, &n);
    M = P * pow(1 + i/100, n);
    lucro_bruto = M - P;
    ioF = lucro_bruto * 8/100;
    lucro_liquido = lucro_bruto - ioF;
    lucro_percentual = lucro_liquido / P * 100;
    printf("O montante final é de: R$%.2f\n", M);
    printf("O lucro bruto é de: R$%.2f\n", lucro_bruto);
    printf("O imposto é de: R$%.2f\n", ioF);
    printf("O lucro liquido é de: R$%.2f\n", lucro_liquido);
    printf("O lucro percentual é de %.1f porcento\n", lucro_percentual);
    
    return 0;
}