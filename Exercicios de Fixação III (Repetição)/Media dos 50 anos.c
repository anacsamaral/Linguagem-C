#include <stdio.h>
int main()
{
    int idade, cont = 0, i = 1;
    float altura, media, soma;
    printf("Digite a %da. idade:\n", i);
    scanf("%d", &idade);
    while (idade > 0)
    {
        printf("Digite a altura:\n");
        scanf("%f", &altura);
        if (idade > 50)
        {
            soma += altura;
            cont++;
        }
        printf("Digite a %da. idade:\n", i + 1);
        scanf("%d", &idade);
    }
    if (cont > 0)
    {
        media = soma / cont;
        printf("Media das alturas: %.2f\n", media);
    }
    return 0;
}