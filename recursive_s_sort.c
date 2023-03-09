#include <stdio.h>

void selectionSort(int arr[], int i, int j, int size, int flag)
{
    int temp;
    if (i < size - 1)
    {
        if (flag)
        {
            j = i + 1;
        }
        if (j < size)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            selectionSort(arr, i, j + 1, size, 0);
        }
    }
    selectionSort(arr, i + 1, 0, size, 1);
}