#include <stdio.h>

struct Node
{
    int data;
    struct Node* nextNode;
}*head;

struct Node* searchElem(int item)
{
    struct Node* temp;
    struct Node* newNode;

    if (head -> data == item)
    {
        return head;
    } else 
    {
        temp = head;
        while (temp != NULL)
        {
            temp = temp -> nextNode;
        }
        newNode = temp -> nextNode -> nextNode;
        temp -> nextNode -> nextNode = head;
        head = temp -> nextNode;
        temp -> nextNode = newNode;
        return head;
    }
}