#include "secretMath.hpp"
#include <iostream>
#include <string>
int main() {
  std::string texto = "MeuTexto";

  std::string output = encrypt(texto);
  std::cout << output << "\n";
  std::cout << decrypt(output) << "\n";
}