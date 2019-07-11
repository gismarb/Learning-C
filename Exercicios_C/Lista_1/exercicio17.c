/*

	Preco Auto Venda = 
		Preco Auto Fabrica + 
		Impoto (Preco Auto Fabrica * 45%) +
		Revendedor (Preco Auto Fabrica * 28%) +

	Programa recebe Nome do Veiculo, Preco de Fabrica, calcula Preco Final e 
	Retorna Nome do Veiculo e Preco Venda (Preco Final)

*/


#include <stdio.h>
#include <stdlib.h>

#define TAM_NOME_MAX 60

int main() {
	
	char nome_carro[TAM_NOME_MAX] = "\0";
	float preco_fabrica;
	float preco_venda;

	printf("\n\n\t######################################################\n");
	printf("\n\t# Vamos Calcular o Preco de Venda [ R$ ] de um Carro #\n");
	printf("\n\t######################################################\n");
	printf("\n\n\tInforme o [ NOME / MODELO ] do Veiculo: ");
	fgets(nome_carro, sizeof(nome_carro), stdin);
	printf("\n\n\tInforme o [ PRECO DE FABRICA R$ ]: ");
	scanf("%f", &preco_fabrica);

	preco_venda = (preco_fabrica * 0.45) + (preco_fabrica * 0.28) + preco_fabrica;

	printf("\n\n\t######################################################\n");
	printf("\n\t# O Preco de Venda Final do Carro e [ %3.2f R$ ] #\n", preco_venda);
	printf("\n\t######################################################\n");

	return 0;
}