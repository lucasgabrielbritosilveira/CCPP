#pragma once
struct Meal {
  int kcal;
};
class Fatman {

public:
  int hungry = 1000000;
  void eat(Meal &);
  Fatman();
  ~Fatman();
};