/*
 *	22. Condicional – Leitura de Strings – Faça a leitura de dados de veículos, modelo,
 *	ano de fabricação, cor e placa de no máximo 10 carros. Em seguida processe os
 *	dados referentes aos veículos lidos de forma que:
 *
 *	a) Imprima quantos são da cor verde e o percentual em relação ao total.
 * 	b) Imprima quantos foram fabricados antes de 1990 e o percentual em relação ao total.
 * 	c) Imprima quantos são “GOL” e o percentual em relação ao total.
 * 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define GREEN_COLOR_CAR "VERDE"
#define MANUFACTURED_CAR 1990
#define CAR_MODEL "GOL"
#define STRING_SIZE 30
#define CAR_NUMBER_TO_CHECK 10


void low_to_upper(char some_string[]);

int main() {
	float count_green = 0;
	float count_before = 0;
	float count_model = 0;
	int count = 0;
	float car_quantity = 0;
	int year_of_manufacture = 0;
	char color_car[STRING_SIZE] = "\0";
	char model_car[STRING_SIZE] = "\0";
	char license_plate[STRING_SIZE - 21] = "\0";

	do {
		system("clear");
		printf("\n\n\tEntre com a Quantidade de Carros a Serem Vistoriados: ");
		scanf("%f", &car_quantity);
		setbuf(stdin, NULL);
	} while (car_quantity > CAR_NUMBER_TO_CHECK);
	
	for(count = 0; count < car_quantity; count++) {
		system("clear");
		printf("\n\n\tCarro %d: ", count + 1);
		
		printf("\n\t\tQual o Modelo do Carro (Ex.: Corsa, Gol, etc.): ");
		scanf("%s", model_car);
		setbuf(stdin, NULL);
		low_to_upper(model_car);
		if ((strcmp(model_car, CAR_MODEL) == 0))
			count_model++;

		printf("\n\t\tQual o Ano de Fabricacao do Carro (Ex.: 1990, 1980, etc.): ");
		scanf("%d", &year_of_manufacture);
		setbuf(stdin, NULL);
		if (year_of_manufacture > MANUFACTURED_CAR)
			count_before++;
		
		printf("\n\t\tQual a Cor do Carro (Ex.: Prata, Verde, etc.): ");
		scanf("%s", color_car);
		setbuf(stdin, NULL);
		low_to_upper(color_car);
		if ((strcmp(color_car, GREEN_COLOR_CAR) == 0))
			count_green++;
		
		printf("\n\t\tQual a Placa do Carro (Ex.: EAS-9669, EEE-9999, etc.): ");
		scanf("%s", license_plate);
		setbuf(stdin, NULL);
		low_to_upper(license_plate);
	}

	system("clear");
	printf("\n\n\t\tResultados: ");
	printf("\n\n\t\t\t%.2f Sao da Cor %s caracterizando %.2f Porcento ao Total %.2f.", count_green, GREEN_COLOR_CAR, ((count_green / car_quantity) * 100), car_quantity);
	printf("\n\n\t\t\t%.2f Foram Fabricados antes de %d caracterizando %.2f Porcento ao Total %.2f.", count_before, MANUFACTURED_CAR, ((count_before / car_quantity) * 100), car_quantity);
	printf("\n\n\t\t\t%.2f Sao do Modelo %s caracterizando %.2f Porcento ao Total %.2f.\n\n", count_model, CAR_MODEL, ((count_model / car_quantity) * 100), car_quantity);

	return 0;
}

void low_to_upper(char some_string[]) {
	int count = 0;

	for(count = 0; count < strlen(some_string); count++) {
		some_string[count] = toupper(some_string[count]);
	}	
}

