#include <stdio.h>
int main()
{
    float c, f = 50;
    printf("graus F\t graus C\t\n");
    while (f >= 50 && f <= 65)
    {
        c = ((float) 5 / 9) * (f - 32);
        printf("%.2f\t %.2f\t\n", f, c);
        f ++;
    }
    return 0;
}