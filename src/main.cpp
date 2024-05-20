#include <iostream>
#include "../include/LinkedListStack.h"
#include "../include/ArrayStack.h"
#include "../include/LinkedListQueue.h"
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
    Stack.printStack();

    if(Stack.isEmpty())
        {
            std::cout<<"Stack is Empty"<<std::endl;
        }
    else
        {
            std::cout<<"Stack is not Empty"<<std::endl;
        }

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
        std::cout<<"Updated stack:"<<std::endl;
        stack.printStack();

        return 0;

        std::cout<<"Linked List Queue"<<std::endl;
        LinkedListQueue Queue;
        if(Queue.isEmpty())
        {
            std::cout<<"Queue is Empty"<<std::endl;
        }
        else
        {
            std::cout<<"Queue is not Empty"<<std::endl;
        }
        Queue.enqueue(10);
        Queue.enqueue(20);
        Queue.enqueue(30);
        Queue.enqueue(40);
        Queue.printQueue();
        std::cout<<"Front element is:"<<Queue.front()<<std::endl;  
        std::cout<<"Dequeued element is:"<<Queue.dequeue()<<std::endl;
        std::cout<<"Updated Queue:"<<std::endl;
        std::cout<<"Front element is:"<<Queue.front()<<std::endl;

}