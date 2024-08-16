#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define TF 5
int main()
{
    int vetVoo[TF], vetLugar[TF], id, voo, i, pos;

    printf("### Cadastro de Voos ###\n");
    for(i = 0; i < TF; i++)
    {
        printf("Numero do %d Voo:\n", i+1);
        scanf("%d", &vetVoo[i]);
        printf("Qtd de Lugares:\n");
        scanf("%d", &vetLugar[i]);
    }

    printf("### Pedidos de Reserva ###\n");
    printf("Digite a identidade: [9999 para sair]\n");
    scanf("%d", &id);
    while(id != 9999)
    {
        system("cls");
        for (i = 0; i < TF; i++)
        {
            printf("Numero do Voo\t Lugares Disponiveis\n");
            printf("%d\t\t\t %d\n", vetVoo[i], vetLugar[i]);
        }
        printf("Digite qual voo deseja reservar:\n");
        scanf("%d", &voo);

        pos = 0;
        while(pos < TF && voo != vetVoo[pos])
            pos++;
        if (pos == TF)
            printf("Voo nao encontrado!\n");
        else
            if (vetLugar[pos] > 0)
            {
                printf("Identidade: %d, Voo: %d - [Reservado]\n", id, voo);
                vetLugar[pos] -= 1;
            }
            else
                printf("Nao ha lugares disponiveis para esse voo!\n");
        printf("Para nova reserva, digite a identidade:\n");
        scanf("%d", &id);
    }
    printf("Fim dos pedidos de reserva.\n");
    return 0;
}