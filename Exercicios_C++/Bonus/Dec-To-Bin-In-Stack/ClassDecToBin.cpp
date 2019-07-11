#include "ClassDecToBin.hpp"
#include "ClassStack.hpp"
#include <iostream>

using std::cout;
using std::endl;

Stack *stack = new Stack(100);

void DecToBin::setBinary(int dec) {
  if (dec < BINARY) {
    Binary = dec;
    stack->push(Binary);
  } else {
    Decimal = dec;
    Rest = (Decimal % BINARY);
    Quotient = (Decimal / BINARY);
    Binary = Rest;
    stack->push(Binary);
    setBinary(Quotient);
  }
}

void DecToBin::displayBinary(){
  cout << "Numero Binario = ";
  while (!stack->isEmpty()) {
    cout << stack->pop();
    stack->remove();
  }
  cout << endl;
}