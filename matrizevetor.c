#include <stdio.h>
int main(void)
{
	float notas[4]; //vetor para receber as notas digitadas
	float soma = 0;
	printf("\n Exemplo de inicializacao din�mica de vetor");
	printf("\n *----------------------------------------*");
	for(int indice1 = 0; indice1 < 4; indice1++)
	//la�o repeti��o para solicitar 4 notas
	{
		printf("\ninforme a nota %d = ",indice1+1);
		scanf("%f", notas[indice1]);//Le do teclado a opcao
	}
	for(int indice2 = 0; indice2 < 4; indice2++)
	// La�o de repeti��o para acessar as 4 posi��es do vetor � Acumula na vari�vel soma cada nota do vetor
	{
		soma = soma + notas[indice2];
	}
	printf("\n A m�dia das notas �: %.2f", (soma / 4));
	return 0;
}
