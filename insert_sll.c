#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *nextNode;
} *sll1, *sll2;

void concat()
{
    sll2 -> nextNode = sll1;
}