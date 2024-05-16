#include "Stack.h"
#define MAX_SIZE 100
class ArrayStack:public Stack
{   
    int arr[MAX_SIZE];
    int index;
    public:
       ArrayStack();
        void push(int item);
        int pop();
        int top();
        bool isEmpty();
        void printStack();
};