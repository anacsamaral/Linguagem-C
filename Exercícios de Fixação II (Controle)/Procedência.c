#include <stdio.h>
int main()
{
    int cod;
    float preco;
    printf("Preço do produto:\n");
    scanf("%f", &preco);
    printf("Digite o código:\n");
    scanf("%d", &cod);

    if (cod == 1)
        printf("Procedencia: SUL");
    if (cod == 2)
        printf("Procedencia: NORTE");
    if (cod == 3)
        printf("Procedencia: LESTE");
    if (cod == 4)
        printf("Procedencia: OESTE");
    if (cod == 5 || cod == 6)
        printf("Procedencia: NORDESTE");
    if (cod == 7 || cod == 8 || cod == 9)
        printf("Procedencia: SUDESTE");
    if (cod >= 10 && cod <= 20)
        printf("Procedencia: CENTRO-OESTE");
    if (cod >= 21 && cod <= 30)
        printf("NOROESTE");

    return 0;
}