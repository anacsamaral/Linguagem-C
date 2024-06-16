#include <stdio.h>
#define TF 5
int main()
{
    int vet1[TF], vet2[TF], vUniao[TF*2], TLU = 0, TLI = 0, vIntersec[TF], i, pos;

    for (i = 0; i < TF; i++)
    {
        printf("%do. valor do vet1: ", i+1);
        scanf("%d", &vet1[i]);
    }
    for (i=0; i<TF; i++)
    {
        printf("%do. valor do vet2: ", i+1);
        scanf("%d", &vet2[i]);
    }
    //União dos 2 vetores
    for (i=0; i<TF; i++)
    {
        //Verificando se o valor vet1[i] está no nUniao
        pos = 0;
        while  (pos < TLU && vet1[i] != vUniao[pos])
            pos++;
        //Se não achou, insere!
        if (pos == TLU)
        {
            vUniao[TLU] = vet1[i];
            TLU++;
        }

    }
    for (i = 0; i < TF; i++)
    {
        //Verificando se o valor vet2[i] está no nUniao
        pos = 0;
        while  (pos < TLU && vet2[i] != vUniao[pos])
            pos++;
        //Se não achou, insere!
        if (pos == TLU)
        {
            vUniao[TLU] = vet2[i];
            TLU++;
        }
    }
    //Exibindo o vUniao, que é a união dos vetores vet1 e vet2
    for (i = 0; i < TLU; i++)
        printf("%d, ",vUniao[i]);
    //Interseção
    //Verificando se o valor no vet1 está no vet2
    for (i=0; i<TF; i++)
    {
        pos = 0;
        while (pos < TF && vet1[i] != vet2[pos])
            pos++;
        //Não achou, insere!
        if (pos < TF)
        {
            pos = 0;
            while (pos < TLI && vet1[i] != vIntersec[pos])
                pos++;
            if (pos == TLI)
            {
                vIntersec[TLI] = vet1[i];
                TLI++;
            }
        }
    }
    printf("\n");
    for (i = 0;i < TLI; i++)
        printf("%d, ",vIntersec[i]);

    return 0;
}