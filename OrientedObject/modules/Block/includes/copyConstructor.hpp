#pragma once

class Block {
    int* size;
    public:
        Block(int size);
        int getSize() const;
        void setSize(int size);
        int* getAddress() const;
        ~Block();
};