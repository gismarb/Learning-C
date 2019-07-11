/*
 *	23. Loops - Faça um Programa em C para somar os números pares < 100 e ao final
 *	imprimir o resultado.
 *	dados referentes aos veículos lidos de forma que:
 * 
*/

#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_RANGE 100
#define MODULE 2
#define START_NUMBER 0

void sum_pair_number(int number);

int main() {
	int number = START_NUMBER;
	
	sum_pair_number(number);
	
	return 0;
}

void sum_pair_number(int number) {
	int count = 0;
	int sum = 0;

	for(count = 0; count < DEFAULT_RANGE; count += MODULE) {
		sum += number;
		number += MODULE;
	}

	printf("\n\t\tSum Pair Number 0 into 100 = %d \n\n", sum);
}

