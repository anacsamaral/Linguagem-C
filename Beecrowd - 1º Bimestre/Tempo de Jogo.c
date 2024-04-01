#include <stdio.h>
int main()
{
    int hora_inicial, hora_final, tempo;
    scanf("%d %d", &hora_inicial, &hora_final);
    if (hora_inicial > hora_final)
    {
        tempo = 24 - hora_inicial;
        tempo = tempo + hora_final;
        printf("O JOGO DUROU %d HORA(S)\n", tempo);
    }
    else
    {
        if (hora_final > hora_inicial)
        {
            tempo = hora_final - hora_inicial;
            printf("O JOGO DUROU %d HORA(S)\n", tempo);
        }
        else
            printf("O JOGO DUROU 24 HORA(S)\n");
    }

    return 0;
}