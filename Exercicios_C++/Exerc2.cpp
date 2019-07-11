#include <iostream>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::cin;

class CalculadoraAritmetica {
  private:
    float numero;

  public:
    CalculadoraAritmetica();
    ~CalculadoraAritmetica();
    float somar(float numA, float numB);
    float subtrair(float numA, float numB);
    float multiplicar(float numA, float numB);
    float dividir(float numA, float numB);
    float validaNumeroB(float numB);
};

CalculadoraAritmetica::CalculadoraAritmetica() {

}

CalculadoraAritmetica::~CalculadoraAritmetica() {

}

float CalculadoraAritmetica::somar(float numA, float numB) {
  return this->numero = (numA + numB);
}

float CalculadoraAritmetica::subtrair(float numA, float numB) {
  return this->numero = (numA - numB);
}

float CalculadoraAritmetica::multiplicar(float numA, float numB) {
  return this->numero = (numA * numB);
}

float CalculadoraAritmetica::dividir(float numA, float numB) {
    return this->numero = (numA / numB);
}

float CalculadoraAritmetica::validaNumeroB(float numB) {
  if (numB == 0) {
    cout << "\t\tNao Existe divisao por " << numB << endl;
    cout << "\t\tEntre com um numero diferente de " << numB << " : ";
    cin >> numB;
      validaNumeroB(numB);
  }
  
  else
    return numB;
}

int main() {
  CalculadoraAritmetica *calculadora = new CalculadoraAritmetica();
  float numero1, numero2, exceptRetdiv;

  system("clear");

  cout << endl << endl << "\tCalculadora Aritmerica (+ - * /)" << endl << endl;
  cout << "Digite o Numero 1: ";
  cin >> numero1;

  cout << "Digite o Numero 2: ";
  cin >> numero2;
  numero2 = calculadora->validaNumeroB(numero2);

  cout << endl << "\tA SOMA entre os números " << numero1 << " e " << numero2 << " resulta em " << calculadora->somar(numero1, numero2) << endl;
  cout << endl << "\tA SUBTRACAO entre os números " << numero1 << " e " << numero2 << " resulta em " << calculadora->subtrair(numero1, numero2) << endl;
  cout << endl << "\tA MULTIPLICACAO entre os números " << numero1 << " e " << numero2 << " resulta em " << calculadora->multiplicar(numero1, numero2) << endl;
  cout << endl << "\tA DIVISAO entre os números " << numero1 << " e " << numero2 << " resulta em " << calculadora->dividir(numero1, numero2) << endl;
  cout << endl;

  delete calculadora;
  
  return 0;
}