#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#define TF 3
int main()
{
    int VetCod[TF], i, op, cod, pos;
    float VetSal[TF], valor, porc, soma;
    char VetCli[TF][30];

    for(i = 0; i < TF; i++)
    {
        printf("Cadastro do %do. cliente:\n", i+1);
        printf("Nome do cliente:\n");
        fflush(stdin);
        gets(VetCli[i]);
        printf("Codigo do cliente:\n");
        scanf("%d", &VetCod[i]);
        printf("Saldo do cliente:\n");
        scanf("%f", &VetSal[i]);
    }

    do
    {
        system("cls");
        soma = 0;
        printf("\n### M E N U ###\n");
        printf("[1] Efetuar Deposito\n");
        printf("[2] Efetuar Saque\n");
        printf("[3] Aplicar Juros\n");
        printf("[4] Consultar Ativo Bancario\n");
        printf("[5] Finalizar o Programa\n");
        scanf("%d", &op);

        switch (op)
        {
            case 1:
                printf("\nEfetuar Deposito\n");
                printf("Codigo da conta:\n");
                scanf("%d", &cod);
                printf("Valor do deposito:\n");
                scanf("%f", &valor);

                pos = 0;
                while(pos < TF && cod != VetCod[pos])
                    pos++;

                if(pos < TF)
                {
                    printf("Cliente: %s\n", VetCli[pos]);
                    printf("Saldo anterior:R$ %.2f\n", VetSal[pos]);
                    VetSal[pos] += valor;
                    printf("Saldo atualizado: R$ %.2f\n", VetSal[pos]);
                }
                else
                    printf("Conta nao encontrada!\n");
                getch();
                break;

            case 2:
                printf("\nEfetuar Saque\n");
                printf("Codigo da conta:\n");
                scanf("%d", &cod);
                printf("Valor do saque:\n");
                scanf("%f", &valor);

                pos = 0;
                while(pos < TF && cod != VetCod[pos])
                    pos++;

                if(pos < TF)
                {
                    if (valor > VetSal[pos])
                        printf("Saldo Insuficiente!\n");
                    else
                    {
                    printf("Cliente: %s\n", VetCli[pos]);
                    printf("Saldo anterior:R$ %.2f\n", VetSal[pos]);
                    VetSal[pos] -= valor;
                    printf("Saldo atualizado: R$ %.2f\n", VetSal[pos]);
                    }
                }
                else
                    printf("Conta nao encontrada!\n");
                getch();
                break;
            case 3:
                printf("Aplicar Juros\n");
                printf("Porcentagem: \n");
                scanf("%f", &porc);

                for (i = 0; i < TF; i++)
                    VetSal[i] = VetSal[i] * (1 + porc/100);
                getch();
                break;
            case 4:
                printf("Consultar Ativo Bancario:\n");
                for (i = 0; i < TF; i++)
                    soma += VetSal[i];
                printf("Total = R$ %.2f\n", soma);
                getch();
                break;
                
            default:
                break;
        }
    } 
    while(op != 5);
    
    return 0;
}
