#include <stdio.h>

struct Node
{
    int data;
    struct Node* nextNode;
    struct Node* prevNode;
}*head;

void reverse()
{
    struct Node* temp;
    struct Node* curr = head;

    while(curr != NULL)
    {
        temp = curr -> nextNode;
        curr -> prevNode = curr -> nextNode;
        curr -> nextNode = temp;
        curr = curr -> nextNode;
    }
    head = temp -> prevNode;
}

// And Print the list...