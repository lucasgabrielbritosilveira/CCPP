#include <iostream>
#include <stdio.h>
#include <string>
constexpr int options = 1;
int main() {
  // size
  if constexpr (options == 0) {
    int a = 10;
    short int shortA = 0;
    long int longA = 0;
    long long int veryLongA = 0;
    float b = 0.0;
    double c = 0.0;
    char d = 't';
    std::string str = "Primeiro encontro da célula";
    auto *strPtr = &str;

    std::cout << "Size of an int " << sizeof(a) << "\n";
    std::cout << "Size of a short int " << sizeof(shortA) << "\n";
    std::cout << "Size of a long int " << sizeof(longA) << "\n";
    std::cout << "Size of a long long int " << sizeof(veryLongA) << "\n";
    std::cout << "Size of a float " << sizeof(b) << "\n";
    std::cout << "Size of a double " << sizeof(c) << "\n";
    std::cout << "Size of a char " << sizeof(d) << "\n";
    std::cout << "Size of a string " << sizeof(str) << "\n";
    std::cout << "Size of a pointer to a string " << sizeof(strPtr) << "\n";
  }
  // const pointer e pointer to a const
  if constexpr (options == 1) {
    int x = 10;
    int y = 20;
    int *myPtr = &x;

    // printf("0x%X", myPtr);
    std::cout << x << "\n";

    std::cout << *myPtr << "\n";

    *myPtr = y;
    myPtr = &y;
    std::cout << x << "\n";

    std::cout << *myPtr << "\n";

    int &ref = y;
    std::cout << y << "\n";
    ref = 45;
    std::cout << ref << "\n";
    std::cout << y << "\n";
  }
}