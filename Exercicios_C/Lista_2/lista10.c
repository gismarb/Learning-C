#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 999999

void number_allocator(double typed_numbers[], int index);

int main() {
  int index = 0;
  double typed_numbers[MAX_SIZE];

  system("clear");

  printf("\n\tArquivo de Números (tipo double)");
  printf("\n\nEntre com um indice para o Arquivo (qtde posicoes): ");
  scanf("%d", &index);

  number_allocator(typed_numbers, index);

  return 0;
}

void number_allocator(double typed_numbers[], int index) {
  double number = 0;
  int i;

  for (i = 0; i < index; i++) {
    printf("Entre com o numero da posicao [ %d ] do Arquivo: ", (i + 1));
    scanf("%lf", &number);
    typed_numbers[i] = number;
  }

  printf("\nArquivo de Posicoes\n");

  for (i = 0; i < index; i++)
    printf("Posicao [ %d ] = [ %2.2f ]\n", (i + 1), typed_numbers[i]);

  printf("\n\n");
}