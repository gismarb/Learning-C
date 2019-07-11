#include "ClassStack.hpp"
#include <iostream>

using std::cout;
using std::endl;

Stack::Stack() {
  cout << "Criando o Objeto" << endl;
}

Stack::Stack(int capacity) {
  //cout << "Criando o Objeto" << endl;
  mem = new int[capacity];
  this->capacity = capacity;
}

Stack::~Stack() {
  //cout << "Destruindo o Objeto" << endl;
}

void Stack::push(int val) {
  if(!isFull()) {
    mem[++top] = val;
    } else { 
      cout << "Pilha esta cheia!" << endl;
    }
}

int Stack::pop() {
  if(!isEmpty()) {
    return mem[top];
  } else {
    cout << "Pilha esta vazia!" << endl;
  }
}

bool Stack::isFull() {
  return top == (capacity-1);
}

bool Stack::isEmpty() {
  return top == -1;
}

int Stack::remove() {
  if(!isEmpty()) {
    int aux = mem[top];
    top--;
    return aux;
  } else {
    cout << "Pilha esta vazia!" << endl;
    return -1;
  } 
}