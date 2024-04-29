#include <stdio.h>
int main()
{
    int ang;
    printf("Digite o angulo:\n");
    scanf("%d", &ang);

    while (ang >= -360 && ang <= 360)
    {
        if (ang < 0)
            ang = ang * -1;

        if (ang >= 0 && ang <= 90)
            printf("1 Quadrante\n");
        else if (ang >= 91 && ang <= 180)
            printf("2 Quadrante\n");
        else if (ang >= 181 && ang <= 270)
            printf("3 Quadrante\n");
        else
            printf("4 Quadrante\n");

        printf("Digite outro angulo:\n");
        scanf("%d", &ang);
    }
    printf("angulo maior que 360.\n");
}