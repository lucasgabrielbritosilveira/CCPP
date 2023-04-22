#include "../includes/smartPointers.hpp"
#include "../includes/Block.hpp"
#include <iostream>
#include <memory>

smartPointers::smartPointers(int value1, int value2) {
  myPtr = std::make_unique<Position>(value1, value2);
}

void smartPointers::showInformation() const {
  std::cout << "Address of ptr hold : " << myPtr.get() << "\n";
}

Block *smartPointers::getMyBlockPtr() const { return myPtr.get(); }