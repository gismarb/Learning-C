#include <iostream>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::cin;

#define NLIN 5 
#define NCOL 3

class ContainerMatriz {
  private:
    int matriz[NLIN][NCOL] = {{1, 0, 0}, {1, 0, 0}, {1, 1, 1}, {1, 0 , 1}, {0, 0, 1}};

  public:
    // Contrustores: Fazendo o uso do exemplo utilizado em classse,
    // usamos os construtores/destrutores para inicializações da Classe.
    // No caso do C++, ainda que não façamos a declaração dos mesmos, o C++ irá faze isso automaticamente.
    // Caso, seja de nossa vontade ou necessidade, podemos o uso do mesmo para customizar  a inicialização da classe.
    // Normalmente, sãos métodos, onde não declaramos o seu tipo, tem o mesmo nome da Classe, e o destrutir é iniciado
    // por " ~ "
    ContainerMatriz();
    ~ContainerMatriz();
};

ContainerMatriz::ContainerMatriz() {
  int i, j, total = 0;
  for (i = 0; i < NLIN; i++) {
    for (j = 0; j < NCOL; j++)
      total += matriz[i][j];
  }

  cout << endl << endl << "A somatoria das celulas da Matriz e = " << total << endl << endl;
}

ContainerMatriz::~ContainerMatriz() {

}

int main() {
  ContainerMatriz *matriz = new ContainerMatriz();

  delete matriz;
  return 0;
}