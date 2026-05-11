#include <iostream>
#include "linked_list.h"
#include <list>
using namespace std;

int main()
{
    Linkedlist mylist;

    // Build the list
    mylist.appendNode(1.5);
    mylist.appendNode(2);
    mylist.appendNode(3);

    cout << "Here are the initial values in the list: " << endl;
    // Display the list
    mylist.displayList();

    // Insert a node in the middle
    mylist.insertNode(2.5);

    // Display the list
    mylist.displayList();

    cout << "Now deleting the node in the middle " << endl;
    mylist.deleteNode(9);

    // cout << "Here are the values in the list after deletion: " << endl;
    mylist.displayList();

    // -- Linked list demonstration using built-in library --

    list<int> sampleList;
    list<int>::iterator iter;

    // Add values 0 to 9 to the list
    for (int x = 0; x < 10; x++)
        // use push_back to add values to the end of the list
        sampleList.push_back(x);

    // Display the list
    // .begin() returns an iterator pointing to the first element in the list
    // .end() returns an iterator pointing to the past-the-end element in the list
    for (iter = sampleList.begin(); iter != sampleList.end(); iter++)
        // Dereference the iterator to get the value at that position in the list
        cout << *iter << endl;

    // Reverse the list
    sampleList.reverse();

    // Display the list again
    for (iter = sampleList.begin(); iter != sampleList.end(); iter++)
        cout << *iter << endl;

    return 0;
}
