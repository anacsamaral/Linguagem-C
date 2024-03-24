#include <stdio.h>
int main()
{
    int id;
    printf("Digite sua idade:\n");
    scanf("%d", &id);
    if (id >= 18)
        printf("Você é de maioridade.\n");
    else
        printf("Você não é de maioridade.\n");

    return 0;
}