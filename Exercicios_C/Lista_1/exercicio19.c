/*
*
*	19. Condicional - Faça um programa em C que leia o nome e a três notas de uma disciplina
*	de um aluno e ao final escreva o nome do aluno, sua média e se ele foi aprovado a média é 8.
*
*/

#define TAM_NOME 60

#include <stdio.h>
#include <stdlib.h>

void *nome_aluno(char *aluno)
{
	int i = 0;

	do
	{
		system("clear");
		if (i > 0)
			printf("\n\n\tAtencao: Digite o nome do Aluno...\n");

		printf("\n\n\tEntre com o nome do Aluno: ");
		fgets(aluno, sizeof(aluno), stdin);

		i++;
	}
	while (aluno[1] == '\0');
}

float nota_aluno(int j)
{
	int i = 0;
	float n;

	do
	{
		system("clear");
		if (i > 0)
			printf("\n\n\tAtencao: Digite Notas de 0 a 10...\n");

		printf("\n\tEntre com a Nota %d: ", j);
		scanf("%f", &n);
		setbuf(stdin, 0);

		i++;
	}
	while (n < 0 || n > 10);

	return n;
}

int main()
{
	int i = 0;
	float nota1, nota2, nota3;
	float media = 0;
	char aux_aluno[TAM_NOME];

	system("clear");
	printf("\n\n\tCalculando a Media do Aluno...");

	nome_aluno(&aux_aluno);
	nota1 = nota_aluno(1);
	nota2 = nota_aluno(2);
	nota3 = nota_aluno(3);

	media = ((nota1 + nota2 + nota3) / 3);

	system("clear");

	if (media >= 8)
		printf("\n\n\t\tConceito de Media >= 8\n\n\t\tAluno %s \t\tMedia %2.2f\n\t\tConceito APROVADO \n\n", aux_aluno, media);

	else
		printf("\n\n\t\tConceito de Media >= 8\n\n\t\tAluno %s \t\tMedia %2.2f\n\t\tConceito REPROVADO \n\n", aux_aluno, media);

	printf("\n\n\tFinalizando o Programa...\n\n");

	return 0;
}