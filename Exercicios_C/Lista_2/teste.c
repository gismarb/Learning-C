#include <stdio.h>

int main() {
  int num;
  int result;

  num = 2;
  result = num % 2;
  printf("\n%d modulo 2 = %d\n", num, result);
  
  num = 3;
  result = num % 2;
  printf("\n%d modulo 2 = %d\n", num, result);

  num = 10;
  result = num % 2;
  printf("\n%d modulo 2 = %d\n", num, result);

  num = 1;
  result = num % 2;
  printf("\n%d modulo 2 = %d\n", num, result);

  return 0;
}