#include <stdio.h>
#include <stdlib.h>

#define NUM_LINES 5
#define NUM_COLUMNS 3

float matrix[NUM_LINES][NUM_COLUMNS];

void read_matrix();
float pair_colums_avg();
float odd_lines_avg();

int main() {
  float result = 0;

  read_matrix();
  result = (pair_colums_avg() - odd_lines_avg());

  printf("\n\nResultado da diferença entre media do elementos das colunas pares e media dos elentos das linhas impares = %2.2f\n\n", result);

  return 0;
}

void read_matrix() {
  int i, j;
  float num;

  system("clear");

  printf("\n\nEntrando com os valores da Matriz:\n\n");

  for (i = 0;  i < NUM_LINES; i++) {
    for (j = 0; j < NUM_COLUMNS; j++) {
      printf("Posicao [Linha: %d - Coluna: %d]: ", (i + 1), (j + 1));
      scanf("%f", &num);
      matrix[i][j] = num;
    }
  }

  system("clear");

  printf("\n\nMatriz Resultante:\n\n");
  
  printf("\n\tC_1\tC_2\tC_3\n");
  for (i = 0;  i < NUM_LINES; i++) {
    printf("L_%d\t", (i + 1));
    for (j = 0; j < NUM_COLUMNS; j++) {
      printf("%2.2f\t", matrix[i][j]);
    }
    
    printf("\n");
  }
}

float pair_colums_avg() {
  float avg = 0;
  int i, j;
  int counter = 0;

  for (i = 1; i <= NUM_LINES; i++) {
    for (j = 1; j <= NUM_COLUMNS; j++) {
      if ((j % 2) == 0) {
        avg += matrix[i][j];
        counter++;
      }
    }
  }
  printf("\n\t%d\t%2.2f\n", counter, avg);

  return avg /= counter;
}

float odd_lines_avg() {
  float avg = 0;
  int i, j;
  int counter = 0;

  for (i = 1; i <= NUM_LINES; i++) {
    for (j = 1; j <= NUM_COLUMNS; j++) {
      if ((i % 2) == 1) {
        avg += matrix[i][j];
        counter++;
      }
    }
  }
  printf("\n\t%d\t%2.2f\n", counter, avg);

  return avg /= counter;
}