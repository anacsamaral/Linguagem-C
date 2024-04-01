#include <stdio.h>

int main() {
    int hora_inicial, min_inicial, hora_final, min_final, horas, minutos;
    scanf("%d %d %d %d", &hora_inicial, &min_inicial, &hora_final, &min_final);

    minutos = (hora_final * 60 + min_final) - (hora_inicial * 60 + min_inicial);

    if (minutos <= 0)
        minutos += 24 * 60;

    horas = minutos / 60;
    minutos = minutos % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}