#include <stdio.h>
#include <math.h>
int main()
{
    float quant_latas, custo, altura, raio, quant_litros, cilindro, areaB, areaL;
    printf("Digite a medida da altura e do raio:\n");
    scanf("%f%f", &altura, &raio);
    areaB = 3.1415 * pow(raio, 2);
    areaL = 2 * 3.1415 * raio * altura;
    cilindro = areaB + areaL;
    quant_litros = cilindro/3;
    quant_latas = ceil(quant_litros/5);
    custo = quant_latas * 50.00;
    printf("A quantidade de latas necessarias e: %.0f\n", quant_latas);
    printf("O custo sera de: R$%.2f\n", custo);

    return 0;
}