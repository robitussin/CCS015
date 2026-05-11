#include <iostream>
#include "dynamicstack.h"
using namespace std;

int main()
{
    DynamicStack stack;
    int catchVar;

    cout << "Pushing 5\n";
    stack.push(5);
    cout << "Pushing 10\n";
    stack.push(10);
    cout << "Pushing 15\n";
    stack.push(15);

    cout << "Popping...\n";
    stack.pop(catchVar);
    cout << catchVar << " popped.\n";
    stack.pop(catchVar);
    cout << catchVar << " popped.\n";
    stack.pop(catchVar);
    cout << catchVar << " popped.\n";
    cout << "\nAttempting to pop from an empty stack...\n";
    stack.pop(catchVar);

    return 0;
}
