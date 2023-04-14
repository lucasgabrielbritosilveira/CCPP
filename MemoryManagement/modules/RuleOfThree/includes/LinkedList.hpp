#include "../includes/Node.hpp"
#pragma once

class LinkedList {
private:
  Node *head = nullptr;
  Node *search(int value);

public:
  Node *tail();
  void add(int value);
  bool exist(int value);
  void remove(int value);
  bool empty();
  void show();

  LinkedList operator+(LinkedList const &);
  LinkedList operator=(LinkedList const &);
};
