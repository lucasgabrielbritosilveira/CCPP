#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

// código proveniente de https://www.inf.pucrs.br/~pinho/PRGSWB/STL/stl.html

int main() {
  std::vector<int> meuVetor;    // cria um vetor de inteiros vazio
  std::vector<int>::iterator j; // cria um iterador de inteiros

  meuVetor.push_back(7); // inclue no fim do vetor um elemento
  meuVetor.push_back(11);
  meuVetor.push_back(2006);

  // vai imprimir três elementos {7, 11, 2006}
  for (j = meuVetor.begin(); j != meuVetor.end(); j++)
    cout << "Imprimindo o vetor...: " << *j << endl;

  cout << endl;
  // insere 55 como segundo elemento, deslocando os demais para a próxima
  // posição
  meuVetor.insert(meuVetor.begin() + 1, 55);

  // agora, imprimir quatro elementos {7, 55, 11, 2006}
  for (j = meuVetor.begin(); j != meuVetor.end(); j++)
    cout << "Inseri no meio do vetor..: " << *j << endl;

  cout << endl;
  // retira 11 da lista (terceira posição)
  meuVetor.erase(meuVetor.begin() + 2);

  // agora, tem que imprimir três de novo {7, 55, 2006}
  for (j = meuVetor.begin(); j != meuVetor.end(); j++)
    cout << "Retirei no meio do vetor..: " << *j << endl;

  meuVetor.clear(); // limpa todo o vetor

  return 0;
}
