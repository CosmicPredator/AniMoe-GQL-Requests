#include <stdio.h>

struct Node
{
    int data;
    struct Node* node;
}*head;

int occurances(int elem)
{
    int count = 0;
    struct Node* temp = head;
    while (temp != NULL)
    {
        if (temp -> data == elem)
        {
            count++;
        }
    }
    return count;
}