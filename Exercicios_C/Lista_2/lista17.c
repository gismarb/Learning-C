#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_SCORE 3

float avg_score(float score_a, float score_b, float score_c);
float check_score(float score);

int main() {
  float score_a, score_b, score_c;

  system("clear");

  printf("\n\nCalcular Media de %d notas!!! (Conceito de 0 à 10)", NUMBER_OF_SCORE);
  printf("\nConceito: de 0 à 10 (Se nota acima de 10, nota = 10, Se abaixo de 0, nota = 0)\n\n");
  
  printf("Entre com a 1a. Nota: ");
  scanf("%f", &score_a);
  score_a = check_score(score_a);

  printf("Entre com a 2a. Nota: ");
  scanf("%f", &score_b);
  score_b = check_score(score_b);

  printf("Entre com a 3a. Nota: ");
  scanf("%f", &score_c);
  score_c = check_score(score_c);

  printf("\n\nA Media resultante das notas (Nota 1 = %2.2f, Nota 2 = %2.2f e Nota 3 = %2.2f) foi %2.2f\n\n", score_a, score_b, score_c, (avg_score(score_a, score_b, score_c)));

  return 0;
}

float avg_score(float score_a, float score_b, float score_c) {
  return ((score_a + score_b + score_c) / NUMBER_OF_SCORE);
}

// Trabalhando com notas entre 0 à 10
float check_score(float score) {
  if (score > 10)
    return 10;

  if (score < 0)
    return 0;

  if ((score >= 0) || (score <= 10))
    return score;
}