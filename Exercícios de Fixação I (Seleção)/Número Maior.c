#include <stdio.h>
int main()
{
	int num1, num2;
	printf("Digite dois n�meros:\n");
	scanf("%d %d", &num1, &num2);
	
	if(num1 > num2)
		printf("%d � maior", num1);
	else
		printf("%d � maior", num2);
	
	return 0;
}
