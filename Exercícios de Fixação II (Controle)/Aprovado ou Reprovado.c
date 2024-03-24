#include <stdio.h>
int main()
{
    float n1, n2, n3, n4, media;
    printf("Digite as quatro notas:\n");
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    printf("Sua média é: %.1f\n", media);

    if(media >= 7.0)   
        printf("Aprovado");
    else
        printf("Reprovado");
    
    return 0;

}