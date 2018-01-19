#define _CRT_SECURE_NO_WARNINGS

#include "Cabeçalho.h"

//Prototipos das Funções:

//Criar vetor de estruturas:
cad *cria_vetor(int n)
{
	cad *ptr = (cad *)malloc(n * sizeof(cad));

	return ptr;
}

//Leitura:
void leit(cad *ptr, int n)
{
	system("cls");

	for (int i = 0; i < n; i++)
	{
		setbuf(stdin, NULL);

		printf("Nome: ");
		fgets(ptr[i].nome, 100, stdin);
		printf("Idade: ");
		scanf("%d", &ptr[i].idade);

		setbuf(stdin, NULL);

		printf("\nEndereco\n");
		printf("Rua: ");
		fgets(ptr[i].endereco.rua, 100, stdin);

		setbuf(stdin, NULL);

		printf("Complemento: ");
		fgets(ptr[i].endereco.complement, 100, stdin);
		printf("Numero: ");
		scanf("%d", &ptr[i].endereco.num);

		system("cls");
	}
}

//Imprimindo Cadastros:
void imprime(cad *ptr, int n)
{
	printf("CADASTROS\n\n");

	for (int i = 0; i < n; i++)
	{
		fputs(ptr[i].nome, stdout);
		printf("%d anos\n", ptr[i].idade);
		printf("\nEndereco:\n");
		printf("Rua: ");
		fputs(ptr[i].endereco.rua, stdout);
		printf("Complemento: ");
		fputs(ptr[i].endereco.complement, stdout);
		printf("Numero: %d\n", ptr[i].endereco.num);

		printf("\n");
	}
}