#include <stdio.h>

/*	2 - Tipos de Dados - Faça um programa em C que calcule a soma das variáveis definidas abaixo e apresente o resultado em tela:
	int a = 3;
	float b = 4.5;
	double c = 5.25;
	float num;
*/

int main() {

	int a = 3;
	float b = 4.5;
	double c = 5.25;
	float num;

	num = (a + b + c);

	printf("%3.2f\n", num);

	return 0;

} 
