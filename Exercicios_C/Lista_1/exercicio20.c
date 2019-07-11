/*
 *
 *	20. Condicional e Função - Faça um programa em C que leia um número que represente um determinado mês do ano.
 *	Após a leitura escreva por extenso qual o mês lido. Caso o número digitado não esteja na faixa de 1..12 escreva uma 
 *	mensagem informando o usuário do erro da digitação. Para essa atividade use necessariamente uma função para retornar
 *	se o mês digita é valido ou não. Use também o switch para seleção dos meses.
 *
*/

#include <stdio.h>
#include <stdlib.h>

#define MONTH "Mes:"

int number_checker(int number);

int main() {
	int number = 0;

	do {
		printf("\n\n\tEntre com um número de 1 à 12 para Representacao do Mes correspondente: ");
		scanf("%d", &number);
	} while(number_checker(number));
	
	system("clear");
	switch (number) {
		case 1:
			printf("\n\n\t%s Janeiro\n\n", MONTH);
			break;

		case 2:
			printf("\n\n\t%s Fevereiro\n\n", MONTH);
			break;

		case 3:
			printf("\n\n\t%s Marco\n\n", MONTH);
			break;

		case 4:
			printf("\n\n\t%s Abril\n\n", MONTH);
			break;

		case 5:
			printf("\n\n\t%s Maio\n\n", MONTH);
			break;

		case 6:
			printf("\n\n\t%s Junho\n\n", MONTH);
			break;

		case 7:
			printf("\n\n\t%s Julho\n\n", MONTH);
			break;

		case 8:
			printf("\n\n\t%s Agosto\n\n", MONTH);
			break;

		case 9:
			printf("\n\n\t%s Setembro\n\n", MONTH);
			break;

		case 10:
			printf("\n\n\t%s Outubro\n\n", MONTH);
			break;

		case 11:
			printf("\n\n\t%s Novembro\n\n", MONTH);
			break;

		case 12:
			printf("\n\n\t%s Dezembro\n\n", MONTH);
			break;
		/* No "default" was used because the "number_checker" function already inhibits non-standard typing */
	}

	return 0;
}

int number_checker(int number) {
	if (number < 1 || number > 12)
		return 1;
	else
		return 0;
}