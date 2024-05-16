#include "../include/ArrayStack.h"
#include <iostream>

    ArrayStack::ArrayStack() {
        index = -1;
    }

    void ArrayStack::push(int item) {
        if (index >= MAX_SIZE - 1) {
            std::cout << "Stack is full" << std::endl;
            return;
        }
        arr[++index] = item;
    }

    int ArrayStack::pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty" << std::endl;
            return -1;
        }
        return arr[index--];
    }

    bool ArrayStack::isEmpty() {
        return (index < 0);
    }

    int ArrayStack::top() {
        if (isEmpty()) {
            std::cout << "Stack is empty" << std::endl;
            return -1;
        }
        return arr[index];
    }

    void ArrayStack::printStack() {
        for (int i = 0; i <= index; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
