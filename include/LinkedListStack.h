#pragma once
#include "stack.h"
#include "../../lab-prac/include/linkedlist.h"

class LinkedListStack:public Stack
{
public:
    LinkedListStack(){}
    ~LinkedListStack(){}

    void push(int item);
    int pop();
    int top();
    bool isEmpty();
    
 private :
    linkedlist list;
};