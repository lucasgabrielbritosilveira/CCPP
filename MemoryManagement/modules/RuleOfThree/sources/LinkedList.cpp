#include "../includes/LinkedList.hpp"
#include "../includes/Node.hpp"
#include <iostream>
Node *LinkedList::tail() {
  auto node = head;
  while (node != nullptr) {
    node = node->next;
  }
  return node;
}
bool LinkedList::empty() { return (head == nullptr); }
void LinkedList::add(int value) {
  if (empty()) {
    head = new Node(value);
  } else {
    Node *node = head;
    while (node->next != nullptr) {
      node = node->next;
    }
    node->next = new Node(value);
    node->next->previous = node;
  }
}
Node *LinkedList::search(int value) {
  auto node = head;
  while (node != nullptr) {
    if (node->value == value) {
      return node;
    }
    node = node->next;
  }
  return nullptr;
}

bool LinkedList::exist(int value) { return (search(value) != nullptr); }

void LinkedList::show() {
  auto node = head;
  while (node != nullptr) {
    std::cout << " " << node->value;
    node = node->next;
  }
  std::cout << "\n";
}
void LinkedList::remove(int value) {
  if (Node *node = search(value); node != nullptr) {
    if (node->previous == nullptr) {
      std::cout << " 1 ";
      if (node->next != nullptr) {
        node->next->previous = nullptr;
      } else {
        delete head;
        head = nullptr;
        std::cout << " 1.2 ";
      }
      return;
    }

    if (node->next == nullptr) {
      node->previous->next = nullptr;
      delete node;

      std::cout << "\n 2 \n";
      return;
    }

    if (node->next != nullptr && node->previous != nullptr) {
      node->previous->next = node->next;
      delete node;

      std::cout << "\n 3 \n";
      return;
    }
  }
}

LinkedList LinkedList::operator+(LinkedList const &b) {
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
LinkedList LinkedList::operator=(LinkedList const &b) {}
