#include <stdio.h>
int main(void)
{
	float notas[4]; //vetor para receber as notas digitadas
	float soma = 0;
	printf("\n Exemplo de inicializacao dinâmica de vetor");
	printf("\n *----------------------------------------*");
	for(int indice1 = 0; indice1 < 4; indice1++)
	//laço repetição para solicitar 4 notas
	{
		printf("\ninforme a nota %d = ",indice1+1);
		scanf("%f", notas[indice1]);//Le do teclado a opcao
	}
	for(int indice2 = 0; indice2 < 4; indice2++)
	// Laço de repetição para acessar as 4 posições do vetor – Acumula na variável soma cada nota do vetor
	{
		soma = soma + notas[indice2];
	}
	printf("\n A média das notas é: %.2f", (soma / 4));
	return 0;
}
