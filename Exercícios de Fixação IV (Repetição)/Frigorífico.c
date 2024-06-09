#include <stdio.h>
int main()
{
    int id, maior_id, menor_id, cont = 0;
    float peso, maiorP, menorP;
    printf("Numero de identificacao:\n");
    scanf("%d", &id);
    while (id > 0 && cont < 90)
    {
        printf("Digite o peso do boi:\n");
        scanf("%f", &peso);

        if (cont == 0)
        {
            menorP = maiorP = peso;
            menor_id = maior_id = id;
        }
        else
        {
            if (peso < menorP)
            {
                menorP = peso;
                menor_id = id;
            }
            if (peso > maiorP)
            {
                maiorP = peso;
                maior_id = id;
            }
        }
        cont++;
        printf("Numero de identificacao:\n");
        scanf("%d", &id);
    }
    printf("Boi mais gordo: %d, peso: %.1f\n", maior_id, maiorP);
    printf("Boi mais magro: %d, peso: %.1f\n", menor_id, menorP);

    return 0;
}