#include <stdio.h>
#define tf 4
int main()
{
    int vet[tf], i, pos, tl = 0;
    //Inserção dos números no vetor
    printf("Insira os valores do vetor:\n");
    for (i = 0; i < tf; i++)
    {
        scanf("%d", &vet[i]);
        tl++;
    }
    //Exibição do vetor
    for (i = 0; i < tf; i++)
        printf("%d ", vet[i]);
    printf("\n");
    //Posição do elemento que vai ser removido
    printf("Escolha uma posição de 0 a 3 para remover o elemento desejado:\n");
    scanf("%d", &pos);

    //Remanejamento
    for (i = pos; i < tl - 1; i++)
        vet[i] = vet[i+1];
    tl--;

    //Exibição do vetor após exclusão do elemento
    for (i = 0; i < tl; i++)
        printf("%d ", vet[i]);

    return 0;
}