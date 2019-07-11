#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*

    8 - Strings – Faça um programa em C para ler os seguintes dados via teclado de uma pessoa (abaixo)
        Sugestão use vetores de catacteres e definição (#define) para o tamanho das strings.
        Exemplos - https://www.learn-c.org/en/Strings


        nome
        endereco
        cep
        telefone
        idade
        numero de filhos
        cidade
        salario

*/

#define MAX_C 61

int main()
{

	system("clear");	
	char nome[MAX_C] = ("\0");
	char endereco[MAX_C] = ("\0");
	char cep[MAX_C] = ("\0");
	char telefone[MAX_C] = ("\0");
	char cidade[MAX_C] = ("\0");
	char nfilhos[MAX_C] = ("\0");
	char idade[MAX_C] = ("\0");
	char salario[MAX_C] = ("\0");

	printf("\n\n###################################################################################\n\n");
	
	printf("Vamos fazer o seu cadastro\n\n");

	printf("Entre com sua informacoes abaixo\n\n");

	printf("\t1 - Qual e o seu Nome:\n\t\t");
	fgets(nome, sizeof(nome), stdin);

	printf("\t2 - Qual e a sua Idade:\n\t\t");
	fgets(idade, sizeof(idade), stdin);

	printf("\t3 - Quantos Filhos tem:\n\t\t");
	fgets(nfilhos, sizeof(nfilhos), stdin);

	printf("\t4 - Qual e seu Endereco:\n\t\t");
	fgets(endereco, sizeof(endereco), stdin);

	printf("\t5 - Qual e seu CEP:\n\t\t");
	fgets(cep, sizeof(cep), stdin);

	printf("\t6 - Qual e sua Cidade:\n\t\t");
	fgets(cidade, sizeof(cidade), stdin);

	printf("\t7 - Qual e seu Telefone:\n\t\t");
	fgets(telefone, sizeof(telefone), stdin);

	printf("\t8 - Qual e o seu salario:\n\t\t");
	fgets(salario, sizeof(salario), stdin);

    system("clear");

    printf("\n\n###################################################################################\n\n");

    printf("\n\nAgora, vamos Mostrar os seus Dados\n\n");
    printf("1 - Seu Nome e: \n\t\t%s\n", nome);
    printf("2 - Sua Idade e: \n\t\t%s\n", idade);
    printf("3 - Qtde de Filhos: \n\t\t%s\n", nfilhos);
    printf("4 - Seu Endereco e: \n\t\t%s\n", endereco);
    printf("5 - Seu CEP e: \n\t\t%s\n", cep);
    printf("6 - Voce mora na Cidade: \n\t\t%s\n", cidade);
    printf("7 - Seu Telefone e: \n\t\t%s\n", telefone);
    printf("8 - Salario em R$: \n\t\t%s\n", salario);

	printf("\n\n###################################################################################\n\n");

	return 0;
}
