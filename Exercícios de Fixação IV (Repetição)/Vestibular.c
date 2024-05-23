#include <stdio.h>
int main()
{
    int cod, nv, candf, candm, total = 0;
    float candv, percf, maiorcv = 0;
    printf("Cod do curso:\n");
    scanf("%d", &cod);
    printf("Num de vagas:\n");
    scanf("%d", &nv);
    printf("Num. de cand. do sexo masc. e fem. :\n");
    scanf("%d%d", &candm, &candf);
    while (candf > 0)
    {
        candv = (float) (candf + candm) / nv;
        percf = (float) candf / (candf + candm) * 100;
        printf("Cand/vaga: %.1f\n", candv);
        printf("Cand. do sexo fem: %.2f%%\n", percf);
        printf("Cod. do curso: %d\n", cod);

        if (candv > maiorcv)
            maiorcv = candv;
        
        printf("Maior num. de cand/vaga: %.1f\n", maiorcv);
        total += candf + candm;
        printf("Total de candidatos: %d\n", total);
        printf("\n");
        printf("Cod do curso:\n");
        scanf("%d", &cod);
        printf("Num de vagas:\n");
        scanf("%d", &nv);
        printf("Num. de cand. do sexo masc. e fem. :\n");
        scanf("%d%d", &candm, &candf);
    }
    return 0;
}