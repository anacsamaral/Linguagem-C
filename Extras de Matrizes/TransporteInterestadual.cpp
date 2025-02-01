#include <stdio.h>
#include <limits.h>

#define MAX_CIDADES 3
#define MAX_PERCURSO 5

int main() 
{
    int matrizDistancias[MAX_CIDADES][MAX_CIDADES], linha, numCidades, cidadesPercorridas[MAX_PERCURSO], maiorDistancia, menorDistancia, linhaMaiorDistancia, linhaMenorDistancia, i, j, distanciaTotal, origem, destino;

    maiorDistancia = 0;
    menorDistancia = INT_MAX;

    // a) Leitura da matriz de distancias
    printf("Insira a matriz de distancias (%dx%d):\n", MAX_CIDADES, MAX_CIDADES);
    for (i = 0; i < MAX_CIDADES; i++)
        for (j = 0; j < MAX_CIDADES; j++)
            scanf("%d", &matrizDistancias[i][j]);

    printf("\nInsira o numero da linha (9999 para encerrar): ");
    scanf("%d", &linha);

    while (linha != 9999) 
    {
        // b) Leitura de uma linha de onibus e calculo da distancia total
        printf("Insira o numero de cidades percorridas: ");
        scanf("%d", &numCidades);

        printf("Insira os codigos das cidades percorridas (0 a %d): ", MAX_CIDADES - 1);
        for (i = 0; i < numCidades; i++)
            scanf("%d", &cidadesPercorridas[i]);

        distanciaTotal = 0;
        for (i = 0; i < numCidades - 1; i++)
        {
            origem = cidadesPercorridas[i];
            destino = cidadesPercorridas[i + 1];
            distanciaTotal += matrizDistancias[origem][destino];
        }

        printf("Distancia total da linha %d: %d km\n", linha, distanciaTotal);

        // Atualizacao das linhas de maior e menor distancia
        if (distanciaTotal > maiorDistancia)
        {
            maiorDistancia = distanciaTotal;
            linhaMaiorDistancia = linha;
        }

        if (distanciaTotal < menorDistancia)
        {
            menorDistancia = distanciaTotal;
            linhaMenorDistancia = linha;
        }

        printf("\nInsira o numero da linha (9999 para encerrar): ");
        scanf("%d", &linha);
    }

    // c) Exibicao das linhas de maior e menor distancia
    printf("\nLinha com maior distancia: %d (%d km)\n", linhaMaiorDistancia, maiorDistancia);
    printf("Linha com menor distancia: %d (%d km)\n", linhaMenorDistancia, menorDistancia);

    return 0;
}
