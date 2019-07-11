#include <stdio.h>
/*
	7 - Condicional – Escreva um programa que leia via teclado 3 notas de um aluno e a média das notas dos exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: 
	MA = (N1 + N2*2 + N3*3 + ME)/7. 
	A partir da média, informar o conceito de acordo com a tabela
*/

int main()
{

	float n1 = 0;
	float n2 = 0;
	float n3 = 0;

	float me = 0;
	float ma = 0;

	printf("Entre com a Nota 1: ");
	scanf("%f", &n1);
	printf("Entre com a Nota 2: ");
	scanf("%f", &n2);
	printf("Entre com a Nota 3: ");
	scanf("%f", &n3);
	printf("Entre com a Média de Notas Exercícios: ");
	scanf("%f", &me);

	ma = (n1 + (n2 * 2) + (n3 * 3) + me)/7;

	if (ma >= 9)
		printf("Média Acumulada é %2.1f\tConceito A\n", ma);
	else if (ma >= 7.5 && ma < 9)
		printf("Média Acumulada é %2.1f\tConceito B\n", ma);
	else if (ma >= 6 && ma < 7.5)
		printf("Média Acumulada é %2.1f\tConceito C\n", ma);
	else if (ma >= 4 && ma < 6)
		printf("Média Acumulada é %2.1f\tConceito D\n", ma);
	else
		printf("Média Acumulada é %2.1f\tConceito E\n", ma);
	
	return 0;

}
		

