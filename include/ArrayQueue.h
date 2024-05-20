#include "Queue.h"
#define MAX_SIZE 100

class ArrayQueue : public Queue
{
        int arr[MAX_SIZE];
        int frontElement;
        int rearElement;
    public:
        ArrayQueue();
        ~ArrayQueue();

        void enqueue(int item);
        int dequeue();
        
        int front();
        bool isEmpty();
        bool isFull();
        void printQueue();
};