#include <stdio.h>
#define tf 50
int main()
{
    int vetCod[tf], vetAnos[tf], tl = 0, op, pos, cod, i;
    float vetSal[tf];
    char vetFunc[tf];
    printf("1 - Cadastrar\n2 - Excluir\n0 - Sair\n");
    scanf("%d", &op);
    while (op != 0)
    {
        if (op == 1)
        {
            if (tl < tf) // Tem espaço no vetor? V = tem, F = não tem
            {
                printf("Cod para inserir:\n");
                scanf("%d", &cod);

                //Busca a posição para inserir o código
                pos = 0;
                while (pos < tl && cod > vetCod[pos])
                    pos++;
                if (pos == tl && cod != vetCod[pos]) //Não achou
                {
                    //Remanejamento
                    for (i = tl; i > pos; i--)
                    {
                        vetCod[i] = vetCod[i - 1];
                        vetFunc[i] = vetFunc[i - 1];
                        vetSal[i] = vetSal[i - 1];
                        vetAnos[i] = vetAnos[i - 1];
                    }
                    //Inserir dados
                    vetCod[pos] = cod;
                    printf("Inicial do nome:\n");
                    scanf(" %c", &vetFunc[pos]);
                    printf("Salario:\n");
                    scanf("%f", &vetSal[pos]);
                    printf("Anos de empresa:\n");
                    scanf("%d", &vetAnos[pos]);
                    tl++;
                }
                else
                    printf("Codigo inexistente\n");
            }
            else
                printf("Nao tem espaco!\n");
        }
        else
        {
            if(op == 2)
            {
                printf("Codigo para excluir:\n");
                scanf("%d", &cod);
                
                //Busca para excluir
                pos = 0;
                while (pos < tl && cod != vetCod[pos])
                    pos++;
                if (pos < tl) //Achou!
                {
                    //Remanejamento
                    for(i = pos; i < tl - 1; i++)
                    {
                        vetCod[i] = vetCod[i + 1];
                        vetFunc[i] = vetFunc[i + 1];
                        vetSal[i] = vetSal[i + 1];
                        vetAnos[i] = vetAnos[i + 1];
                    }
                    tl--;
                }
                else
                    printf("Codigo nao encontrado\n");
            }
            printf("1 - Cadastrar\n2 - Excluir\n0 - Sair\n");
            scanf("%d", &op);
        }
    }
    printf("Funcionarios que nao terao direito ao aumento:\n");
    for (i = 0; i < tl; i++)
    {
        if (vetAnos[i] <= 5 && vetSal[i] >= 200)
            printf("%d\t  %c\n", vetCod[i], vetFunc[i]);
    }
    printf("Funcionarios que terao direito a aumento:\n");
    for (i = 0; i < tl; i++)
    {
        if (vetAnos[i] > 5 && vetSal[i] < 200)
        {
            printf("%d\t%c\tNovo Salario = R$%.2f(35%%)\n", vetCod[i], vetFunc[i], vetSal[i] * 1.35);
        }
        else
            if (vetAnos[i] > 5)
            {
                printf("%d\t%c\tNovo Salario = R$%.2f (25%%)\n", vetCod[i], vetFunc[i], vetSal[i] * 1.25);
            }
            else
                printf("%d\t%c\tNovo Salario = R$%.2f (15%%)\n", vetCod[i], vetFunc[i], vetSal[i] * 1.15);
    }
    return 0;
}