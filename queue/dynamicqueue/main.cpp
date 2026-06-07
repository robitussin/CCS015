#include <iostream>
#include "dynintqueue.h"
using namespace std;

int main()
{
    DynIntQueue myQueue;
    
    cout << "Enqueueing 5 integers...\n";

    // Enqueue 5 items
    for (int x = 1; x < 5; x++)
    {
        myQueue.enqueue(x);
    }

    // Dequeue and display the items in the queue
    while (!myQueue.isEmpty())
    {
        int value;
        myQueue.dequeue(value);
        cout << value << endl;
    }

    return 0;
}