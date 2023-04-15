#include "includes/LinkedList.hpp"
#include "includes/Node.hpp"
#include <iomanip>
#include <iostream>

int main() {
  LinkedList minhaLista = LinkedList();
  std::cout << std::boolalpha << minhaLista.empty() << "\n";
  minhaLista.add(9);
  minhaLista.add(8);
  minhaLista.add(7);
  minhaLista.add(6);
  std::cout << std::boolalpha << minhaLista.exist(2) << "\n";
  std::cout << std::boolalpha << minhaLista.exist(9) << "\n";
  std::cout << std::boolalpha << minhaLista.empty() << "\n";

  std::cout << "----- Lista 1 --------"
            << "\n";

  minhaLista.show();

  LinkedList minhaLista2 = LinkedList();
  std::cout << "----- Lista 2 --------"
            << "\n";

  minhaLista2 = minhaLista;
  minhaLista2.show();

  minhaLista.clear();
  minhaLista.add(7);
  minhaLista.add(9);
  minhaLista.add(8);

  std::cout << "----- Lista 1 --------"
            << "\n";

  minhaLista.show();

  std::cout << "----- Lista 2 --------"
            << "\n";

  minhaLista2.show();
}