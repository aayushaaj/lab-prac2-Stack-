#pragma once
class Stack
{
    public:
        Stack(){};
        ~Stack(){};
    
        virtual void push(int item)=0;
        virtual int pop()=0;
        virtual int top()=0;

        virtual bool isEmpty()=0;
};