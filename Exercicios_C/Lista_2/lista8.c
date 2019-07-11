#include <stdio.h>
#include <stdlib.h>

#define NUMVAL 10

void set_values(int values[]);
void order_by_asc(int values[]);
void get_values(int values[]);

int main() {
  int values[NUMVAL];
  system("clear");

  set_values(values);
  order_by_asc(values);
  get_values(values);
  
  return 0;
}

void set_values(int values[]) {
  int i;
  int number;

  printf("\nEntre com %d valores (inteiros):\n\n", NUMVAL);
  
  for (i = 0; i < NUMVAL; i++) {
    printf("Entre com o numero [%d]: ", (i + 1));
    scanf("%d", &number);
    values[i] = number;
  }
}

void order_by_asc(int values[]) {
  int i, j, aux;
  
  for (i = 0; i < NUMVAL; i++) {
    for (j = 0; j < (NUMVAL - 1); j++) {
      if (values[j] > values[j + 1]) {
        aux = values[j + 1];
        values[j + 1] = values[j];
        values[j] = aux;
      }
    }
  }
} 

void get_values(int values[]) {
  int i;
  int number;

  printf("\nOs %d valores (inteiros) digitdos ordenados de forma ascendente foram:\n\n", NUMVAL);
  
  for (i = 0; i < NUMVAL; i++)
    printf(" %d\t ", values[i]);
  
  printf("\n\n");
}
