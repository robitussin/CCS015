#include <iostream>
#include "staticintstack.h"
using namespace std;

StaticIntStack::StaticIntStack(int size)
{
    stackArray = new int[size];
    stackSize = size;
    top = -1;
}

void StaticIntStack::push(int num)
{
    if (isFull())
    {
        cout << "The stack is full. \n";
    }
    else
    {
        top++;
        stackArray[top] = num;
    }
}

void StaticIntStack::pop(int &num)
{
    if (isEmpty())
    {
        cout << "The stack is empty. \n";
    }
    else
    {
        num = stackArray[top];
        top--;
    }
}

bool StaticIntStack::isFull()
{
    bool status;

    if (top == stackSize - 1)
    {
        status = true;
    }
    else
    {
        status = false;
    }

    return status;
}

bool StaticIntStack::isEmpty()
{
    bool status;

    if (top == -1)
    {
        status = true;
    }
    else
    {
        status = false;
    }

    return status;
}