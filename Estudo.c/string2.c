#include <stdio.h>
#include <string.h>
#define tf 5
int main()
{
    char vNome[tf][15], nome[15];
    int i, pos;
    for (i = 0; i < tf; i++)
    {
        printf("Digite o %do. nome:\n", i + 1);
        gets(vNome[i]);
    }
    printf("NOme p/ buscar:\n");
    gets(nome);
    //Busca nome no vNome
    pos = 0;
    while (pos < tf && strcmp(nome, vNome[pos]) != 0)
        pos++;
    if (pos < tf)
        printf("Achei %s na posicao %d\n", nome, pos);
    strcpy(vNome[pos], "***");
    strcpy(vNome[i], vNome[i - 1]);
    return 0;
}