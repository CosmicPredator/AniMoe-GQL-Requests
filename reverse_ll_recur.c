#include <stdio.h>
struct Node
{
    int data;
    struct Node* nextNode;
}*head;

struct Node* reverse()
{
    if (head == NULL || head -> nextNode == NULL)
    {
        return head;
    }
    struct Node* rest = reverse(head -> nextNode);
    head -> nextNode -> nextNode = head;
    head -> nextNode = NULL;

    return rest;
}