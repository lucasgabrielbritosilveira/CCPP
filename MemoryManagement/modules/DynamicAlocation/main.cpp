#include "includes/Fatman.hpp"
#include <iostream>
int main() {
  constexpr int option = 1;
  if constexpr (option == 1) {
    Meal chiken;
    chiken.kcal = 5000;
    Fatman *Bob = new Fatman();
    int i = 0;
    while (i < 1) {
      std::cout << "Comendo...\n";
      Bob->eat(chiken);
      i++;
    }

    free(Bob);
    // delete Bob;
    while (true) {
    }
  } else if constexpr (option == 2) {

    Meal chiken;
    chiken.kcal = 5000;
    auto Bob = (Fatman *)malloc(sizeof(Fatman));
    int i = 0;
    while (i < 2) {
      std::cout << "Comendo...\n";
      Bob->eat(chiken);
      i++;
    }

    while (true) {
    }
  }
}