#include <stdio.h>
int main()
{
    int idade;
    char grupo;
    printf("Digite a idade:\n");
    scanf("%d", &idade);
    while (idade >= 18 && idade <= 70)
    {
        printf("Qual o grupo de risco?:\n B - Baixo\n M - Medio\n A - Alto\n");
        scanf(" %c", &grupo);
        if (idade >= 18 && idade <= 24)
        {
            switch (grupo)
            {
            case 'B':
            case 'b':
                printf("cod 7\n");
                break;
            case 'M':
            case 'm':
                printf("cod 8\n");
                break;
            case 'A':
            case 'a':
                printf("cod 9\n");
                break;
            }
        }
        else if (idade >= 25 && idade <= 40)
        {
            switch (grupo)
            {
            case 'B':
            case 'b':
                printf("cod 4\n");
                break;
            case 'M':
            case 'm':
                printf("cod 5\n");
                break;
            case 'A':
            case 'a':
                printf("cod 6\n");
                break;
            }
        }
        else if (idade >= 41 && idade <= 70)
        {
            switch (grupo)
            {
            case 'B':
            case 'b':
                printf("cod 1\n");
                break;
            case 'M':
            case 'm':
                printf("cod 2\n");
                break;
            case 'A':
            case 'a':
                printf("cod 3\n");
                break;
            }
        }
        printf("Digite outra idade:\n");
        scanf(" %d", &idade);
    }
    if (idade > 70)
        printf("Idade Inválida!\n");
    
    return 0;
}