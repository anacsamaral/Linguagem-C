#include <stdio.h>
int main()
{
    int cod;
    float sal;
    printf("Digite o salario:\n");
    scanf("%f", &sal);
    printf("Digite o codigo:\n 1 - Escrituario:\n 2 - Secretario\n 3 - Caixa\n 4 - Gerente\n 5 - Diretor\n");
    scanf("%d", &cod);
    while (cod > 0)
    {
        switch (cod)
        {
            case 1:
                printf("Escrituario\n");
                printf("Reajuste de 50%%\n");
                printf("Salario reajustado: R$%.2f\n", sal + sal * 0.5);
                break;
            case 2:
                printf("Secretario\n");
                printf("Reajuste de 35%%\n");
                printf("Salario reajustado: R$%.2f\n", sal + sal * 0.35);
                break;
            case 3:
                printf("Caixa\n");
                printf("Reajuste de 20%%\n");
                printf("Salario reajustado: R$%.2f\n", sal + sal * 0.2);
                break;
            case 4:
                printf("Gerente\n");
                printf("Reajuste de 10%%\n");
                printf("Salario reajustado: R$%.2f\n", sal + sal * 0.1);
                break;
            case 5:
                printf("Diretor\n");
                printf("Nao tem reajuste salarial\n");
                printf("Salario: R$%.2f\n", sal);
                break;
            default:
                break;
        }
        printf("Digite o salario:\n");
        scanf("%f", &sal);
        printf("Digite o codigo:\n 1 - Escrituario:\n 2 - Secretario\n 3 - Caixa\n 4 - Gerente\n 5 - Diretor\n");
        scanf("%d", &cod);
    }
    return 0;
}