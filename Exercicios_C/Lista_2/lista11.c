#include <stdio.h>
#include <stdlib.h>

#define DEFAULT 10

int main() {
  int num = 0;
  int i = 0;
  int collection[DEFAULT];
  float avg = 0;

  system("clear");

  printf("\n\n\tComparando Valores com Média\n\n");

  for (i = 0; i < DEFAULT; i++) {
    printf("Entre com o valor na posicao [ %d ]: ", (i + 1));
    scanf("%d", &num);
    collection[i] = num;
    avg += collection[i];
  }

  avg /= DEFAULT;

  printf("\nMedia dos valores digitados: %2.2f\n", avg);
  printf("\nOs Valores das posicoes ");
  for (i = 0; i < DEFAULT; i++) {
    if (collection[i] == avg) {
      printf(" - %d", (i + 1));
    }
  }
  printf(" - Tem o mesmo valor da Media\n\n");

  return 0;
}