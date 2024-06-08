#include <stdio.h>
#define tf 32

int main()
{
    int n1, vet1[tf], i;
    scanf("%d", &n1);
    while (n1 != 'EOF' || n1 != 'eof')
    {
        for (i = 0; i < tf; i++)
        {
        	if (n1 < 2)
        		vet1[i] = 1;
        	else
	        	vet1[i] = n1 % 2;
	        	n1  = n1 / 2;
    	}
        
        for (i = 0; i < tf; i++)
        	printf("%d ", &vet1[i]);
        scanf("%d", &n1);
    }
    return 0;
}