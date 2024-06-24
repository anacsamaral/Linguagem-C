#include <stdio.h>
int main()
{
    int nLab, nMicro, RA, tempo, totalT, labMA, alunoMT, totalC, contA, menosTemp, labM, contH = 0, contM;
    float percM, percH;
    char sexo;
    totalT = 0;
    printf("Num do laboratorio: \n");
    scanf("%d", &nLab);
    while (nLab > 0)
    {
        totalC = labMA = contM = contA = 0;
        printf("Num. do micro:\n");
        scanf("%d", &nMicro);
        while (nMicro > 0)
        {
            totalC++;
            contA++;
            printf("RA do aluno:\n");
            scanf("%d", &RA);
            printf("Sexo:\n");
            fflush(stdin);
            scanf("%c", &sexo);
            printf("Tempo em minutos:\n");
            scanf("%d", &tempo);
            if (contA > labMA) // Item A
            {
                labMA = contA;
                labM = nLab;
            }
            if (contA == 1) // Item B
            {
                menosTemp = tempo;
                alunoMT = RA;
            }
            else 
                if (tempo < menosTemp) // Item B
                {
                    menosTemp = tempo;
                    alunoMT = RA;
                }
            if (sexo == 'F' || sexo == 'f')
                contM++; // Item C
            else
                contH++;
            totalT++;
            percM = (float)contM / totalC * 100; // Item C
            printf("Num micro: \n");
            scanf("%d", &nMicro);
        }
        printf("Aluno com menos tempo no Micro: %d\n", alunoMT); // Item B
        printf("Porcentagem de mulheres no lab: %.2f\n", percM); // Item C
        printf("Num. do lab:\n");
        scanf("%d", &nLab);
    }
    percH = (float)contH / totalT * 100;
    printf("O lab %d possui a maior quantidade de alunos.\n", labM);      // Item A
    printf("Porc. de homens entre todos os laboratorios: %.2f\n", percH); // Item D
    return 0;
}