#include <stdio.h>
int main()
{
    float peso, peso_gramas, novo_peso_gramas, peso_gramas1;
    printf("Digite seu peso:\n");
    scanf("%f", &peso);
    peso_gramas = peso * 1000;
    peso_gramas1 = peso_gramas;
    novo_peso_gramas = peso_gramas + 5/100 * peso_gramas1;
    printf("Seu peso em gramas: %.2f\n", peso_gramas);
    printf("Se voce engordar 5 porcento, tera em gramas: %.2f\n", novo_peso_gramas);

    return 0;
}
