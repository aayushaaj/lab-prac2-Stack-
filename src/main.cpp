#include <iostream>
// #include "../include/LinkedListStack.h"
// #include "../include/ArrayStack.h"
#include "../include/LinkedListQueue.h"
#include "../include/ArrayQueue.h"

int main()
{   
    // std::cout<<"Linked List Stack"<<std::endl;
    // LinkedListStack Stack;
    // if(Stack.isEmpty())
    //     {
    //         std::cout<<"Stack is Empty"<<std::endl;
    //     }
    // else
    //     {
    //         std::cout<<"Stack is not Empty"<<std::endl;
    //     }

    // Stack.push(1);
    // Stack.push(2);
    // Stack.push(3);
    // Stack.printStack();

    // if(Stack.isEmpty())
    //     {
    //         std::cout<<"Stack is Empty"<<std::endl;
    //     }
    // else
    //     {
    //         std::cout<<"Stack is not Empty"<<std::endl;
    //     }

    // std::cout<<"top element is:"<< Stack.top()<<std::endl;
    // std::cout<<"popped element is:"<< Stack.pop()<<std::endl;
    // std::cout<<"top element is:"<< Stack.top()<<std::endl;
    // std::cout<<"\n";

    // std::cout<<"Array Stack"<<std::endl;

    // ArrayStack stack; // Create a stack with capacity 10

    // // Check if the stack is initially empty
    // if (stack.isEmpty()) {
    //     std::cout << "Stack is empty" << std::endl;
    //     }

    //     // Push elements onto the stack
    //     for (int i = 0; i < 10; i++) {
    //         stack.push(i);
    //     }

    //     // Print the stack
    //     stack.printStack();

    //     // Pop an element from the stack
    //     int poppedElement = stack.pop();
    //     std::cout << "Popped element: " << poppedElement << std::endl;

    //     // Print the stack after popping
    //     std::cout<<"Updated stack:"<<std::endl;
    //     stack.printStack();
    //     std::cout<<"\n";

        std::cout<<"Linked List Queue"<<std::endl;
        
        LinkedListQueue q;
        
        if(q.isEmpty())
        {
            std::cout<<"Queue is Empty"<<std::endl;
        }
        else
        {
            std::cout<<"Queue is not Empty"<<std::endl;
        }

        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);
        q.printQueue();

        std::cout<<"Front element is:"<<q.front()<<std::endl;  
        std::cout<<"Dequeued element is:"<<q.dequeue()<<std::endl;
        std::cout<<"Updated Queue:"<<std::endl;
        q.printQueue();
        std::cout<<"\n";

        ArrayQueue aqueue;
        std::cout<<"Array Queue"<<std::endl;

        aqueue.printQueue();

        aqueue.enqueue(11);
        aqueue.enqueue(22);
        aqueue.enqueue(33);
        aqueue.enqueue(44);

        aqueue.printQueue();

        std::cout<<"Front element is:"<<aqueue.front()<<std::endl;
        std::cout<<"Dequeued element is:"<<aqueue.dequeue()<<std::endl;
        std::cout<<"Updated Queue:"<<std::endl;
        std::cout<<"Front element is:"<<aqueue.front()<<std::endl;
        std::cout<<"Queue is Full:"<<aqueue.isFull()<<std::endl;

}