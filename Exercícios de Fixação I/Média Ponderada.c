#include <stdio.h>
int main()
{
    float nota1, nota2, peso1, peso2, mediaP;
    printf("Digite as duas notas:\n");
    scanf("%f%f", &nota1, &nota2);
    printf("Agora, digite os dois respectivos pesos das duas notas:\n");
    scanf("%f%f", &peso1, &peso2);
    mediaP = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);
    printf("A sua média ponderada é: %.1f", mediaP);
    return 0;
}