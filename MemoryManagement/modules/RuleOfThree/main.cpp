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
  minhaLista.show();
  minhaLista.remove(9);
  minhaLista.show();
}