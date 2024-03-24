#include <stdio.h>
#include <math.h>
int main()
{
    int soma, n1, n2;
    float raiz, num;
    char escolha;

    printf("Escolha uma das opções:\n s - soma\n r - raiz quadrada\n f - finalizar\n");
    scanf("%c", &escolha);
    
    if (escolha == 's'){
       printf("Digite os dois numeros que serao somados:\n");
       scanf("%d%d", &n1, &n2);
       soma = n1 + n2;
       printf("A soma é: %d\n", soma);
    }

    if (escolha == 'r'){
        printf("Digite o numero que deseja saber a raiz:\n");
        scanf("%f", &num);
        raiz = sqrt(num);
        printf("A raiz de %f é %.2f\n", num, raiz);
    }

    if (escolha == 'f')
        printf("====Calculadora Finalizada====\n");

    return 0;
}