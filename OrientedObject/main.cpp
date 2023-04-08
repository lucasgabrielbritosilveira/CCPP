#include "modules/Block/includes/copyConstructor.hpp"
#include "modules/Position/includes/Position.hpp"
#include <iostream>

constexpr int option = 1;

void showInformation(const Block &block) {
  std::cout << "Address of Block: " << block.getAddress() << "\n";
  std::cout << "Value of Block: " << block.getSize() << "\n";
}
int main() {

  if constexpr (option) {
    // Copy Constructor
    Block b1{42};
    Block b2{24};

    std::cout << "---- Informations of b1 ----"
              << "\n";
    showInformation(b1);

    std::cout << "---- Informations of b2 ----"
              << "\n";
    showInformation(b2);
    b2 = b1;
    std::cout << "Address after copy value to b1 to b2"
              << "\n";

    std::cout << "---- Informations of b1 ----"
              << "\n";
    showInformation(b1);

    std::cout << "---- Informations of b2 ----"
              << "\n";
    showInformation(b2);
    // if a change the destructor to delete the memory allocate, what happens?
  } else {
    Position a;
    Position b;

    a.setPosition({4, 4});
    b.setPosition({4, 4});

    std::cout << (a == b) << "\n";
  }
}