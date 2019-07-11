#include <stdio.h>
/*
	3 - Vetores Unidimensionais - O seguinte código não compila, verifique o que falta a declaração de tipo e faça o programa compilar corretamente	
*/

int main() {
	 /* TODO: defina a variável grades */
	 int average;
	 int grades[3];
	 grades[0] = 80;
	 /* TODO: defina o valor 85 para grades para que a média seja 85 */
	 grades[1] = 85;
	 grades[2] = 90;
	 average = (grades[0] + grades[1] + grades[2]) / 3;
	 printf("The average of the 3 grades is: %d\n", average);

	 return 0;
}
