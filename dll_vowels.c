#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char data;
    struct Node* nextNode;
    struct Node* prevNode;
}*head;

int checkVowels()
{
    int count = 0;
    struct Node* temp = head;
    while(temp != NULL)
    {
        if (temp -> data == 'a' || 
            temp -> data == 'e' ||
            temp -> data == 'i' ||
            temp -> data == 'o' ||
            temp -> data == 'u')
        {
            count++;
        }
        temp = temp -> nextNode;
    }
    return count;
}