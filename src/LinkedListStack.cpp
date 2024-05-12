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
            return -1;
        }
        else{
        
            int popElement=list.removeFromHead();
            return popElement;;
        }
    }

int LinkedListStack::top()
    {
        if(this->isEmpty())
        {
            std::cout<<"Stack is Empty"<<std::endl;
            return -1;
        }
        else{
            int topelement = list.removeFromHead();
            list.addToHead(topelement);
            return topelement;

        }
    }

bool LinkedListStack::isEmpty()
    {
        return list.isEmpty();
    }

void LinkedListStack::printStack()
    {
        list.print();
    }