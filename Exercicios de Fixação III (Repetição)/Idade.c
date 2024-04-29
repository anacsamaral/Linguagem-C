#include <stdio.h>
int main()
{
    int idade, cont = 0, cont18 = 0;
    while (cont < 10)
    {
        printf("Digite a idade:\n");
        scanf("%d", &idade);
        cont++;
        if(idade >= 18)
            cont18++;
    }
    printf("%d pessoas são maiores de 18 anos.\n", cont18);
    
    return 0;
}