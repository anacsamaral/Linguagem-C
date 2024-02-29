#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Digite três números:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a>b)
    {
        if(a>c)
        printf("%d é maior", a);
        else
        printf("%d é maior", c);
    }
    else
    {
        if(b>c)
        printf("%d é maior", b);
        else
        printf("%d é maior", c);
    }
    return 0;
}