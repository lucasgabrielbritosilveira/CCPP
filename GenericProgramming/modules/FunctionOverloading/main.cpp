#include <iostream>
int add(int x, int y) {
  std::cout << "Chamando função com inteiros \n";
  return (x + y);
}
float add(float x, float y) {
  std::cout << "Chamando função com floats \n";
  return (x + y);
}

template <typename T> T sub(T x, T y) { return x - y; }

template <typename T, typename X> void printar(T x, X y) {
  std::cout << x << " " << y << "\n";
}

int main() {
  constexpr int option = 2;
  auto x = 1;
  auto y = 2.5;
  switch (option) {
  case 1:
    // std::cout << sub(x, y) << "\n";
    break;
  case 2:
    printar(x, y);
    break;
  }
}