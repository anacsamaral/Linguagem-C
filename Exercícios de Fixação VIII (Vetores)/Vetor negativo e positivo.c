#include <stdio.h>
#define tf 4

int main() {
    int vet1[tf], vet2[tf], i, j, temp;

    // Leitura do vetor vet1
    for (i = 0; i < tf; i++) {
        printf("Digite o %do. número do vetor:\n", i + 1);
        scanf("%d", &vet1[i]);
    }

    // Cópia de vet1 para vet2
    for (i = 0; i < tf; i++) {
        vet2[i] = vet1[i];
    }

    // Ordenação do vetor vet2 usando Bubble Sort. O Bubble Sort foi implementado corretamente com dois laços. O laço externo controla o número de passagens, e o laço interno compara e troca elementos adjacentes.
    for (i = 0; i < tf - 1; i++) {
        for (j = 0; j < tf - i - 1; j++) {
            if (vet2[j] > vet2[j + 1]) {
                // Troca de elementos
                temp = vet2[j];
                vet2[j] = vet2[j + 1];
                vet2[j + 1] = temp;
            }
        }
    }
    // Exibição dos vetores vet1 e vet2
    printf("Vetor original (vet1):\n");
    for (i = 0; i < tf; i++) {
        printf("%d ", vet1[i]);
    }
    printf("\n");
    printf("Vetor ordenado (vet2):\n");
    for (i = 0; i < tf; i++) {
        printf("%d ", vet2[i]);
    }
    return 0;
}
