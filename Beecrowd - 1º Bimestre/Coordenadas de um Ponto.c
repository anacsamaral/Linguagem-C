#include <stdio.h>

int main(){
    double eixoX, eixoY;

    scanf("%lf %lf", &eixoX, &eixoY);

    if(eixoX > 0.0)
    {
        if(eixoY > 0.0)
            printf("Q1\n");
        else if(eixoY < 0.0)
            printf("Q4\n");
        else
            printf("Eixo X\n");
    }
    else if(eixoX < 0.0)
    {
        if(eixoY > 0.0)         
            printf("Q2\n");
        else if(eixoY < 0.0)    
            printf("Q3\n");
        else                
            printf("Eixo X\n");
    }
    else
    {
        if(eixoY > 0.0)         
            printf("Eixo Y\n");
        else if(eixoY < 0.0)    
            printf("Eixo Y\n");
        else                
            printf("Origem\n");
    }

    return 0;
}