#include <stdio.h>
int main()
{
    int idade, maior18 = 0, cont = 0, cont18 = 0;
    printf("Digite a idade:\n");
    scanf("%d", &idade);
    while (cont <= 10)
    {
        cont++;
        if(idade >= 18)
            cont18++;
        
        printf("Digite a idade:\n");
        scanf("%d", &idade);
    }
    printf("%d pessoas são maiores de 18 anos.\n", maior18);
    
    return 0;
}