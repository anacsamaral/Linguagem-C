#include <stdio.h>

int main() {
    int num, par = 0, impar = 0, cont = 0;
    
    while (cont < 132)
    {
        scanf("%d", &num);
        
        if (num % 2 == 0)
            par++;
        else
            impar++;
        
        cont++;
    }
    
    printf("%d numeros pares e %d numeros impares\n", par, impar);
    
    return 0;
}
