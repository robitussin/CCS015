#include <iostream>
#include "dynintqueue.h"
using namespace std;

DynIntQueue::DynIntQueue()
{
    front = NULL;
    rear = NULL;
    numItems = 0;
}

DynIntQueue::~DynIntQueue()
{
    clear();
}

void DynIntQueue::enqueue(int num)
{
    QueueNode* newNode;

    newNode = new QueueNode;
    newNode->value = num;
    newNode->next = NULL;

    if (isEmpty())
    {
        front = newNode;
    }   
    else
    {
        rear->next = newNode;
    } 

    rear = newNode;
    numItems++;
}

void DynIntQueue::dequeue(int &num)
{
    QueueNode* temp;

    if (isEmpty())
    {
        cout << "The queue is empty.\n";
    }   
    else
    {
        num = front->value;
        temp = front->next;
        delete front;
        front = temp;
        numItems--;
    } 
}

bool DynIntQueue::isEmpty()
{
    bool status;
    if (numItems)
        status = false;
    else
        status = true;

    return status;
}


void DynIntQueue::clear()
{
    int value;

    while (!isEmpty())
        dequeue(value);
}