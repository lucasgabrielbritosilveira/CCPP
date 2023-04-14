#pragma once
class Node {
public:
  int value;
  Node *next = nullptr;
  Node *previous = nullptr;
  Node(int value);
};