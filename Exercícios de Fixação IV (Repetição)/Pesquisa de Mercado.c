#include <stdio.h>
int main()
{
    int i, conts=0, contn=0, contfs=0, contmn=0;
    float percF, percM;
    char sexo, resp;
    for (i = 0; i < 10; i++)
    {
        printf("Sexo:\n");
        scanf("%c", &sexo);
        fflush(stdin);
        printf("Gostou do novo produto?:\n S - sim, N - nao\n");
        scanf("%c", &resp);
        fflush(stdin);
        if (resp == 'S' || resp == 's')
        {
            conts++;
            if ((resp == 'S' || resp == 's') && (sexo == 'f' || sexo == 'F'))
                contfs++;
        }
        else if(resp == 'N' || resp == 'n')
        {
            contn++;
            if ((resp == 'N' || resp == 'n') && (sexo == 'm' || sexo == 'M'))
                contmn++;   
        }
    }
    printf("Qtd. de pessoas que responderam 'sim': %d\n", conts);
    printf("Qtd. de pessoas que responderam 'nao': %d\n", contn);
    percF = (float)contfs/i * 100;
    percM = (float)contmn/i * 100;
    printf("Porc. de mulheres que responderam 'sim': %.2f\n", percF);
    printf("Porc. de homens que responderam 'nao': %.2f\n", percM);

    return 0;
}