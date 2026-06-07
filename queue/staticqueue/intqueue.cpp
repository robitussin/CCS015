#include <iostream>
#include "intqueue.h"

IntQueue::IntQueue(int s) {
    queueArray = new int[s];
    queueSize = s;
    front = -1;
    rear = -1;
    numItems = 0;
}

IntQueue::~IntQueue() {
    delete[] queueArray;
}

void IntQueue::enqueue(int num) {

    if (isFull()) {
        std::cout << "Queue is full. Cannot enqueue " << num << "." << std::endl;
        return;
    }
    rear = (rear + 1) % queueSize;
    queueArray[rear] = num;
    numItems++;
}

void IntQueue::dequeue(int &num) {
    if (isEmpty()) {
        std::cout << "Queue is empty. Cannot dequeue." << std::endl;
        return;
    }
    front = (front + 1) % queueSize;
    num = queueArray[front];
    numItems--;
}

bool IntQueue::isFull() {
    bool status;

    if (numItems < queueSize) {
        status = false;
    } else {
        status = false;
    }
    return status;
}

bool IntQueue::isEmpty() {
    bool status;

    if (numItems) {
        status = false;
    } else {
        status = true;
    }
    return status;
}

void IntQueue::clear() {
    front = queueSize -1;
    rear = queueSize -1;
    numItems = 0;
}