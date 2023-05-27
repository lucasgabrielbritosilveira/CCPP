#include "Position/includes/Position.hpp"
#include <iostream>
#include <memory>
int main() {
  int constexpr option = 1;
  if constexpr (option == 1) {
    std::unique_ptr<Position> ptr = std::make_unique<Position>(4, 3, 1);
    std::unique_ptr<Position> ptr2;

    ptr->showPosition();
    ptr->showAddress();
    // ptr2 = ptr;
    ptr2->showAddress();
    ptr2 = std::move(ptr);
    ptr2->showAddress();

    ptr->showAddress();

    ptr2->showPosition();

    ptr2->setPosition(5, 4);

    ptr2->showPosition();

    ptr->showPosition();
  } else {
    std::shared_ptr<Position> ptr = std::make_shared<Position>(5, 9, 1);
    ptr->showAddress();
    ptr->showPosition();
    std::cout << ptr.use_count() << "\n";

    auto ptr2 = ptr;
    ptr2->showAddress();
    ptr->showAddress();
    std::cout << ptr.use_count() << "\n";

    auto ptr3 = ptr2;
    std::cout << ptr.use_count() << "\n";
  }
}