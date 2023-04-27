#pragma once
template <typename T> class Node {
public:
  Node(T value) { this->value = value; }
  Node<T> *next = nullptr;
  Node<T> *previous = nullptr;
  T value;
};
