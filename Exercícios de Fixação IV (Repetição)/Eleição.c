#include <stdio.h>
int main()
{
    int voto, c1=0, c2=0, c3=0, c4=0, cn=0, cb=0, i=0;
    float percb, percn;
    printf("1 - Cand. 1\n2 - Cand. 2\n3 - Cand. 3\n4 - Cand.; 4\n");
    printf("5 - Voto nulo\n6 - Voto em branco\n0 - finalizar\n");
    scanf("%d", &voto);
    while (voto > 0)
    {
        i++;
        switch (voto)
        {
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;
        case 5:
            cn++;
            break;
        case 6:
            cb++;
            break;
        default:
            break;
        }
        printf("1 - Cand. 1\n2 - Cand. 2\n3 - Cand. 3\n4 - Cand.; 4\n");
        printf("5 - Voto nulo\n6 - Voto em branco\n0 - finalizar\n");
        scanf("%d", &voto);
    }
    percb = (float)cb/i*100;
    percn = (float)cn/i*100;
    printf("Cand. 1: %d votos\nCand. 2: %d votos\nCand. 3: %d votos\nCand. 4: %d votos\n", c1, c2, c3, c4);
    printf("%d votos nulos\n%d votos em branco\n", cn, cb);
    printf("%.2f%% dos votos são nulos\n %.2f%% dos votos são em branco\n", percb, percn);

    return 0;
}