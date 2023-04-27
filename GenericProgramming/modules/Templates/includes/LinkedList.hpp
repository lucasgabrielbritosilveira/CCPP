#include "../includes/Node.hpp"
#include <iostream>
#pragma once

template <typename T> class LinkedList {
private:
  Node<T> *head;
  Node<T> *search(T value) {
    auto node = head;
    while (node != nullptr) {
      if (node->value == value) {
        return node;
      }
      node = node->next;
    }
    return nullptr;
  }
  void remove(T value) {
    if (Node<T> *node = search(value); node != nullptr) {
      remove(node);
    }
  }

public:
  LinkedList<T> operator+(LinkedList const &b) {
    LinkedList tmp = LinkedList();

    auto node = head;
    while (node != nullptr) {
      tmp.add(node->value);
      node = node->next;
    }

    node = b.head;
    while (node != nullptr) {
      tmp.add(node->value);
      node = node->next;
    }

    return tmp;
  }
  LinkedList<T> &operator=(LinkedList const &b) {
    clear();
    Node<T> *node = b.head;
    while (node != nullptr) {
      this->add(node->value);
      node = node->next;
    }
    return *this;
  }
  Node<T> *tail() {
    auto node = head;
    while (node != nullptr) {
      node = node->next;
    }
    return node;
  }
  void add(T value) {
    if (empty()) {
      head = new Node(value);
    } else {
      Node<T> *node = head;
      while (node->next != nullptr) {
        node = node->next;
      }
      node->next = new Node(value);
      node->next->previous = node;
    }
  }
  bool exist(T value) { return (search(value) != nullptr); }
  void remove(Node<T> *node) {
    if (node->previous == nullptr) {
      if (auto tmp = node->next; tmp != nullptr) {
        tmp->previous = nullptr;
        head = tmp;
      } else {
        head = nullptr;
      }
      delete node;
      return;
    }

    if (node->next == nullptr) {
      node->previous->next = nullptr;
      delete node;
      return;
    }

    if (node->next != nullptr && node->previous != nullptr) {
      node->previous->next = node->next;
      delete node;
      return;
    }
  }
  bool empty() { return (head == nullptr); }
  void clear() {
    auto node = this->head;
    while (node != nullptr) {
      auto tmp = node->next;
      remove(node);
      node = tmp;
    }
  }
  void show() {
    auto node = head;
    while (node != nullptr) {
      std::cout << " " << node->value;
      node = node->next;
    }
    std::cout << "\n";
  }
  LinkedList() { head = nullptr; }
  ~LinkedList() {
    auto node = head;
    while (node != nullptr) {
      auto tmp = node->next;
      remove(node->value);
      node = tmp;
    }
  }
};
