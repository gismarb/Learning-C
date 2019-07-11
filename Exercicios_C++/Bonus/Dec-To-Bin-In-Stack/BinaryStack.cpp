#include "ClassDecToBin.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
  DecToBin dectobin;
  int number;

  cout << endl << "\tCONVERSOR DE DECIMAL (inteiro) PARA BINARIO" << endl;
  cout << "\tObs.: Faz uso de POO e estrutura de dados em Pilha" << endl;
  cout << endl << "Entre com um numero Decimal (inteiro): ";
  cin >> number;

  dectobin.setBinary(number);
  dectobin.displayBinary();

  cout << endl;
  
  return 0;
}
