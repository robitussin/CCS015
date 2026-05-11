#include <iostream>
using namespace std;

struct Linkedlist
{

private:
    // Declare a structure for the list
    struct ListNode
    {
        float value;
        ListNode *next;
    };

    ListNode *head; // Pointer to the head of the list

public:
    // Constructor to initialize the list
    Linkedlist()
    {
        head = nullptr; // Initialize head to null
    }

    ~Linkedlist()
    {
        ListNode *nodePtr, *nextNode;

        nodePtr = head;

        while (nodePtr != nullptr)
        {
            nextNode = nodePtr->next;
            delete nodePtr;
            nodePtr = nextNode;
        }
    }; // Destructor

    void appendNode(float);
    void insertNode(float);
    void deleteNode(float);
    void displayList();
};
