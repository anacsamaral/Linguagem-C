#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Digite os 3 respetivos lados do triângulo:\n");
    scanf("%d%d%d", &a,&b,&c);
    if(a + b > c && c + b > a && a + c > b)
    {
        if(a == b && a == c)
        printf("Ttriângulo Equilátero!\n");
        else
        {
            if(a == b || a == c || b == c)
                printf("Triâgulo Isósceles\n");
            else
                printf("Triângulo Escaleno!\n");
        }
    }
    else
    printf("Essas medidas não formam um triângulo!!!\n");
    
    return 0;
}   