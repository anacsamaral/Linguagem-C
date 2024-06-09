#include <stdio.h>
int main()
{
    int numH = 0, numM = 0, cont = 0;
    float altura, alturaM = 0, maiorA, menorA, mediaAM, percH, percM, percDif;
    char sexo;
    printf("Altura:\n");
    scanf("%f", &altura);
    while (altura > 0 && cont < 50)
    {
        printf("Sexo: f - feminino e m - masculino\n");
        fflush(stdin);
        scanf("%c", &sexo);
        // Maior e menor altura
        if (cont == 0)
            menorA = maiorA = altura;
        else
        {
            if (altura > maiorA)
                maiorA = altura;
            if (altura < menorA)
                menorA = altura;
        }

        if (sexo == 'f')
        {
            numM++;
            alturaM += altura;
        }
        else
            numH++;

        cont++;
        printf("Altura:\n");
        scanf("%f", &altura);
    }
    // Média de altura das mulheres
    mediaAM = (float) alturaM / numM;
    // Diferença percentual homens e mulheres
    percH = (float) numH / cont * 100;
    percM = (float) numM / cont * 100;
    if (percH > percM)
        percDif = percH - percM;
    else
        percDif = percM - percH;

    //Exibiçã0
    printf("Maior Altura: %.2f\nMenor Altura: %.2f\n", maiorA, menorA);
    printf("Média de altura das mulheres: %.2f\n", mediaAM);
    printf("Número de homens: %d\n", numH);
    printf("Homens: %.1f%%\nMulheres: %.1f%%\nDiferença do percentual de homens e mulheres: %.1f%%", percH, percM, percDif);
    return 0;
}