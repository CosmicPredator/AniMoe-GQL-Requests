#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* nextNode;
};

struct Queue
{
    struct Node* stack1;
    struct Node* stack2;
};

void push(struct Node** head, int data)
{
    struct Node* newNode = (struct Node*)malloc(
        sizeof(struct Node)
    );
    newNode -> data = data;
    newNode -> nextNode = *head;
    *head = newNode;
}

int pop(struct Node** head)
{
    int item;
    struct Node* temp;
    temp = *head;
    item = temp -> data;
    *head = temp -> nextNode;
    free(temp);
    return item;
}

void enqueue(struct Queue* q, int data)
{
    push(&q -> stack1, data);
}

void dequeue(struct Queue* q)
{
    int x;
    if (q -> stack1 == NULL && q -> stack2 == NULL)
    {
        return -1;
    }

    if (q -> stack2 != NULL)
    {
        while (q -> stack1 != NULL)
        {
            x = pop(&q -> stack1);
            push(&q -> stack2, x);
        }
    }
    x = pop(&q -> stack2);
    return x;
}