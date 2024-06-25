#include <stdio.h>
int main()
{
    int entrev = 0, id, conts = 0, contn = 0, conti = 0, contms = 0, conthn = 0, conth23s = 0, contm23n = 0;
    float percn;
    char sexo, resp;
    printf("Idade:\n");
    scanf("%d", &id);
    while (id > 0)
    {
        printf("Sexo:\n");
        fflush(stdin);
        scanf("%c", &sexo);
        printf("Gostou do novo produto? (S - Sim, N - Não, I - Indiferente)\n");
        scanf(" %c", &resp);
        entrev++;
        if (resp == 's' || resp == 'S')
        {
            conts++;
            if (sexo == 'f' || sexo == 'F')
                contms++;
        }
        else if (resp == 'n' || resp == 'N')
        {
            contn++;
            if (sexo == 'm' || sexo == 'M')
                conthn++;
        }
        else
            conti++;
        if (sexo == 'm' && id <= 23)
            conth23s++;
        else if (sexo == 'f' && id <= 23)
            contm23n++;
        printf("Idade:\n");
        scanf("%d", &id);
    }
    percn = (float) contn / entrev * 100;
    printf("Pessoas entrevistadas: %d\n", entrev);
    printf("Pessoas que disseram sim: %d\n", conts);
    printf("Pessoas que disseram nao: %d\n", contn);
    printf("Pessoas que foram indiferentes: %d\n", conti);
    printf("%.2f%% dos entrevistados disseram nao estar gostando do novo produto\n", percn);
    printf("Mulheres que disseram sim: %d\n", contms);
    printf("Homens que disseram nao: %d\n", conthn);
    printf("Homens de ate 23 anos que disseram sim: %d\n", conth23s);
    printf("Mulheres de ate 23 anos que disseram nao: %d\n", contm23n);
    return 0;
}