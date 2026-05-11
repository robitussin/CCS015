#include <iostream>
#include "staticstack.h"
using namespace std;

StaticStack::StaticStack(int size)
{
    stackArray = new int[size];
    stackSize = size;
    top = -1;
}

void StaticStack::push(int num)
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

void StaticStack::pop(int &num)
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

bool StaticStack::isFull()
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

bool StaticStack::isEmpty()
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