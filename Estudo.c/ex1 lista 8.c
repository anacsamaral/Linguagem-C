#include <stdio.h>
#define tf 8
int main()
{
    int vet[tf], tl = 0, num, elem, pos, i;
    printf("Digite o %do. numero:\n", tl + 1);
    scanf("%d", &num);
    while (tl < tf && num > 0)
    {
        //Colocar remanejamento para ordenar conforme os numeros sao inseridos
        vet [tl] = num;
        tl++;
        if (tl < tf)
        {
            printf("Digite o %do. numero:\n", tl + 1);
            scanf("%d", &num);
        }
    }
    printf("Digite um elemento para inserir:\n"); //Leitura do elemento para inserir
    scanf("%d", &elem);
    pos = 0;
    while (pos < tl && elem > vet[pos]) //Busca ordenada (Vetor Ordenado)
        pos++;
    //Remanejamento
    for (i = tl; i > pos; i--)
        vet[i] = vet[i - 1];
    vet[pos] = elem;
    tl++;
    
    if (tl < tf)
    {
        printf("Digite o %do. numero:\n", tl + 1);
        scanf("%d", &num);
    }
    for (i = 0; i < tl; i++)
        printf("%d ", vet[i]);
    return 0;
}