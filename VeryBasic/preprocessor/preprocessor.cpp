#include <iostream>
#define PI 3
#define DEBUG 1

#ifdef DEBUG
int calc(int x) {
  x = x + 1;
  return x;
}
#else
int calc(int x) {
  x = x + 2;
  return x;
}
#endif

int main() {
  float x = PI;
  calc(x);
  std::cout << x << "\n";
  std::cout << calc(x) << "\n";
}