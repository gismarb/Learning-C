/*
 *	24 - Loops e Funções - Faça u um Programa em C que calcule a hipotenusa de 10
 *	triângulos. Todos os valores devem ser lidos via arquivo através do
 *	redireciomento interno.
 * 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h> /* require -lm parameter to compile */

#define NUMBER_HYPOTENUSE 10

double hypotenuse_calculator(float side_a, float side_b);

int main() {
	float side_a = 0;
	float side_b = 0;
	int count = 0;
	double accumulator = 0;

	system("clear");
	printf("\n\n\tCalculating Hypotenuse of %d Trinagles\n\n", NUMBER_HYPOTENUSE);

	while(count < NUMBER_HYPOTENUSE) {	
		do {
			printf("\n\t\tType value side [ a ] of Triangle [ %d ] :", count + 1);
			scanf("%f", &side_a);
			setbuf(stdin, NULL);
			printf("\n\t\tType value side [ b ] of Triangle [ %d ] :", count + 1);
			scanf("%f", &side_b);
			setbuf(stdin, NULL);
			
			if ((side_a <= 0) || (side_b <= 0)) {
				printf("\n\t\t\tYou are typed values less than 0 or equal to 0. Don't do this...\n\n");
				getchar();
			}

		}while((side_a <= 0) || (side_b <= 0));
		
		accumulator += hypotenuse_calculator(side_a, side_b);
		count++;
	}
	
	printf("\n\n\t\tThe Hypotenuse of the %d Trinagles typed is %.2f\n\n", NUMBER_HYPOTENUSE, accumulator);
	
	return 0;
}

double hypotenuse_calculator(float side_a, float side_b) {
	double hypotenuse = 0;

	hypotenuse = (pow(side_a, 2)) + (pow(side_b, 2));
	return hypotenuse = sqrt(hypotenuse);
}

