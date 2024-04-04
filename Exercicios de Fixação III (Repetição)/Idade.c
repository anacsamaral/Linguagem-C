#include <stdio.h>
int main()
{
    int idade, maior18 = 0, cont = 0;
    printf("Digite a idade:\n");
    scanf("%d", &idade);
    cont++;
    while (cont <= 9)
    {
        if(idade >= 18)
            {maior18++;
            printf("Digite a idade:\n");
            scanf("%d", &idade);
            cont++;}
        else
            {printf("Digite a idade:\n");
            scanf("%d", &idade);
            cont++;}
    }
    printf("%d pessoas são maiores de 18 anos.\n", maior18);
    
    return 0;
}