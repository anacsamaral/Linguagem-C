#include <stdio.h>
int main()
{
	int num1, num2;
	printf("Digite dois numeros:\n");
	scanf("%d %d", &num1, &num2);
	
	if(num1 > num2)
		printf("%d eh maior", num1);
	else
		printf("%d eh maior", num2);
	
	return 0;
}
