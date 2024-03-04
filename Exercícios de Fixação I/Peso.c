#include <stdio.h>
int main()
{
    int peso, peso_gramas, novo_peso_gramas;
    printf("Digite seu peso:\n");
    scanf("%d", &peso);
    peso_gramas = peso * 1000;
    novo_peso_gramas = peso_gramas + (5/100 * peso_gramas);
    printf("Seu peso em gramas: %d\n", peso_gramas);
    printf("Se voce engordar 5 porcento, tera em gramas: %d\n", novo_peso_gramas);

    return 0;
}