#include <stdio.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int size, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && arr[left] >= arr[largest])
    {
        largest = left;
    }

    if (right < size && arr[right] >= arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, size, largest);
    }
}

void heapSort(int arr[], int size)
{
    for (int i = size / 2 - 1; i >= 0; i--)
    {
        heapify(arr, size, i);
    }

    for (int i = size - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, size, 0);
    }
}

void main()
{
    int arr[] = {2, 4, 5, 1, 3};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
}