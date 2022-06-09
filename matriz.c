#include <stdio.h>
int main(void)
{
	//vetor para receber as notas digitadas
	float amostraTemperaturaTrimestral[3][4] =
	{ {25.4, 27.09, 28.90, 29.50},
	{21.8, 20.05, 22.90, 20.90},
	{18.8, 20.10, 17.70, 19.00} };
	printf("\n Exemplo de acesso a Matriz Bidimensional");
	printf("\n *------------------------------------------*");
	for (int indice_i= 0; indice_i < 3; indice_i++)
	{
		//laço repetição para controlar as 3 LINHAS da matriz
		printf("\n *--------Temperaturas do Mes : %d ------*",	indice_i + 1);
		for (int indice_j= 0; indice_j < 4; indice_j++)
		{
			//laço repetição para controlar as 4 COLUNAS da matriz
			printf("\n Temperatura %d = %.2f", indice_j+ 1, amostraTemperaturaTrimestral[indice_i][indice_j]);
		}
	}
	return 0;
}
