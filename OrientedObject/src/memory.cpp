#include "../includes/memory.hpp"
#include <iomanip>
#include <iostream>

bool Computer::memory::alocatesMemory(float amount) {
  std::cout << "\n";
  std::cout << "Free space before: " << freeSpace << "\n";
  if (amount > freeSpace) {
    return false;
  } else {
    freeSpace -= amount;
    std::cout << "Free space after: " << freeSpace << "\n";
    return true;
  }
}

bool Computer::memory::freeMemory() {
  std::cout << "\n";
  std::cout << "Freeing Memory"
            << "\n";
  freeSpace = size;
  return true;
}

void Computer::memory::showMemory() {
  std::cout << "\n";
  std::cout << "The Size of Memory is: " << size / 1024 << " GB"
            << "\n";
  std::cout << "The freeSpace is " << ((freeSpace) / size) * 100 << "\%";
  std::cout << "\n";
}

// Copy Constructor
