#include <stdio.h>
#include <string.h> //necess�rio para strcpy
int main(void)
{
	char nome[15];
	strcpy(nome, "Fulano de Tal");
	//strcpy(string_destino, string_origem);
	//note que a string de destino � nome
	//a string de origem � �Fulano de Tal�
	printf("\n Exemplo de copia de string");
	printf("\n *--------------------------");
	printf("\n Nome = %s", nome);
	printf("\n O tamanho da string 'nome' e %li", strlen(nome));
	return 0;
}
