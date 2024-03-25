#include <stdio.h>
int main()
{
    float n1, n2, n3, media;
    printf("Digite as tres notas:\n");
    scanf("%f%f%f", &n1, &n2, &n3);
    media = (n1 + n2 + n3)/3;
    printf("Sua media e: %.1f\n", media);
    if (media >= 0 && media < 5.0)
        printf("Reprovado\n");
    if (media >= 5.0 && media < 7.0)
        printf("Exame\n");
    if (media >= 7.0 && media <= 10.0)
        printf("Aprovado\n");
    return 0;
}