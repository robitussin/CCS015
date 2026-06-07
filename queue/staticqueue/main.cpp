#include <iostream>
#include "intqueue.h"
using namespace std;

int main(){
    IntQueue myQueue(5);

    cout << "Enqueueing 5 items..." << endl;

    // Enqueue 5 items
    for (int x = 0; x < 5; x++) {
        myQueue.enqueue(x);
    }

    // Attempt to enqueue a 6th item
    cout << "Attempting to enqueue a 6th item..." << endl;
    myQueue.enqueue(5);

    //Dequeue and retrieve all items in the queue
    cout << "The values in the queue are: " << endl;

    while (!myQueue.isEmpty()) {
        int value;
        myQueue.dequeue(value);
        cout << value << " ";
    }
}