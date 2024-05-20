#include "../include/LinkedListQueue.h"
#include <iostream>

LinkedListQueue::LinkedListQueue()
{
    frontElement = -1;
    rearElement = -1;
}

LinkedListQueue::~LinkedListQueue()
{
}

void LinkedListQueue::enqueue(int item)
{
    if (isEmpty())
    {
        frontElement = item;
    }
    rearElement = item;
    list.addToTail(item);
}

int LinkedListQueue::dequeue()
{
    if (isEmpty())
    {
        std::cout << "Queue is Empty" << std::endl;
        return -1;
    }
    else
    {
        int dequeuedElement = frontElement;
        bool removed = list.removeFromHead(); // removes the front element
        if (removed)
        {
            frontElement = list.isEmpty() ? -1 : list.getHead(); // if list is empty, frontElement is -1, else it is the new head
        }
        return removed ? dequeuedElement : -1;
    }
}

int LinkedListQueue::front()
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

bool LinkedListQueue::isEmpty()
{
    return list.isEmpty();
}

bool LinkedListQueue::isFull()
{
    return false;
}