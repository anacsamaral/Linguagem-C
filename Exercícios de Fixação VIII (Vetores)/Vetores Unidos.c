#include <stdio.h>
#define tf 4
int main()
{
    int vet1[tf], vet2[tf], vetUniao[tf*2], i, tl;
    printf("Insira os val. do vet1:\n");
    for (i = 0; i < tf; i++)
        scanf("%d", &vet1[i]);
    printf("Insira os val. do vet2:\n");
    for (i = 0; i < tf; i++)
        scanf("%d", &vet2[i]);
    
    //União dos vetores
    for (tl = 0; tl < tf; tl++)
        vetUniao[tl] = vet1[tl];
    for (tl = tf, i = 0; tl < tf*2; tl++, i++)
        vetUniao[tl] = vet2[i];

    printf("Vetor 1:\n");
    for(i = 0; i < tf; i++)
        printf("%d ", vet1[i]);
    printf("\n");
    printf("Vetor 2:\n");
    for(i = 0; i < tf; i++)
        printf("%d ", vet2[i]);
    printf("\n");
    printf("Vetor Uniao:\n");
    for(i = 0; i < tf*2; i++)
        printf("%d ", vetUniao[i]);
    return 0;
}