#include <stdio.h>

struct Node
{
    int data;
    struct Node* nextNode;
}*head;

void swap(struct Node* num1, struct Node* num2)
{
    int temp = num1 -> data;
    num1 -> data = num2 -> data;
    num2 -> data = temp;
}

void bubbleSort()
{
    int swapped, i;
    struct Node* ptr1;
    struct Node* lptr;

    if (head == NULL)
    {
        return;
    }

    do
    {
        swapped = 0;
        ptr1 = head;
        while(ptr1 -> nextNode != lptr)
        {
            if (ptr1 -> data < ptr1 -> nextNode -> data)
            {
                swap(ptr1, ptr1 -> data);
                swapped = 1;
            }
            ptr1 = ptr1 -> nextNode;
        }
        lptr = ptr1;
    }while(swapped);
}