#include <stdio.h>
int main()
{
    int ht, dp, he;
    float sm, sr, val_ht, sal_mes, sb, imp, sal_liq, gratif, val_dp, total_he;
    printf("Salario minimo:\n");
    scanf("%f", &sm);
    while (sm > 0)
    {
        printf("Horas trabalhadas:\n");
        scanf("%d", &ht);
        printf("Dependentes:\n");
        scanf("%d", &dp);
        printf("Horas extras:\n");
        scanf("%d", &he);
        val_ht = sm * 1/5;
        sal_mes = ht * val_ht;
        val_dp = dp * 32.00;
        total_he = (val_ht * 0.50)* he;
        sb = sal_mes + val_dp + total_he;
        if (sb < 200.00)
            imp = 0.00;
        else if (sb >= 200.00 && sb <= 500.00)
            imp = 0.10 * sb;
        else
            imp = 0.20 * sb;
        sal_liq = sb - imp;
        if (sal_liq <= 350.00)
            gratif = 100.00;
        else 
            gratif = 50.00;
        sr = sal_liq + gratif;
        printf("Salario liquido: R$%.2f\n", sr);

        printf("Digite outro salario minimo: \n");
        scanf("%f", &sm);
    }
    return 0;
}