#include <stdio.h>
int main()
{
    int andarMa = 0, contA = 0, contB = 0, contC = 0, contM = 0, contV = 0, contN = 0, andar, menosU, maisU, cont = 0, totP;
    float porc_mais_usado, porc_menos_usado, porc_Dif;
    char elevador, periodo;
    printf("Elevador que utilizava com maior frequencia: A, B ou C? S - Sair\n");
    scanf("%c", &elevador);
    while (elevador != 'S')
    {
        printf("Qual andar se dirigia?\n");
        scanf("%d", &andar);
        printf("Periodo que utilizava: M - Matutino, V - Vespertino ou N - Noturno?\n");
        fflush(stdin);
        scanf("%c", &periodo);
        cont++;

        // Andar Maior
        if (cont == 1)
            andarMa = andar;
        else
            if (andar > andarMa)
                andarMa = andar;
        //Contagem dos tipos de elevador
        switch (elevador)
        {
            case 'A':
                contA++;
                break;
            case 'B':
                contB++;
                break;
            case 'C':
                contC++;
                break;
            default:
                break;
        }
        //Contagem dos tipos de periodo
        switch (periodo)
        {
            case 'M':
                contM++;
                break;
            case 'V':
                contV++;
                break;
            case 'N':
                contN++;
                break;
            default:
                break;
        }
        printf("Elevador que utilizava com maior frequencia: A, B ou C? S - Sair\n");
        fflush(stdin);
        scanf("%c", &elevador);
    }
    printf("Andar mais alto utilizado: %d\n", andarMa);

    //Elevador mais frequentado
    if (contA > contB)
    {
        if (contA > contC)
            printf("O elevador A foi o mais frequentado\n");
    }
    else if (contB > contC)
        printf("O elevador B foi o mais frequentado\n");
    else
        printf("O elevador C foi o mais frequentado\n");
    
    //Periodo Mais Utilizado
    if (contM > contV)
    {
        if (contM > contN)
        {
            printf("Horario mais frequentado: Matutino\n");
            maisU = contM;
        }
    }
    else if (contV > contN)
    {
        printf("Horario mais frequentado: Vespertino\n");
        maisU = contV;
    }
    else
    {
        printf("Horario mais frequentado: Noturno\n");
        maisU = contN;
    }

    totP = contM + contV + contN;
    //Porcentagem mais usado
    porc_mais_usado = (float) maisU / totP * 100;

    //Periodo Menos utilizado
    if (contM < contV)
    {
        if (contM < contN)
            menosU = contM;
    }
    else if (contV < contN)
        menosU = contV;
    else
        menosU = contN;
    //Porcentagem menos usado
    porc_menos_usado = (float) menosU / totP * 100;
    //Diferença mais usado e menos usado
    porc_Dif = porc_mais_usado - porc_menos_usado;
    printf("Dif. de percentual entre o horario mais usado e o menos usado: %.2f%%\n", porc_Dif);

    return 0;
}