#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Digite dois numeros inteiros:\n");
    scanf("%d%d", &num1, &num2);

    if(num1 == num2)
        printf("Os numeros sao iguais");
        
    else
        if(num1 < num2)
            printf("%d e menor", num1);
        else
            printf("%d e menor", num2);

    return 0;    
}