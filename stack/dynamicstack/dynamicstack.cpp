#include <iostream>
#include "dynamicstack.h"
using namespace std;

void DynamicStack::push(int num)
{
    StackNode *newNode;

    newNode = new StackNode;
    newNode->value = num;

    if (isEmpty())
    {
        top = newNode;
        newNode->next = nullptr;
    }
    else
    {
        newNode->next = top;
        top = newNode;
    }
}

void DynamicStack::pop(int &num)
{
    StackNode *temp;

    if (isEmpty())
    {
        cout << "The stack is empty. Cannot pop an item." << endl;
    }
    else
    {
        num = top->value;
        temp = top->next;
        delete top;
        top = temp;
    }
}

bool DynamicStack::isEmpty()
{
    bool status;

    if (!top)
        status = true;
    else
        status = false;

    return status;
}