#include <stdio.h>
#include <stdlib.h>

#define COLLECTION_SIZE 10
#define MAX_COLLECTION_SIZE 100

float avg_num(int collection[]);
int smaller_num(int collection[]);
int higher_num(int collection[]);
int check_position(int position, int num);

int main() {
  // int collection[] = {2, 6, 5, 6, -1};
  int collection[MAX_COLLECTION_SIZE];
  // int index = (COLLECTION_SIZE - 1);
  int num = 0;
  
  system("clear");

  printf("\n\nEntre com %d valores (o último [ %do. ] dever ser negativo, os demais positivos", COLLECTION_SIZE, COLLECTION_SIZE);
  printf("\nCaso o [ %do. ] seja positivo, retornará NEGATIVO, e caso os demais sejam negativos, retornará POSITIVO. Respeite as regras!!!\n\n", COLLECTION_SIZE);
  for (int i = 1; i <= COLLECTION_SIZE; i++) {
    printf("Entre com valor posicao[ %d ]: ", i);
    scanf("%d", &num);
    collection[i] = check_position(i, num);
  }

  printf("\n\nEstatistica sobre valores da Colecao de Numeros de Tamanho %d:\n\n", COLLECTION_SIZE);
  for (int i = 1; i <= COLLECTION_SIZE; i++)
    printf("Numero da Colecao posicao [ %d ]: %d\n", i, collection[i]);

  printf("\nA Media dos %d valores = %2.2f", COLLECTION_SIZE, (avg_num(collection)));
  printf("\nO Menor valor dos %d valores = %d", COLLECTION_SIZE, (smaller_num(collection)));
  printf("\nO Maior valor dos %d valores = %d\n\n", COLLECTION_SIZE, (higher_num(collection)));

  return 0;
}

float avg_num(int collection[]) {
  float avg = 0;

  for (int i = 1; i <= COLLECTION_SIZE; i ++)
    avg += collection[i];

  return avg /= COLLECTION_SIZE;
}

// reutilizando a lógica de menor número do Exerc. 7, com
// uma modificão para não ler última posição do Vetor (posição negativa)
int smaller_num(int collection[]) {
  int aux;
  int smaller = 2147483647;

  for (int i = 1; i < COLLECTION_SIZE; i++) {
    aux = collection[i];
    if (aux <= smaller)
      smaller = aux;
  }

  return smaller;
}

// reutilizando a lógica de maior número do Exerc. 7
int higher_num(int collection[]) {
  int aux;
  int higher = 0;

  for (int i = 1; i <= COLLECTION_SIZE; i++) {
    aux = collection[i];
    if (aux >= higher)
      higher = aux;
  }

  return higher;
}

int check_position(int position, int num) {
  if ((position == COLLECTION_SIZE) && (num < 0))
    return num;
  
  if ((position == COLLECTION_SIZE) && (num > 0))
    return (-1 * (num)) ;

  if ((position < COLLECTION_SIZE) && (num < 0))
    return (-1 * (num));

  if ((position < COLLECTION_SIZE) && (num > 0))
    return num;
}