#include <stdio.h>
#include <string.h>

#define TFP 4
#define TFA 4

int main()
{
	int l, c, MaiorEst, MenorEst, quant, MatEst[TFA][TFP], maiorA, menorA;
	float CustoTotP, CustoTotA, VetCusto[TFP];
	char VetProduto[TFP][20];
	
	for(c = 0; c < TFP; c++)
	{
		printf("\n%do Produto: ", c + 1);
		fflush(stdin);
		gets(VetProduto[c]);
		
		for(l = 0; l < TFA; l++)
		{
			printf("\nEstoque no Armazem %d: ", l + 1);
			scanf("%d", &MatEst[l][c]);
		}
		printf("\nCusto: "); scanf("%f", &VetCusto[c]);
		printf("\n=====================================\n");
	}
	
	for(l = 0; l < TFA; l++)
	{
		quant = 0;
		for(c = 0; c < TFP; c++)
			quant += MatEst[l][c];
		printf("\nQuantidade de itens do armazem [%d]: %d unidades", l + 1, quant);
	}
	
	MaiorEst = MatEst[l][1];
	if (l == TFA)
		maiorA = l;
	else
		maiorA = l+1;
		
	MenorEst = MatEst[l][3];
	if (l == TFA)
		menorA = l;
	else
		menorA = l+1;
	
	for(l = 0; l < TFA; l++)
	{
		c = 1;
		if(MatEst[l][c] > MaiorEst)
		{
			MaiorEst = MatEst[l][c];
			maiorA = l+1;
		}
	}
	printf("\nO Armazem %d tem o maior estoque do produto %s [2].", maiorA, VetProduto[c]);
	
	for(l = 0; l < TFA; l++)
	{
		c = 3;
		if(MatEst[l][c] < MenorEst)
		{
			MenorEst = MatEst[l][c];
			menorA = l+1;
		}
	}
	printf("\nO Armazem %d tem o menor estoque do produto %s [4].", menorA, VetProduto[c]);
	
	for(c = 0; c < TFP; c++)	
	{
		CustoTotP = 0; quant = 0;
		for(l = 0; l < TFA; l++)
			quant += MatEst[l][c];
		CustoTotP = quant * VetCusto[c];
		printf("\nO custo total do produto %s eh: R$ %.2f", VetProduto[c], CustoTotP);
	}
	
	for(l = 0; l < TFA; l++)
	{
		CustoTotA = 0;
		for(c = 0; c < TFP; c++)
			CustoTotA += MatEst[l][c] * VetCusto[c];
		printf("\nO custo total do armazem %d eh: R$ %.2f", l+1, CustoTotA);
	}
	
	return 0;
}



