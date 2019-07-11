// RESPOSTA 4 - A STL é um pacote de funções pré-implementadas, presente na linguagem C++.
// Implementa alguma funções usando o esquema de container e temaplates. Com ela podemos usar estruturas
// como list, queue, vectors, stack, etc, dentre outras ferramentas. Para utilizar, devemos incluir a 
// biblioteca no cabeçalho do código.
// Dentre as mais variada funções, por exemplo o vector, cria uma espécie de vetor, onde não temos a preocupação, como
// existe no C, de receber erros "Segment Fault", pois quanto utilizamos o vector, ele irá aumentando a capacidade,
// de acordo como crescimento da estrutura.

// Exemplo: como dados em aula, usando o Vector

#include <iostream> 
#include <vector> 

using namespace std; 

int main() { 

    // Aqui, declaramos g1, como sendo uma estrutura vector, to tipo inteiro
    vector<int> g1; 

    for (int i = 1; i <= 20; i++) 
        g1.push_back(i); // push_back(), insere o dado sempre no final

    cout << "Size : " << g1.size(); // size() retorna o tamanho, ou dimensiona o tamanho da estrutura
    cout << "\nCapacity : " << g1.capacity(); // capacity() retorna a capacidade de alocação, que auto incremental
    cout << "\nMax_Size : " << g1.max_size(); // max_size() retorna o tamanho máximo, que poderá ser definido

    // redimensiona o vetor para tamanho 4 
    g1.resize(10); 

    // imprime o tamanho do vetor após o resize() 
    cout << "\nSize : " << g1.size(); 

    // verifica se o vetor não está vazio
    if (g1.empty() == false) // funcão empty(), retorna se um tipo bool que demonstra se há ou não dados na estrutura
        cout << "\nVector is not empty"; 
    else
        cout << "\nVector is empty"; 

    // Shrinks the vector 
    g1.shrink_to_fit(); // diminui o tamanho
    cout << "\nVector elements are: "; 
    for (auto it = g1.begin(); it != g1.end(); it++) // begin() e end(), retorna, respectivamente, a primeira e última posisção
        cout << *it << " "; // os "it" são interadores da estrutura, uma espécide ponteiro acoplado ao conteainer

    return 0; 
}
