#include <iostream>
#include "../include/LinkedListStack.h"
#include "../include/ArrayStack.h"

int main()
{   
    std::cout<<"Linked List Stack"<<std::endl;
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

    std::cout<<"Array Stack"<<std::endl;

    ArrayStack stack; // Create a stack with capacity 10

    // Check if the stack is initially empty
    if (stack.isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        }

        // Push elements onto the stack
        for (int i = 0; i < 10; i++) {
            stack.push(i);
        }

        // Print the stack
        stack.printStack();

        // Pop an element from the stack
        int poppedElement = stack.pop();
        std::cout << "Popped element: " << poppedElement << std::endl;

        // Print the stack after popping
        stack.printStack();

        return 0;
    
}