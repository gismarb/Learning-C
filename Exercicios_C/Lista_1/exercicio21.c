/*
 *	21. Condicional – Leitura de Strings - Dado as seguintes informações de um 
 *	funcionário: Nome, idade cargo e o seu salário bruto considere:
 *	a) O salário bruto teve um reajuste de 38%.
 * 	b) O funcionário receberá uma gratificação de 20% do salário bruto.
 * 	c) O Salário total é descontado em 15%.
 * 
 * 	Faça um programa em C :
 * 	+ Ler e Imprimir Nome, idade e cargo.
 * 	+ Imprimir o salário bruto.
 * 	+ Imprimir o salário líquido.
 * 
*/

#include <stdio.h>
#include <stdlib.h>

#define STRING_SIZE 45
#define INCREASE 1.38
#define BONUS 1.20
#define DISCOUNT 0.85

void salary_checker(float gross_salary);
float salary_increase(float gross_salary);
float salary_bonus(float gross_salary);
float salary_discount(float gross_salary);

int main() {
	char name[STRING_SIZE] = "\0";
	char job[STRING_SIZE] = "\0";
	int age = 0;
	float gross_salary = 0;
	float net_salary = 0;
	float temporary_salary = 0;

	system("clear");
	printf("\n\n\tDigite o seu Nome: ");
	scanf("%[^\n]s", name);
	setbuf(stdin, NULL);
	printf("\n\tDigite sua Idade: ");
	scanf("%d", &age);
	setbuf(stdin, NULL);
	printf("\n\tDigite o seu Cargo: ");
	scanf("%[^\n]s", job);
	setbuf(stdin, NULL);
	printf("\n\n\tDigite o seu Salario Bruto: ");
	scanf("%f", &gross_salary);
	setbuf(stdin, NULL);

	salary_checker(gross_salary);
	temporary_salary = salary_increase(gross_salary);
	gross_salary = temporary_salary;
	temporary_salary = salary_bonus(gross_salary);
	gross_salary = temporary_salary;
	net_salary = salary_discount(gross_salary);
	gross_salary = temporary_salary;
	
	system("clear");
	printf("\n\n\tDados:\n\t\tNome: %s\n\t\tIdade: %d anos\n\t\tCargo: %s\n\t\tSalario Bruto: R$ %.2f\n\t\tSalario Liquido: R$ %.2f\n\n", name, age, job, gross_salary, net_salary);

	return 0;
}

void salary_checker(float gross_salary) {
	if (gross_salary <= 0) {
		printf("\n\n\tAtencao:\n\t\tSalario Bruto nao e valido... Programa encerrado...\n");	
		exit(EXIT_FAILURE);
	}
}

float salary_increase(float gross_salary) {
	gross_salary = (gross_salary * INCREASE);
	return gross_salary;
}

float salary_bonus(float gross_salary) {
	gross_salary = (gross_salary * BONUS);
	return gross_salary;
}

float salary_discount(float gross_salary) {
	gross_salary = (gross_salary * DISCOUNT);
	return gross_salary;
}
