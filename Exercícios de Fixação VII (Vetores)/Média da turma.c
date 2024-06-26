#include <stdio.h>
#define tf 3
int main()
{
    int i, tl = 0, medME = 0, aprov = 0, reprov = 0;
    float vet1[tf], vet2[tf], vetM[tf], soma = 0, med;
    for (i = 0; i < tf && i >= 0; i++)
    {
        printf("Digite as notas da 1a. prova:\n");
        scanf("%f", &vet1[i]);
    }
    for (i = 0; i < tf && i >= 0; i++)
    {
        printf("Digite as notas da 2a. prova:\n");
        scanf("%f", &vet2[i]);
        tl++;
    }
    for (i = 0; i < tl; i++)
    {
        vetM[i] = (vet1[i] + vet2[i]) / 2;
        soma += vetM[i];
    }
    med = soma / tl;
    for (i = 0; i < tl; i++)
    {
        if (vetM[i] < med)
            medME++;
        if (vetM[i] >= 7)
            aprov++;
        else
            reprov++;
    }
    printf("Media da turma: %.1f\n", med);
    printf("Aprovados: %d\nReprovados: %d\n", aprov, reprov);
    printf("Qtd. de alunos com media abaixo da media geral da turma: %d\n", medME);
    return 0;
}