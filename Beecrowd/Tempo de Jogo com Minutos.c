#include <stdio.h>
int main()
{
    int hora_inicial, min_inicial, hora_final, min_final, horas, minutos;
    scanf("%d %d %d %d", &hora_inicial, &min_inicial, &hora_final, &min_final);

    if (hora_inicial < hora_final && min_inicial < min_final)
    {
        horas = hora_final - hora_inicial;
        minutos = min_final - min_inicial;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    }

    else if (hora_inicial == hora_final && min_inicial == min_final)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    
    else
    {
        minutos = min_inicial - min_final;
        horas = (hora_final - hora_inicial) * 60;
        minutos = horas - minutos;
        printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", horas, minutos);
    }

    return 0; 
}