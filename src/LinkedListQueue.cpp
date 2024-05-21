#include "../include/LinkedListQueue.h"
#include <iostream>

LinkedListQueue::LinkedListQueue()
{
    frontElement = -1;
    rearElement = -1;
}

void LinkedListQueue::enqueue(int item)
{
    list.addToTail(item);
}

int LinkedListQueue::dequeue()
{
    if (isEmpty())
    {
        return -1;
    }
    else
    {
        int dequeuedElement = list.getHead();
        list.removeFromHead();
        frontElement = list.isEmpty() ? -1 : list.getHead(); // if list is empty, frontElement is -1, else it is the new head
        return dequeuedElement;
    }
}

int LinkedListQueue::front()
{
    if (isEmpty())
    {
        return -1;
    }
    else
    {
        return list.getHead();
    }
}

int LinkedListQueue::rear()
{
    if (isEmpty())
    {
        return -1;
    }
    else
    {
        return rearElement;
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

void LinkedListQueue::printQueue()
{
    list.print();
}
