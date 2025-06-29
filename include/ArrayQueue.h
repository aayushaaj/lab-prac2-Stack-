#include "Queue.h"
#define MAX_SIZE 100

class ArrayQueue : public Queue
{
        int arr[MAX_SIZE];
        int frontIndex;
        int rearIndex;

    public:
        ArrayQueue();

        void enqueue(int item);
        int dequeue();
        
        int front();
        int rear();
        bool isEmpty();
        bool isFull();
        void printQueue();
};