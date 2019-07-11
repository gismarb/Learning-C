#include <stdio.h>
#include <stdlib.h>

#define ARRAYSIZE 5

double average_calculator(double student_score[]);

int main() {
  int i = 0;
  double student_score[ARRAYSIZE];

  system("clear");

  printf("\nEntre com as %d notas do aluno:\n", ARRAYSIZE);
  while (i != ARRAYSIZE) {
    printf("\nNota %d = ", (i + 1));
    scanf("%lf", &student_score[i]);
    i++;
  }
  
  printf("\nA media das %d notas do aluno foi %2.2f\n\n", ARRAYSIZE, average_calculator(student_score));
  
  return 0;

}

double average_calculator(double student_score[]) {
  double sum = 0;
  
  for (int i = 0; i < ARRAYSIZE; i++) {
    sum += student_score[i];
  }
  
  return (sum / ARRAYSIZE);
}
