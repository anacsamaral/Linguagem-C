#include <stdio.h>
int main()
{
    int a, b, c, maior;
    int A, B, C;
    scanf("%d %d %d", &a, &b, &c);

    A = a; B = b; C = c;

    if (a > b)
    {   
        maior = a;
        a = b;
        b = maior;
    }
    if (a > c)
    {
        maior = a;
        a = c;
        c = maior;
    }
    if (b > c)
    {
        maior = b;
        b = c;
        c = maior;
    }
    printf("%d\n%d\n%d\n", a, b, c);
    printf("\n");
    printf("%d\n%d\n%d\n", A, B, C);
    return 0;
}