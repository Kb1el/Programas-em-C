#include <stdio.h>
void imprimeValores(int valores[]) //MATRIZ SEM DIMENS�O
{
	for (int controle = 0; controle < 5; controle++)
	{
		printf("\n Valor da ocorr�ncia %d = %d ",controle, valores[controle]);
	}
}
int main(void)
{
	printf("\n *Exemplo par�metro declarado como MATRIZ sem dimens�o*");
	printf("\n *----------------------------------------------------*");
	int valoresOriginais [5] = {501, 401, 301, 201, 101};
	imprimeValores(valoresOriginais);
	return 0;
}
