#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* leftNode;
    struct Node* rightNode;
    int height;
};

int height(struct Node* node)
{
    if (node == NULL)
    {
        return 0;
    }
    return node -> height;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

struct Node* newNode(int value)
{
    struct Node* newNode = (struct Node*)malloc(
        sizeof(struct Node)
    );
    newNode -> data = value;
    newNode -> leftNode = NULL;
    newNode -> rightNode = NULL;
    newNode -> height = 1;
    return newNode;
}

struct Node* rightRotate(struct Node* y)
{
    struct Node* x = y -> leftNode;
    struct Node* temp = x -> rightNode;

    x -> rightNode = y;
    y -> leftNode = temp;

    y -> height = max(height(y -> leftNode), height(y -> rightNode)) + 1;
    x -> height = max(height(x -> leftNode), height(x -> rightNode)) + 1;

    return x;
}

struct Node* leftRotate(struct Node* x)
{
    struct Node* y = x -> rightNode;
    struct Node* temp = y -> leftNode;

    x -> leftNode = y;
    y -> rightNode = temp;

    x -> height = max(height(x -> leftNode), height(x -> rightNode));
    y -> height = max(height(y -> leftNode), height(y -> rightNode));

    return y;
}

int getBalance(struct Node* node)
{
    if (node == NULL)
    {
        return 0;
    }
    return height(node -> leftNode) - height(node -> rightNode);
}

struct Node* insertNode(struct Node* node, int key)
{
    if (node == NULL)
    {
        return newNode(key);
    }

    if (key < node -> data)
    {
        node -> leftNode = insertNode(node -> leftNode, key);
    } else if (key > node -> data)
    {
        node -> rightNode = insertNode(node -> rightNode, key);
    } else
    {
        return node;
    }

    node -> height = max(height(node -> leftNode), height(node -> rightNode)) + 1;
    int balanceFactor = getBalance(node);

    if (balanceFactor > 1 && key < node -> leftNode -> data)
    {
        return rightRotate(node);
    }

    if (balanceFactor < -1 && key > node -> rightNode -> data)
    {
        return leftRotate(node);
    }

    if (balanceFactor > 1 && key > node -> leftNode -> data)
    {
        node -> leftNode = leftRotate(node -> leftNode);
        return rightRotate(node);
    }

    if (balanceFactor < -1 && key < node -> rightNode -> data)
    {
        node -> rightNode = rightRotate(node -> rightNode);
        return leftRotate(node);
    }

    return node;
}

struct Node* minValueNode(struct Node* node)
{
    struct Node* temp = node;
    while (temp -> leftNode != NULL && temp)
    {
        temp = temp -> leftNode;
    }
    return temp;
}

struct Node* deleteNode(struct Node* node, int value)
{
    
}

void main() 
{

}