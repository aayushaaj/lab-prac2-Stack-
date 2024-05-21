#include "Queue.h"
#include "../../lab-prac/include/linkedlist.h"

class LinkedListQueue : public Queue
{
    public:
        LinkedListQueue();
        ~LinkedListQueue();

        void enqueue(int item);
        int dequeue();

        int front();
        int rear();
        bool isEmpty();
        bool isFull();
        void printQueue();

    private:
        linkedlist list;
        int frontElement;
        int rearElement;
};