#include <stdio.h>
int main()
{
    int voto, cont = 0, c1 = 0, c2 = 0, c3 = 0;
    printf("Vote:\n1 - Chapa 1\n2 - Chapa 2\n3 - Chapa 3\n");
    scanf("%d", &voto);
    while (cont < 200)
    {
        cont++;
        if (voto == 1)
            c1++;
        else if (voto == 2)
            c2++;
        else
            c3++;
        
        printf("1 - Chapa 1\n2 - Chapa 2\n3 - Chapa 3\n");
        scanf("%d", &voto);
    }
    printf("Resultado final:\nChapa 1 = %d votos\nChapa 2 = %d votos\nChapa 3 = %d votos\n", c1, c2, c3);
    if (c1 > c2)
    {
        if (c1 > c3)
            printf("Chapa 1 vencedora\n");
    }
    else
    {
        if (c2 > c3)
            printf("Chapa 2 vencedora\n");
        else
            printf("Chapa 3 vencedora\n");
    }
    return 0;
}