#pragma once
#include "Stack.h"
#include "../../lab-prac/include/linkedlist.h"

class LinkedListStack: public Stack
{
public:
    LinkedListStack(){}
    ~LinkedListStack();

    void push(int item);
    int pop();
    int top();
    bool isEmpty();
    bool isFull();
    void printStack();
    
 private :
    linkedlist list;
    int topElement;
};