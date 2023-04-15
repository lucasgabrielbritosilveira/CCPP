#include "../includes/Node.hpp"
#pragma once

class LinkedList {
private:
  Node *head;
  Node *search(int value);
  void remove(Node *node);

public:
  LinkedList operator+(LinkedList const &);
  LinkedList &operator=(LinkedList const &);
  Node *tail();
  void add(int value);
  bool exist(int value);
  void remove(int value);
  bool empty();
  void clear();
  void show();
  LinkedList();
  ~LinkedList();
};
