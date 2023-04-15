#include "../includes/LinkedList.hpp"
#include "../includes/Node.hpp"
#include <iostream>

LinkedList::LinkedList() { head = nullptr; }
LinkedList::~LinkedList() {
  std::cout << "Destruindo \n";
  auto node = head;
  while (node != nullptr) {
    std::cout << "Apagando o nó " << node->value << "\n";
    auto tmp = node->next;
    remove(node->value);
    node = tmp;
  }
}
LinkedList &LinkedList::operator=(LinkedList const &b) {
  clear();
  Node *node = b.head;
  while (node != nullptr) {
    this->add(node->value);
    node = node->next;
  }
  return *this;
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
void LinkedList::remove(Node *node) {
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
void LinkedList::remove(int value) {
  if (Node *node = search(value); node != nullptr) {
    remove(node);
  }
}
void LinkedList::clear() {
  auto node = this->head;
  while (node != nullptr) {
    auto tmp = node->next;
    remove(node);
    node = tmp;
  }
}