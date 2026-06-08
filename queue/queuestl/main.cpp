#include <iostream>
#include <deque>
#include <queue>
using namespace std;

int main()
{
    // Example 1: Using a deque STL
    int x;
    deque<int> myDeque;

    cout << "I will now enqueue items.." << endl;
    for (x = 2; x < 8; x += 2)
    {
        cout << "Pushing: " << x << endl;
        myDeque.push_back(x);
    }

    cout << "I will now dequeue items.." << endl;
    for (x = 2; x < 8; x += 2)
    {
        cout << "Popping: " << myDeque.front() << endl;
        myDeque.pop_front();
    }

    // Example 2: Using a queue STL
    queue<int> myQueue;
    cout << "I will now enqueue items.." << endl;
    for (x = 2; x < 8; x += 2)
    {
        cout << "Pushing: " << x << endl;
        myQueue.push(x);
    }

    cout << "I will now dequeue items.." << endl;
    while (!myQueue.empty())
    {
        cout << "Popping: " << myQueue.front() << endl;
        myQueue.pop();
    }
}