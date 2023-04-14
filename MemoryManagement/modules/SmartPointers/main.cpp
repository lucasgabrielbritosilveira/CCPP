#include "includes/Block.hpp"
#include "smartPointers.hpp"
#include <iostream>
int main() {
  smartPointers smartPtr1(30, 48);
  smartPointers smartPtr2(24, 34);

  std::cout << " ---- Information of smartPtr1 --- "
            << "\n";
  smartPtr1.showInformation();
  smartPtr1.getMyBlockPtr()->ShowInformation();

  std::cout << " ---- Information of smartPtr2 --- "
            << "\n";
  smartPtr2.getMyBlockPtr()->ShowInformation();
  smartPtr2.showInformation();

  std::cout << "------ \n";

  smartPtr1 = smartPtr2;

  std::cout << " ---- Information of smartPtr1 --- "
            << "\n";
  smartPtr1.showInformation();
  smartPtr1.getMyBlockPtr()->ShowInformation();

  std::cout << " ---- Information of smartPtr2 --- "
            << "\n";
  smartPtr2.getMyBlockPtr()->ShowInformation();
  smartPtr2.showInformation();

  std::cout << "------ \n";

  *(smartPtr1.getMyBlockPtr()) = Block(50, 15);

  std::cout << " ---- Information of smartPtr1 --- "
            << "\n";
  smartPtr1.showInformation();
  smartPtr1.getMyBlockPtr()->ShowInformation();

  std::cout << " ---- Information of smartPtr2 --- "
            << "\n";
  smartPtr2.getMyBlockPtr()->ShowInformation();
  smartPtr2.showInformation();

  std::cout << "------ \n";
}