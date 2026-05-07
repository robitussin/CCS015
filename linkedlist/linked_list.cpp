#include <iostream>
#include <list>
#include "linked_list.h"
using namespace std;

void Linkedlist::appendNode(float num)
{
    ListNode *newNode, *nodePtr;

    // Allocate a new node and store num.
    newNode = new ListNode;
    newNode->value = num;
    newNode->next = nullptr;

    // If there are no nodes in the list, make newNode the first node.
    if (!head)
    {
        head = newNode;
    }
    else // Otherwise, insert newNode at end of list.
    {
        // Initialize nodePtr to head of list.
        nodePtr = head;
        // Find the last node in the list.
        while (nodePtr->next)
        {
            nodePtr = nodePtr->next;
        }
        nodePtr->next = newNode;
    }
    cout << "Input has been Appended!" << endl;
}

void Linkedlist::displayList()
{
    ListNode *nodePtr;

    if (head == nullptr)
    {
        cout << "The list is empty!" << endl;
    }
    else
    {
        // Initialize nodePtr to head of list.
        nodePtr = head;

        while (nodePtr)
        {
            cout << nodePtr->value << endl;

            // Update the variable to point to the next node in the list.
            nodePtr = nodePtr->next;
        }
    }
}

void Linkedlist::insertNode(float num)
{
    ListNode *newNode, *nodePtr, *previousNode;

    // Allocate a new node and store num there.
    newNode = new ListNode;
    newNode->value = num;

    // If there are no nodes in the list, make newNode the first node.
    if (!head)
    {
        head = newNode;
        newNode->next = nullptr;
    }
    else // Otherwise, insert newNode
    {
        // Initialize nodePtr to head of list and previousNode to nullptr
        nodePtr = head;
        previousNode = nullptr;

        // Skip all nodes whose value member is less than num.
        while (nodePtr != nullptr && nodePtr->value < num)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        // If the new node is to be the first in the list, insert it before all other nodes.
        if (previousNode == nullptr)
        {
            head = newNode;
            newNode->next = nodePtr;
        }
        else
        {
            // Insert newNode between previousNode and nodePtr.
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }

    cout << "Input has been Inserted!" << endl;
}

void Linkedlist::deleteNode(float num)
{
    ListNode *nodePtr, *previousNode;

    int found = 0;

    // if the list is empty, do nothing
    if (!head)
    {
        cout << "The list is empty!" << endl;

        return;
    }

    if (head->value == num)
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
        found = 1;
    }
    else
    {
        // initialize nodePtr to head of list and previousNode to nullptr
        nodePtr = head;
        previousNode = nullptr;

        // Skip all nodes whose value member is not equal to num.
        while (nodePtr != nullptr && nodePtr->value != num)
        {
            // Update previousNode to point to the current node before advancing nodePtr to the next node.
            previousNode = nodePtr;

            // Update nodePtr to point to the next node in the list.
            nodePtr = nodePtr->next;
        }

        // Link the previous node to the node after nodePtr, then delete nodePtr
        if (nodePtr != nullptr)
        {
            previousNode->next = nodePtr->next;
            delete nodePtr;
            found = 1;
        }
    }

    if (found == 0)
    {
        cout << "Value not found in the list!" << endl;
    }
}
