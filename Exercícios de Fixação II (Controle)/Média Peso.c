#include <stdio.h>
int main()
{
    float n1, n2, n3, media;
    printf("Digite as tres notas:\n");
    scanf("%f%f%f", &n1, &n2, &n3);
    media = (n1*2 + n2*3 + n3*5)/10;
    printf("Sua media é: %.1f\n", media);

    if (media >= 8.0 && media <= 10.0)
        printf("Conceito A\n");
    if (media >= 7.0 && media < 8.0)
        printf("Conceito B\n");
    if (media >= 6.0 && media < 7.0)
        printf("Conceito C\n");
    if (media >= 5.0 && media < 6.0)
        printf("Conceito D\n");
    if (media < 5.0)
        printf("Conceito E\n");
    
    return 0;
}