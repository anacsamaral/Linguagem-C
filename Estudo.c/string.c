//Exemplo 1
/* #include <stdio.h>
#include <string.h>
int main()
{
    char str[15];
    printf("Digite o nome:\n");
    gets(str);
    puts(str); //Não dá para concatenar
} */

//Exemplo 2
#include <stdio.h>
#include <string.h>
int main()
{
    char str[15], letra; // sempre 1 a menos por conta do \0, entao 14
    int i;
    i = 0;
    printf("Digite o nome:\n");
    scanf("%c", &letra);
    while (1 < 14 && letra != '@')
    {
        str[i] = letra;
        i++;
        if (i < 14)
            scanf(" %c", &letra);
    }
    str[i] = '\0'; //Se não tem \0, não é string
    printf("O tamanho de %s eh %d\n", str, strlen(str));
    return 0;
}