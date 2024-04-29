#include <stdio.h>
int main()
{
    char resp;
    printf("É mamifero?\n");
    scanf("%c", &resp);
    if (resp == 's' || resp == 'S')
    {
        printf("É quadrupede?\n");
        scanf(" %c", &resp);
        if (resp == 's' || resp == 'S')
        {
            printf("É carnívoro?\n");
            scanf(" %c", &resp);
            if (resp == 's' || resp == 'S')
                printf("Leão\n");
            else
            {
                printf("É herbivoro?\n");
                scanf(" %c", &resp);
                if (resp == 's' || resp == 'S')
                    printf("Cavalo\n");
                else
                    printf("Animal desconhecido\n");
            }
        }
        else
        {
            printf("É bipede?\n");
            scanf(" %c", &resp);
            if (resp == 's' || resp == 'S')
            {
                printf("É onivoro?\n");
                scanf(" %c", &resp);
                if (resp == 's' || resp == 'S')
                    printf("Homem\n");
                else
                {
                    printf("É frutifero?\n");
                    scanf(" %c", &resp);
                    if (resp == 's' || resp == 'S')
                        printf("Macaco\n");
                    else
                        printf("Animal desconhecido\n");
                }
            }
            else
            {
                printf("É voador?\n");
                scanf(" %c", &resp);
                if (resp == 's' || resp == 'S')
                    printf("Morcego\n");
                else
                {
                    printf("É aquatico?\n");
                    scanf(" %c", &resp);
                    if (resp == 's' || resp == 'S')
                        printf("Baleia\n");
                    else
                        printf("Animal desconhecido\n");
                }
            }
        }
    }
    else
    {
        printf("É ave?\n");
        scanf(" %c", &resp);
        if (resp == 's' || resp == 'S')
        {
            printf("É nao-voador?\n");
            scanf(" %c", &resp);
            if (resp == 's' || resp == 'S')
            {
                printf("É tropical?\n");
                scanf(" %c", &resp);
                if (resp == 's' || resp == 'S')
                    printf("Avestruz\n");
                else
                {
                    printf("É polar?\n");
                    scanf(" %c", &resp);
                    if (resp == 's' || resp == 'S')
                        printf("Pinguim\n");
                }
            }
            else
            {
                printf("É nadador?\n");
                scanf(" %c", &resp);
                if (resp == 's' || resp == 'S')
                    printf("Pato\n");
                else
                {
                    printf("É de rapina?\n");
                    scanf(" %c", &resp);
                    if (resp == 's' || resp == 'S')
                        printf("Aguia\n");
                    else
                        printf("Animal desconhecido");
                }
            }
        }
        else
        {
            printf("É reptil?\n");
            scanf(" %c", &resp);
            if (resp == 's' || resp == 'S')
            {
                printf("Possui casco?\n");
                scanf(" %c", &resp);
                if (resp == 's' || resp == 'S')
                    printf("Tartaruga\n");
                else
                {
                    printf("É carnivoro?\n");
                    scanf(" %c", &resp);
                    if (resp == 's' || resp == 'S')
                    {
                        printf("Sem patas?\n");
                        scanf(" %c", &resp);
                        if (resp == 's' || resp == 'S')
                            printf("Cobra\n");
                        else
                            printf("Crocodilo\n");
                    }
                    else
                        printf("Animal desconhecido\n");
                }
            }
            else
                printf("Animal desconhecido\n");
        }
    }
    return 0;
}