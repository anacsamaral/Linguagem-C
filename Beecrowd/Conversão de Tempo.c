#include <stdio.h>
int main(){
    int hora, seg, min;
    scanf("%d", &seg);

        hora = seg / 3600;
        seg = seg % 3600;
        min = seg / 60;
        seg = seg % 60;

    printf("%d:%d:%d", hora, min, seg);

    return 0;
}