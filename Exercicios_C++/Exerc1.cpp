#include <iostream>
#include <stdlib.h>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;

class Pessoa {
  private:
    string  nomePessoa;
    int idadePessoa;
    string sexoPessoa;
    long int cpfPessoa;
    long int rgPessoa;

  public:
    Pessoa();
    ~Pessoa();
    void setNomePessoa(string nomePessoa);
    void setIdadePessoa(int idadePessoa);
    void setSexoPessoa(char sexoPessoa);
    void setCPFPessoa(long int cpfPessoa);
    void setRGPessoa(long int rgPessoa);
    string getNomePessoa();
    int getIdadePessoa();
    string getsexoPessoa();
    long int getCPFPessoa();
    long int getRGPessoa();

};
Pessoa::Pessoa() {

}
Pessoa::~Pessoa() {

}

void Pessoa::setNomePessoa(string nomePessoa) {
  this->nomePessoa = nomePessoa;
}

void Pessoa::setIdadePessoa(int idadePessoa) { 
  this->idadePessoa = idadePessoa;
}

void Pessoa::setSexoPessoa(char sexoPessoa) {
  if ((sexoPessoa == 'M') || (sexoPessoa == 'm'))
    this->sexoPessoa = "Masculino";

  if ((sexoPessoa == 'F') || (sexoPessoa == 'f'))
    this->sexoPessoa = "Feminino";
    
  if ((sexoPessoa == 'I') || (sexoPessoa == 'i'))
    this->sexoPessoa = "Indeterminado";
}

void Pessoa::setCPFPessoa(long int cpfPessoa) {
  this->cpfPessoa = cpfPessoa; 
}

void Pessoa::setRGPessoa(long int rgPessoa) {
  this->rgPessoa = rgPessoa;
}

string Pessoa::getNomePessoa() {
  return this->nomePessoa;
}

int Pessoa::getIdadePessoa() {
  return this->idadePessoa;
}

string Pessoa::getsexoPessoa() {
  return this->sexoPessoa;
}

long int Pessoa::getCPFPessoa() {
  return this->cpfPessoa;
}

long int Pessoa::getRGPessoa() {
  return this->rgPessoa;
}

int main() {
  Pessoa *pessoa = new Pessoa();
  string nome;
  int idade;
  char sexo;
  long int CPF;
  long int RG;

  system("clear");

  cout << endl << "Digite o nome da pessoa: ";
  getline(cin, nome);
  pessoa->setNomePessoa(nome);

  cout << endl << "Digite a idade da pessoa: ";
  cin >> idade;
  pessoa->setIdadePessoa(idade);

  cout << endl << "Digite o sexo da pessoa (M, F ou I): ";
  cin >> sexo;
  pessoa->setSexoPessoa(sexo);

  cout << endl << "Digite o CPF da pessoa: ";
  cin >> CPF;
  pessoa->setCPFPessoa(CPF);

  cout << endl << "Digite o RG da pessoa: ";
  cin >> RG;
  pessoa->setRGPessoa(RG);

  system("clear");

  cout << endl << endl << "\tDados da Pessoa:" << endl << endl;
  cout << pessoa->getNomePessoa() << ", ";
  cout << pessoa->getIdadePessoa() << " anos, sexo ";
  cout << pessoa->getsexoPessoa() << ", CPF ";
  cout << pessoa->getCPFPessoa() << ", RG ";
  cout << pessoa->getRGPessoa() << endl << endl;

  delete pessoa;

  return 0;
}