#include "../../lab-prac/include/linkedlist.h"
#include "../include/LinkedListStack.h"
#include <iostream>

LinkedListStack::LinkedListStack(){}
LinkedListStack::~LinkedListStack(){}

void LinkedListStack::push(int item)
{
    list.addToHead(item);
}
int LinkedListStack::pop()
{
    if(this->isEmpty())
    {
        std::cout<<"Stack is Empty"<<std::endl;
        return NULL;
    }
    else{
    
        list.removeFromHead();
    }
}
int LinkedListStack::top()
{
    if(this->isEmpty())
     {
        std::cout<<"Stack is Empty"<<std::endl;
        return NULL;
    }
    else{
        return ;
    }
}