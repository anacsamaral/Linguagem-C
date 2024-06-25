#include <stdio.h>
int main()
{
    int cont = 0, quant, contme10 = 0, entre1020 = 0, contma20 = 0;
    printf("Qtas refeicoes voce fez no mes anterior?\n");
    scanf("%d", &quant);
    while (quant > 0)
    {
        cont++;
        if (quant < 10)
            contme10++;
        else if (quant >= 10 && quant <= 20)
            entre1020++;
        else
            contma20++;
        printf("Qtas refeicoes voce fez no mes anterior?\n");
        scanf("%d", &quant);
    }
    printf("Alunos entrevistados: %d\n", cont);
    printf("Menos de 10 refeicoes no mes: %d alunos\n", contme10);
    printf("Entre 10 e 20 refeicoes no mes: %d alunos\n", entre1020);
    printf("Mais de 20 refeicoes no mes: %d alunos", contma20);
    return 0; 
}