#include <stdio.h>
int main()
{
    int ang;
    printf("Digite o angulo:\n");
    scanf("%d", &ang);

    while (ang >= -360)
    {
        if (ang < 0)
            ang = ang * -1;
    }
}