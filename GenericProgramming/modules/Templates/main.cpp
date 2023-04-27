#include "includes/LinkedList.hpp"
#include "includes/Node.hpp"
#include <iomanip>
#include <iostream>
#include <stack>
template <typename T> T add(T &x, T &y) { return x + y; }
int main() {
  auto minhaLista = LinkedList<std::string>();
  std::cout << std::boolalpha << minhaLista.empty() << "\n";
  minhaLista.add("F");
  minhaLista.add("E");
  minhaLista.add("B");
  minhaLista.add("C");
  std::cout << std::boolalpha << minhaLista.exist("E") << "\n";
  std::cout << std::boolalpha << minhaLista.exist("C") << "\n";
  std::cout << std::boolalpha << minhaLista.empty() << "\n";

  std::cout << "----- Lista 1 --------"
            << "\n";

  minhaLista.show();

  std::cout << "----- Lista 2 -------- \n";

  auto minhaLista2 = LinkedList<int>();
  minhaLista2.add(2.5);
  minhaLista2.add(2.5);
  minhaLista2.show();

  // auto minhaLista3 = minhaLista + minhaLista2;

  auto minhaLista4 = LinkedList<std::string>();
  minhaLista4.add("o");
  minhaLista4.add("y");
  minhaLista4.add("x");
  minhaLista4.add("z");

  std::cout << "----- Lista 4 -------- \n";
  minhaLista4.show();
  std::cout << "----- Lista 4 -------- \n";
  minhaLista4 = minhaLista4 + minhaLista;
  minhaLista4.show();
}