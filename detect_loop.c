#include <stdio.h>

struct Node
{
    int data;
    struct Node* nextNode;
};

int detectLoop(struct Node* head)
{
    struct Node* ptr = head;
    struct Node* ptr1 = head;

    while (ptr && ptr1 && ptr1 -> nextNode)
    {
        ptr = ptr -> nextNode;
        ptr1 = ptr1 -> nextNode -> nextNode;
        if (ptr == ptr1)
        {
            return 1;
        }
    }
    return 0;
}