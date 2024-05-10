#include <stdio.h>
int main()
{
    int i, j;
    float H = 0;
    for (i = 1, j = 1; i < 100 && j < 51; i += 2, j++)
    {
        H += i / j;
        printf("H = %d/%d\n", i, j);
    }
    printf("=================================\n");
    printf("TOTAL DE H = %.2f\n", H);

    return 0;
}