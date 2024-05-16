#include <iostream>
#include "../include/LinkedListStack.h"
//#include "../include/Stack.h"

int main()
{
    LinkedListStack Stack;
    if(Stack.isEmpty())
        {
            std::cout<<"Stack is Empty"<<std::endl;
        }
    else
        {
            std::cout<<"Stack is not Empty"<<std::endl;
        }

    Stack.push(1);
    Stack.push(2);
    Stack.push(3);
    
    if(Stack.isEmpty())
        {
            std::cout<<"Stack is Empty"<<std::endl;
        }
    else
        {
            std::cout<<"Stack is not Empty"<<std::endl;
        }

    Stack.printStack();

    std::cout<<"top element is:"<< Stack.top()<<std::endl;
    std::cout<<"popped element is:"<< Stack.pop()<<std::endl;
    std::cout<<"top element is:"<< Stack.top()<<std::endl;


}