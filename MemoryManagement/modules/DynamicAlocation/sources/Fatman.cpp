#include "../includes/Fatman.hpp"
#include <iostream>

Fatman::Fatman() { std::cout << "Inicializando...\n"; }

Fatman::~Fatman() { std::cout << "Destruindo...\n"; }

void Fatman::eat(Meal &meal) { auto tmp = new int[meal.kcal]; }