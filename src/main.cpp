#include <iostream>
#include "../include/LinkedListStack.h"
#include "../include/ArrayStack.h"
//#include "../include/LinkedListQueue.h"
//#include "../include/ArrayQueue.h"

int main()
{   
    std::cout<<"Linked List Stack"<<std::endl;
    LinkedListStack Stack;
    std::cout<<"\n";
    
    if(Stack.isEmpty())
        {
            std::cout<<"Stack is Empty"<<std::endl;
        }
    else
        {
            std::cout<<"Stack is not Empty"<<std::endl;
        }
    std::cout<<"\n";

    std::cout<<"Inserting elements into the stack"<<std::endl;
    Stack.push(1);
    Stack.push(2);
    Stack.push(3);
    std::cout<<"\n";

    std::cout<<"Stack contains:"<<std::endl;
    Stack.printStack();
    std::cout<<"\n";

    std::cout<<"top element is:"<< Stack.top()<<std::endl;
    std::cout<<"\n";

    std::cout<<"Popping the element from the stack"<<std::endl;
    std::cout<<"popped element is:"<< Stack.pop()<<std::endl;
    std::cout<<"\n";

    std::cout<<"Updated Stack:"<<std::endl;
    std::cout<<"top element is:"<< Stack.top()<<std::endl;
    std::cout<<"\n";

    std::cout<<"Stack contains:"<<std::endl;
    Stack.printStack();
    std::cout<<"\n";

    std::cout<<"Array Stack"<<std::endl;
    std::cout<<"\n";
    
    ArrayStack stack; // Create a stack with capacity 10
    std::cout<<"\n";

    // Check if the stack is initially empty
    if (stack.isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        }
    std::cout<<"\n";

    std::cout<<"Inserting elements into the stack"<<std::endl;
        // Push elements onto the stack
        for (int i = 0; i < 10; i++) {
            stack.push(i);
        }
        std::cout<<"\n";

        std::cout<<"Stack contains:"<<std::endl;
        // Print the stack
        stack.printStack();
        std::cout<<"\n";

        // Pop an element from the stack
        std::cout<<"Removing the element from the stack"<<std::endl; // "Popped element: 9
        int poppedElement = stack.pop();
        std::cout << "Popped element: " << poppedElement << std::endl;
        std::cout<<"\n";

        // Print the stack after popping
        std::cout<<"Updated stack:"<<std::endl;
        stack.printStack();
        std::cout<<"\n";

        // std::cout<<"Linked List Queue"<<std::endl;
        // std::cout<<"\n";
        // LinkedListQueue q;
        
//         if(q.isEmpty())
//         {
//             std::cout<<"Queue is Empty"<<std::endl;
//         }
//         else
//         {
//             std::cout<<"Queue is not Empty"<<std::endl;
//         }
//         std::cout<<"\n";

//         std::cout<<"Inserting elements into the queue"<<std::endl;
//         q.enqueue(10);
//         q.enqueue(20);
//         q.enqueue(30);
//         q.enqueue(40);
//         q.printQueue();
//         std::cout<<"\n";

//         std::cout<<"Front element is:"<<q.front()<<std::endl;
//         std::cout<<"Rear element is:"<<q.rear()<<std::endl; 
//         std::cout<<"\n";

//         std::cout<<"Dequeueing the element from the queue"<<std::endl; // "Dequeued element is: 10
//         std::cout<<"Dequeued element is:"<<q.dequeue()<<std::endl;
//         std::cout<<"\n";
//         std::cout<<"Updated Queue:"<<std::endl;
//         std::cout<<"Front element is:"<<q.front()<<std::endl;
     
//         std::cout<<"\n";

//         std::cout<<"Queue contains:"<<std::endl;
//         q.printQueue();
//         std::cout<<"\n";

//         ArrayQueue aqueue;
//         std::cout<<"Array Queue"<<std::endl;
//         std::cout<<"\n";
        
//         aqueue.printQueue(); // Queue is empty
//         std::cout<<"\n";

//         std::cout<<"Inserting elements into the queue"<<std::endl;
//         aqueue.enqueue(11);
//         aqueue.enqueue(22);
//         aqueue.enqueue(33);
//         aqueue.enqueue(44);
//         std::cout<<"\n";

//         std::cout<<"Queue contains:"<<std::endl;
//         aqueue.printQueue();
//         std::cout<<"\n";

//         std::cout<<"Front element is:"<<aqueue.front()<<std::endl;
//         std::cout<<"Rear element is:"<<aqueue.rear()<<std::endl;
//         std::cout<<"\n";

//         std::cout<<"Dequeuing the element from the queue"<<std::endl; // "Dequeued element is: 11
//         std::cout<<"Dequeued element is:"<<aqueue.dequeue()<<std::endl;
//         std::cout<<"\n";

//         std::cout<<"Updated Queue:"<<std::endl;
//         std::cout<<"Front element is:"<<aqueue.front()<<std::endl;
//         std::cout<<"Rear element is:"<<aqueue.rear()<<std::endl;
//         std::cout<<"\n";

//         std::cout<<"Queue contains:"<<std::endl;
//         aqueue.printQueue();
        

}