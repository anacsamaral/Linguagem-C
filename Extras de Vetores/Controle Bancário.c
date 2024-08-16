#include <stdio.h>
#include <string.h>
#define TF 3
int main()
{
    int i;
    char vetNome[TF][15];

    for (i = 0; i < TF; i++)
    {
        printf("Digite o seu nome:\n");
        gets(vetNome[i]);
        fflush(stdin);
    }

    for (i = 0; i < TF; i++)
        puts(vetNome[i]);

    return 0;
}