#include "../includes/Position.hpp"

Position::Position(int x, int y, int id) {
  this->x = x;
  this->y = y;
  this->id = id;
}
Position::~Position() { std::cout << "Destruindo " << id << "\n"; }
void Position::showPosition() { std::cout << "(" << x << "," << y << ")\n"; }

bool Position::operator==(const Position &b) const {
  return (x == b.x && y == b.y);
}
void Position::showAddress() { std::cout << "Address: " << this << "\n"; }
void Position::setPosition(int x, int y) {
  this->x = x;
  this->y = y;
}