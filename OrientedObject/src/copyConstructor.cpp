#include <iostream>
#include "../includes/copyConstructor.hpp"
Block::Block(int size){
    this->size = new int(size);
}
Block::~Block(){
   //delete size;
}
int Block::getSize() const{
    return *size;
}

void Block::setSize(int size){
    *this->size = size;
}
int* Block::getAddress() const{
    return size;
}