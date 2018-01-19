//Arquivo Cabeçalho de biblioteca personalizada

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

//Definindo as estruturas de Dados:

typedef struct ender
{
	char rua[100];
	char complement[100];
	int num;
} end;

typedef struct cadastro
{
	char nome[100];
	int idade;
	end endereco;
} cad;

//Protótipos das Funções:==============================================================================================================

//Criar vetor de estruturas:
cad *cria_vetor(int n);

//Ler dados para o vetor de estruturas:
void leit(cad *ptr, int n);

//Imprimir a estrutura:
void imprime(cad *ptr, int n);