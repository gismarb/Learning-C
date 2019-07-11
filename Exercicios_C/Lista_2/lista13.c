#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 80

int character_counter(char word[]);
int termination_counter(char word[]);
int digit_counter(char word[]);
int lowercase_counter(char word[]);

int main() {
  char word[MAX_LENGTH];
  
  system("clear");

  printf("\t\n\nEstatisticas de uma Palavra\n");

  printf("\nDigite uma palavra (Ex.: Testando.): ");
  scanf("%s", word);

  printf("\n1 -) Quantidade de Caracteres da palavra:  %d\n", character_counter(word));
  printf("\n2 -) Quantidade de Caracteres de Pontuacao da palavra: %d\n", termination_counter(word));
  printf("\n3 -) Quantidade de Numeros da palavra: %d\n", digit_counter(word));
  printf("\n4 -) Quantidade de Letras Minusculas da palavra: %d\n", lowercase_counter(word));

  return 0;
}

int character_counter(char word[]) {
  return strlen(word);
}

int termination_counter(char word[]){
  int counter = 0;
  int i;

  for (i = 0; i < strlen(word); i++) {
    if (((word[i] >= 33) && (word[i] <= 47)) || ((word[i] >= 58) && (word[i] <= 64)) || ((word[i] >= 91) && (word[i] <= 96)) || ((word[i] >= 123) && (word[i] <= 126))) 
      counter++;
  }

  return counter;
}

int digit_counter(char word[]) {
  int counter = 0;
  int i;

  for (i = 0; i < strlen(word); i++) {
    if ((word[i] >= 48) && (word[i] <= 57))
      counter++;
  }

  return counter;
}

int lowercase_counter(char word[]) {
  int counter = 0;
  int i;

  for (i = 0; i < strlen(word); i++) {
    if ((word[i] >= 97) && (word[i] <= 122))
      counter++;
  }

  return counter;
}