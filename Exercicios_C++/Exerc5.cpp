#include <iostream>
#include <stdlib.h>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;

class Funcionario {
  private:
    string nomeFuncionario;
    int reFuncionario;

  public:
    Funcionario();
    ~Funcionario();
    void setNomeFuncionario(string nomeFuncionario);
    void setREFuncionario(int reFuncionario);
    string getNomeFuncionario();
    int getREFuncionario();
};

class Vendedor : public Funcionario {
  private:
    float comissaoVenda;
  
  public:
    Vendedor();
    ~Vendedor();
    void setComissaoVenda(float comissaoVenda);
    float getComissaovenda();
};

Funcionario::Funcionario() {

}
Funcionario::~Funcionario() {

}
void Funcionario::setNomeFuncionario(string nomeFuncionario) {
  this->nomeFuncionario = nomeFuncionario;
}
void Funcionario::setREFuncionario(int reFuncionario) {
  this->reFuncionario = reFuncionario;
}
string Funcionario::getNomeFuncionario() {
  return this->nomeFuncionario;
}
int Funcionario::getREFuncionario() {
  return this->reFuncionario;
}


Vendedor::Vendedor() {

}
Vendedor::~Vendedor() {

}
void Vendedor::setComissaoVenda(float comissaoVenda) {
  this->comissaoVenda = comissaoVenda;
}
float Vendedor::getComissaovenda() {
  return this->comissaoVenda;
}

int main() {
  Vendedor *vendedor = new Vendedor();
  string nome;
  int RE;
  float comissao;

  system("clear");

  cout << endl << endl << "\tDados do Vendedor: ";
  cout << endl << endl << "\t\tEntre com o nome do Vendedor: ";
  getline(cin, nome);
  cout << "\t\tEntre com RE do Vendedor: ";
  cin >> RE;
  cout << "\t\tEntre com comissao do Vendedor (Ex.: 80%, fica 0.8): ";
  cin >> comissao;

  vendedor->setNomeFuncionario(nome);
  vendedor->setREFuncionario(RE);
  vendedor->setComissaoVenda(comissao);

  system("clear");

  cout << endl << endl << "\tDados do Vendedor: ";
  cout << endl << endl << "\t\tRE : " << vendedor->getREFuncionario() << "\tNome: ";
  cout << vendedor->getNomeFuncionario() << "\tComissao: " << (vendedor->getComissaovenda() * 100) << "%";
  cout << endl << endl;

  delete vendedor;
  
  return 0;
}