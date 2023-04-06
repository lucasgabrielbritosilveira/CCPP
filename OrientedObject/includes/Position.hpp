#include <iostream>
#ifndef POSITION_H
#define POSITION_H
class Position {
public:
  int x;
  int y;
  void showPosition();
  void setPosition(const Position &b);
  bool operator==(const Position &b) const;
};
#endif