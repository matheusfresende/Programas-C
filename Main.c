#define _CRT_SECURE_NO_WARNINGS

#include "Cabeçalho.h"

/*
** REGISTRO DE PESSOAS - CADASTRO DE PESSOAL
** DADOS DE PESSOAS
*/

int main()
{
	int N;

	printf("Cadastro de Pessoal:\n\n");

	printf("Quantidade de Pessoas: ");
	scanf("%d", &N);

	cad *cadast = cria_vetor(N);  //Não deixar ponteiros soltos - CyberSecurity

	leit(cadast, N);  //Leitura de dados

	imprime(cadast, N);  //Imprime os cadastros

	//Libera o ponteiro dos cadastros:
	free(cadast);
	cadast = NULL;  //Faz ponteiro para NULL - CyberSecurity

	system("pause");
	return 0;
}