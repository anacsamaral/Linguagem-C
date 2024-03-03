#include <stdio.h>
int main()
{
	int num1, num2;
	printf("Digite dois números:\n");
	scanf("%d %d", &num1, &num2);
	
	if(num1 > num2)
		printf("%d é maior", num1);
	else
		printf("%d é maior", num2);
	
	return 0;
}
