#include <stdio.h>
int main()
{
    int idade, mes, dia, hora, min;
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    mes = idade * 12;
    dia = idade * 365;
    hora = idade * 365 * 24;
    min = idade * 365 * 24 * 60;
    printf("Voce tem em meses: %d\n", mes);
    printf("Voce tem em dias: %d\n", dia);    
    printf("Voce tem em horas: %d\n", hora);    
    printf("Voce tem em minutos: %d\n", min);

    return 0;
}