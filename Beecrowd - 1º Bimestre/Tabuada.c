#include <stdio.h>
int main()
{
    int num, cont = 0;
    scanf("%d", &num);

    while (cont < 10)
    {
        cont ++;
        printf("%d x %d = %d\n", cont, num, cont * num);
    }
    return 0;
}