#include <stdio.h>

#define MAX_CIDADES 3
#define MAX_PERCURSO 24

int main() {
    int matrizDistancias[MAX_CIDADES][MAX_CIDADES], numCidades, codigoCidades[MAX_PERCURSO], numeroLinha, maiorLinha = 0, menorLinha = 0, maiorDistancia = 0, menorDistancia = __INT_MAX__;

    // Leitura da matriz de distâncias
    printf("Digite a matriz de distancias (30x30):\n");
    for (int i = 0; i < MAX_CIDADES; i++) {
        for (int j = 0; j < MAX_CIDADES; j++) {
            scanf("%d", &matrizDistancias[i][j]);
        }
    }

    // Processamento das linhas
    printf("\nDigite o número da linha (ou 9999 para terminar): ");
    scanf("%d", &numeroLinha);

    while (numeroLinha != 9999) {
        printf("Digite o número de cidades percorridas (máximo %d): ", MAX_PERCURSO);
        scanf("%d", &numCidades);

        printf("Digite os códigos das %d cidades percorridas (entre 1 e %d):\n", numCidades, MAX_CIDADES);
        for (int i = 0; i < numCidades; i++) {
            scanf("%d", &codigoCidades[i]);
        }

        // Cálculo da distância percorrida na linha
        int distanciaTotal = 0;
        for (int i = 0; i < numCidades - 1; i++) {
            int origem = codigoCidades[i] - 1;
            int destino = codigoCidades[i + 1] - 1;
            distanciaTotal += matrizDistancias[origem][destino];
        }

        printf("Distância total percorrida pela linha %d: %d km\n", numeroLinha, distanciaTotal);

        // Verificação de maior e menor distância
        if (distanciaTotal > maiorDistancia) {
            maiorDistancia = distanciaTotal;
            maiorLinha = numeroLinha;
        }

        if (distanciaTotal < menorDistancia) {
            menorDistancia = distanciaTotal;
            menorLinha = numeroLinha;
        }

        printf("\nDigite o número da linha (ou 9999 para terminar): ");
        scanf("%d", &numeroLinha);
    }

    // Resultados finais
    printf("\nLinha com maior distância (%d km): %d\n", maiorDistancia, maiorLinha);
    printf("Linha com menor distância (%d km): %d\n", menorDistancia, menorLinha);

    return 0;
}
