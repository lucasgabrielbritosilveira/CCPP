#include "../includes/Block.hpp"
#include <iostream>
Block::Block(int size, int width){
    this->size = size;
    this->width = width;
}

void Block::ShowInformation(){
    std::cout<<"Size: "<< size<<" Address of size: "<<&size<<"\n";
    std::cout<<"Width "<<width<<" Address of width "<<&width<<"\n";
}