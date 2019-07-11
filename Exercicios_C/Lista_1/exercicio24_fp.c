/*
 *	24 - Loops e Funções - Faça u um Programa em C que calcule a hipotenusa de 10
 *	triângulos. Todos os valores devem ser lidos via arquivo através do
 *	redireciomento interno. (Usando leitura de um arquivo Arquivo, e baseando
 *	no programa de ATM).
 *	necessário arquivo exerciocio24_sides.txt para leitura dos catetos.
 * 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h> /* require -lm parameter to compile */
#include <string.h>
#include <strings.h>

#define NUMBER_HYPOTENUSE 10
#define BUFFER_SIZE 100

double hypotenuse_calculator(float side_a, float side_b);
void get_values(char buffer[]);
float side_a = 0;
float side_b = 0;

int main() {
	FILE *fp_sides;
	char buffer[BUFFER_SIZE];
	double accumulator = 0;
	int count = 0;

	if ((fp_sides = fopen("exercicio24_sides.txt", "r")) == NULL) {
		system("clear");
		printf("\n\n\tInput file not found or nonexistent\n\n");
		return 1;
	}

	while (count < NUMBER_HYPOTENUSE) {
		fgets(buffer, sizeof(buffer), fp_sides);
        get_values(buffer);
		accumulator += hypotenuse_calculator(side_a, side_b);
		count++;
    }

	system("clear");
	printf("\n\n\tCalculating Hypotenuse of %d Trinagles\n\n", NUMBER_HYPOTENUSE);
	printf("\n\n\t\tThe Hypotenuse of the %d Trinagles typed is %.2f\n\n", NUMBER_HYPOTENUSE, accumulator);
	
	return 0;
}

double hypotenuse_calculator(float side_a, float side_b) {
	double hypotenuse = 0;

	hypotenuse = (pow(side_a, 2)) + (pow(side_b, 2));
	return hypotenuse = sqrt(hypotenuse);
}

void get_values(char buffer[]) {    
    int count = 0;
    char *space = strtok(buffer, " ");
    char *str_result[BUFFER_SIZE]; 

    while (space) {
        str_result[count] = space;
        space = strtok (NULL, " ");
        count++;
    }
    
    side_a = atof(str_result[0]);
	side_b = atof(str_result[1]);
}


