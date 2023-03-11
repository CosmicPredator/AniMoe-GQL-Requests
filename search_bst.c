#include <stdio.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* searchElem(struct Node* node, int value)
{
    if (node -> data < value)
    {
        node -> left = searchElem(node -> left, value);
    } else if (node -> data > value)
    {
        node -> right = searchElem(node -> right, value);
    } else
    {
        return node;
    }
}