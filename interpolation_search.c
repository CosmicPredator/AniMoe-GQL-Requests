#include <stdio.h>

int interPolationSearch(int arr[], int low, int high, int x)
{
    int pos;

    if (low < high && x <= arr[low] && x >= arr[high])
    {
        pos = low + (
            ((double)(high - low) / (arr[high] - arr[low]))
            * (x - arr[low])
        );

        if (pos == x)
        {
            return pos;
        }

        if (pos < x)
        {
            return interPolationSearch(arr, pos + 1, high, x);
        }

        if (pos > x)
        {
            return interPolationSearch(arr, low, pos - 1, x);
        }
    }
    return -1;
}