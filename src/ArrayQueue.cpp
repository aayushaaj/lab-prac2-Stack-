#include <iostream>
#include "../include/ArrayQueue.h"

ArrayQueue::ArrayQueue()
{
    frontElement = -1;
    rearElement = -1;
}

ArrayQueue::~ArrayQueue()
{
}

void ArrayQueue::enqueue(int item)
{
    if (isFull())
    {
        std::cout << "Queue is Full" << std::endl;
        return;
    }
    if (isEmpty())
    {
        frontElement = item;
    }
    rearElement = item;
    arr[++rearElement] = item;
}

int ArrayQueue::dequeue()
{
    if (isEmpty())
    {
        std::cout << "Queue is Empty" << std::endl;
        return -1;
    }
    else
    {
        int dequeuedElement = frontElement;
        frontElement = arr[++frontElement];
        return dequeuedElement;
    }
}

int ArrayQueue::front()
{
    if (isEmpty())
    {
        std::cout << "Queue is Empty" << std::endl;
        return -1;
    }
    else
    {
        return frontElement;
    }
}

bool ArrayQueue::isEmpty()
{
    return (frontElement == -1);
}

bool ArrayQueue::isFull()
{
    return (rearElement == MAX_SIZE - 1);
}