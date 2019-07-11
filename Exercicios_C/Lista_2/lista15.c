#include <stdio.h>
#include <stdlib.h>

int check_and_split(float num_a, float num_b, float *split);

int main() {
  float num_a, num_b;
  int check = 0;
  float split = 0;

  system("clear");

  printf("\n\nVamos dividir 2 numeros !!!\n\n");

  printf("Entre com o numero A: ");
  scanf("%f", &num_a);

  printf("Entre com o numero B: ");
  scanf("%f", &num_b);

  if ((check_and_split(num_a, num_b, &split)) == 0)
    printf("\n\n\t\tDivisao impossivel (nao existe divisao por %2.2f)\n\n", num_b);
  
  if ((check_and_split(num_a, num_b, &split)) == 1)
    printf("\n\n\t\tResultado da divisao de %2.2f por %2.2f = %2.2f\n\n", num_a, num_b, split);

  return 0;
}

int check_and_split(float num_a, float num_b, float *split) {
  if (num_b == 0)
    return 0;
  
  if (num_b != 0) {
    *split = (num_a / num_b);
    return 1;
  }
}