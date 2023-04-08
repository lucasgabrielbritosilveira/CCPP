#pragma once
#include <iostream>
namespace Computer {
class memory {
private:
  struct Block {
    int heigth = 1;
    int width = 1;
    int deep = 1;
  };
  float size = 0;
  int speed = 0;
  float freeSpace = 0;
  Block b1;

public:
  ~memory(){};
  memory(int size) {
    this->size = size;
    this->freeSpace = size;
  }
  bool alocatesMemory(float amount);
  bool freeMemory();
  void showMemory();
  void showStruct() {
    std::cout << "Block H  " << Computer::memory::b1.heigth;
  };
};
} // namespace Computer