#include <stdio.h>
int main()
{
	int num, den, resto;
	printf("Digite  o numerador e o denominador:\n");
	scanf("%d%d", &num, &den);
	resto = num % den;
	printf("O resto da divis�o � = %d", resto);
	
	return 0;
}
