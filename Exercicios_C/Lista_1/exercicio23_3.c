/*
 *	23. Loops e Funções - Faça um Programa em C para somar os restos da divisão por
 *	3 de 200 números. Os valores de início e fim da sequencia devem ser lidos via teclado
 *	ou por arquivo via redirecionamento.
 *
*/

#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_RANGE 200
#define MODULE 3
#define SIZE 2

void rest_of_division(int number_in_out[]);
void number_checker(int number_in_out[]);

int main() {
	int number_in_out[SIZE];

	number_checker(number_in_out);
	rest_of_division(number_in_out);

	return 0;
}

void rest_of_division(int number_in_out[]) {
	float sum_rest;

	while(number_in_out[0] < number_in_out[1]) {
		sum_rest = sum_rest + (number_in_out[0] % MODULE);
		number_in_out[0]++;
	}

	printf("\n\tThe sum of all numbers (remainders of the division by 3) is %.2f\n\n", sum_rest);
}

void number_checker(int number_in_out[]) {
	do {
		system("clear");
		printf("\n\tType start value: ");
		scanf("%d", &number_in_out[0]);
		printf("\n\tType end value (must be bigger (200+) than start value): ");
		scanf("%d", &number_in_out[1]);
	} while((number_in_out[1] - number_in_out[0]) != DEFAULT_RANGE - 1);
}
