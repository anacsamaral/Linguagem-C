#include <stdio.h>

#define TF 3

int main()
{
	int Mat[TF][TF], l, c, mElem = 0;
	
	for(l = 0; l < TF; l++)
		for(c = 0; c < TF; c++)
		{
			printf("\nDigite um novo elemento: ");
			scanf("%d", &Mat[l][c]);
			if(Mat[l][c] > mElem)
				mElem = Mat[l][c];
		}
	printf("\nO maior elemento da matriz eh o numero %d\n", mElem);
	return 0;
}
