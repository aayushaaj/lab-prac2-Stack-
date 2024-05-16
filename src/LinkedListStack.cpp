#include "../../lab-prac/include/linkedlist.h"
#include "../include/LinkedListStack.h"
#include <iostream>

//LinkedListStack::LinkedListStack(){}
LinkedListStack::~LinkedListStack(){} 

void LinkedListStack::push(int item)
    {
        list.addToHead(item);
        topElement=item;
    }

int LinkedListStack::pop()
    {
        if(this->isEmpty())
        {
            std::cout<<"Stack is Empty"<<std::endl;
            return -1;
        }
        else
        {
       
        int poppedElement = topElement;
        bool removed = list.removeFromHead();
        if(removed)
        {
            topElement = list.isEmpty() ? -1 : list.getHead();
        } 
        return removed ? poppedElement : -1;
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
            return topElement;
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