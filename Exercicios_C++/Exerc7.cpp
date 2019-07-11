#include <iostream>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::cin;

class A {
  public:
    void f() {
      cout << endl << "...passei por aqui!!!" << endl;
  }
};

class B : public A {
  public:
    B() {
      A::f();
      int num = f();
      cout << endl << "Agora, sobrescrevendo, e retonando do que era vazio: " << num << endl;
    }
    ~B() {
      
    }
    int f() {
      return 10;
    }
};

int main() {
  B *b = new B();

  delete b;
  return 0;
}