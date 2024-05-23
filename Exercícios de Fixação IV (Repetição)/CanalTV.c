#include <stdio.h>
int main()
{
    int canal, numP, soma4 = 0, soma5 = 0, soma7 = 0, soma12 = 0, somaT = 0, somaC = 0, cont4 = 0, cont5 = 0, cont7 = 0, cont12 = 0;
    float porc4, porc5, porc7, porc12, porcQ, porcC, porcS, porcD;
    printf("Num. do canal (4, 5, 7 ou 12):\n");
    scanf("%d", &canal);
    while (canal > 0)
    {
        printf("Num. de pessoas que estão assistindo:\n");
        scanf("%d", &numP);
        switch (canal)
        {
        case 4:
            cont4++;
            soma4 += numP;
            break;
        case 5:
            cont5++;
            soma5 += numP;
            break;
        case 7:
            cont7++;
            soma7 += numP;
            break;
        case 12:
            cont12++;
            soma12 += numP;
            break;
        default:
            break;
        }
        printf("Num. do canal:\n");
        scanf("%d", &canal);
    }
    somaT = soma4+soma5+soma7+soma12;
    somaC = cont4+cont5+cont7+cont12;
    porc4 = (float) soma4/somaT * 100;
    porc5 = (float) soma5/somaT * 100;
    porc7 = (float) soma7/somaT * 100;
    porc12 = (float) soma12/somaT * 100;
    porcQ = (float) cont4/somaC * 100;
    porcC = (float) cont5/somaC * 100;
    porcS = (float) cont7/somaC * 100;
    porcD = (float) cont12/somaC * 100;

    printf("====PORCENTAGEM DE AUDIENCIA====\n Emissora 4: %.2f\n Emissora 5: %.2f\n Emissora 7: %.2f\n Emissora 12: %.2f\n", porc4, porc5, porc7, porc12);
    printf("====PORCENTAGEM DO TOTAL====\n");
    printf("Canal 4: %.2f\n", porcQ);
    printf("Canal 5: %.2f\n", porcC);
    printf("Canal 7: %.2f\n", porcS);
    printf("Canal 12: %.2f\n", porcD);

    return 0;
}