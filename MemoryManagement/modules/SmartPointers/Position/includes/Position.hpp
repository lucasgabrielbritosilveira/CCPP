#include <iostream>
#ifndef POSITION_H
#define POSITION_H
class Position {
public:
  int id;
  ~Position();
  Position(int x, int y, int id);
  int x;
  int y;
  void showPosition();
  void setPosition(int x, int y);
  void showAddress();
  bool operator==(const Position &b) const;
};
#endif