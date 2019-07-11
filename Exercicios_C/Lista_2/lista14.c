#include <stdio.h>
#include <stdlib.h>

#define MATH_OPERATIONS 3

float add_subtract_multiply(float num_a, float num_b, int opt);

int main() {
  float num_a, num_b;

  system("clear");

  printf("\n\nEntre com numero A: ");
  scanf("%f", &num_a);

  printf("Entre com numero B: ");
  scanf("%f", &num_b);
  
  printf("\n\nA soma, subtracao e Multiplicacao entre %2.2f e %2.2f\n\n", num_a, num_b);
  for (int i = 0; i < MATH_OPERATIONS; i++) {
    if (i == 0)
      printf("Soma = %2.2f\n", (add_subtract_multiply(num_a, num_b, i)));

    if (i == 1)
      printf("Subtracao = %2.2f\n", (add_subtract_multiply(num_a, num_b, i)));

    if (i == 2)
      printf("Multiplicao = %2.2f\n", (add_subtract_multiply(num_a, num_b, i)));
  }

  printf("\n");
  return 0;
}

float add_subtract_multiply(float num_a, float num_b, int opt) {
  float result;

  if (opt == 0)
    return result = num_a + num_b;
  
  if (opt == 1)
    return result = num_a - num_b;
  
  if (opt == 2)
    return result = num_a * num_b;
}