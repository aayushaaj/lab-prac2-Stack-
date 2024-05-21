#include <iostream>
#include "../include/ArrayQueue.h"

ArrayQueue::ArrayQueue()
{
    frontIndex = -1;
    rearIndex = -1;
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
        frontIndex = 0; // if queue is empty, frontIndex and rearIndex is 0
        rearIndex = 0;
    }
    else
    {
        rearIndex++;
    }
    arr[rearIndex] = item; // add item to the rear of the queue
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
        int dequeuedElement = arr[frontIndex];
        if (frontIndex == rearIndex) // if there is only one element in the queue
        {
            frontIndex = -1;
            rearIndex = -1;
        }
        else
        {
            frontIndex++;
        }
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
        return arr[frontIndex];
    }
}

int ArrayQueue::rear()
{
    if (isEmpty())
    {
        std::cout << "Queue is Empty" << std::endl;
        return -1;
    }
    else
    {
        return arr[rearIndex];
    }
}

bool ArrayQueue::isEmpty()
{
    return (frontIndex == -1);
}

bool ArrayQueue::isFull()
{
    return (rearIndex >= MAX_SIZE - 1);
}

void ArrayQueue::printQueue()
{
    if(isEmpty())
    {
        std::cout << "Queue is Empty" << std::endl;
        return;
    }
    else{
    for (int i = frontIndex; i <= rearIndex; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    }
}
