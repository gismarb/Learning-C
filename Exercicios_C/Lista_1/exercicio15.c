#include <stdio.h>
#include <stdlib.h>

int num_valido(float num) {

	if (num < 0 || num > 10)
		return 0;
	else
		return 1;

}


float media(float nota1, float nota2, float nota3){

	float mediaac;
	mediaac = (nota1 + nota2 + nota3) / 3;
	return mediaac;

}

int main() {

	float m, nota1, nota2, nota3;

	system("clear");
	printf("\n\t\tCalcular Media de 3 Notas\n");
	printf("\n\t\tAtencao\n");
	printf("\n\t\tNumeros < 0 ou > 10 nao serao aceitos!..\n\n");

	do {

		printf("\n\t\tEntre com a [Nota1]: ");
		scanf("%f", &nota1);

	} while (num_valido(nota1) != 1);

	do {

		printf("\n\t\tEntre com a [Nota2]: ");
		scanf("%f", &nota2);

	} while (num_valido(nota2) != 1);

	do {

		printf("\n\t\tEntre com a [Nota3]: ");
		scanf("%f", &nota3);

	} while (num_valido(nota3) != 1);

	m = media(nota1, nota2, nota3);
	printf("\n\n\t\tA MEDIA foi: [ %2.3f ]\n\n", m);

	return 0;

}
