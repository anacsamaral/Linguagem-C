#include <stdio.h>
#define tf 20
int main()
{
    int vet[tf], i, num, tl = 0, cont;
    printf("Digite o %do. numero:\n", tl+1);
    scanf("%d", &num);
    while (tl < tf && num > 0)
    {
        vet[tl] = num;
        tl++;
        printf("Digite o %do. numero:\n", tl+1);
        scanf("%d", &num);
    }

    printf("Digite um elemento para encontrar:\n");
    scanf("%d", &num);

    while (num > 0)
    {
        cont = 0;
        for (i = 0; i < tl; i++)
        {
            if (num == vet[i])
            {
                cont++;
                printf("O num. %d esta na pos %d\n", num, i);
            }
        }
        printf("O num. %d apareceu %d vezes\n", num, cont);
        printf("Digite um elemento para consultar:\n");
        scanf("%d", &num);
    }
    return 0;
}