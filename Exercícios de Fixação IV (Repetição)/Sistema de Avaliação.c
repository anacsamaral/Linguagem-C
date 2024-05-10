#include <stdio.h>
int main()
{
    int matr, contA = 0, freq, rep = 0, repF = 0;
    float n1, n2, n3, notaF, maior = 0, menor = 10, soma = 0, media, porc;
    printf("Matricula do %do. aluno:\n", contA + 1);
    scanf("%d", &matr);
    while (matr > 0)
    {
        printf("Digite as 3 notas:\n");
        scanf("%f%f%f", &n1, &n2, &n3);
        printf("Digite a frequencia:\n");
        scanf("%d", &freq);
        notaF = (n1 + n2 + n3) / 3;
        printf("Nota final:%.2f\n", notaF);
        if (contA == 0)
        {
            maior = notaF;
            menor = notaF;
        }
        else
        {
            if (notaF > maior)
                maior = notaF;
            if (notaF < menor)
                menor = notaF;
        }
        soma += notaF;
        if (notaF < 6.0 || freq < 40)
            rep++;
        else
            repF++;
        contA++;
        printf("Digite a matricula do %do. aluno:\n", contA + 1);
        scanf("%d", &matr);
    }
    media = (float)soma / contA;
    printf("Maior nota: %.1f\nMenor nota: %.1f\n", maior, menor);
    printf("Media da turma: %.1f", media);
    printf("Total de alunos reprovados: %d\n", rep);
    porc = (float)repF / contA * 100;
    printf("%.2f dos alunos da turma reprovaram por falta\n", porc);

    return 0;
}