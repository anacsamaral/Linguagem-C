#include <stdio.h>
int main(){
    int idade;
    printf("Digite a idade:\n");
    scanf("%d", &idade);
    if (idade >= 0 && idade <= 2)
        printf("Recém-Nascido\n");
    if (idade >= 3 && idade <= 11)
        printf("Criança\n");
    if (idade >= 12 && idade <= 19)
        printf("Adolescente\n");
    if (idade >= 20 && idade <= 55)
        printf("Adulto\n");
    if (idade > 55)
        printf("Idoso\n");
    return 0;
}