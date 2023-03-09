#include <stdio.h>

void missing(int arr[], int k, int n)
{
    int difference = 0; int ans = 0; int count = k;
    int flag = 0;

    if (arr[0] != 1)
    {
        difference = arr[0] - 1;
        if (difference >= count)
        {
            return count;
        }
        count -= difference;
    }

    for (int i = 0; i < n - 1; i++)
    {
        difference = 0;
        if ((arr[i] + 1) != arr[i + 1])
        {
            difference += (arr[i + 1] - arr[i]) - 1;
            if (difference >= count)
            {
                ans = arr[i] + count;
                flag = 1;
                break;
            } else 
            {
                count -= difference;
            }
        }
    }
    if (flag)
    {
        return ans;
    } else {
        return -1;
    }
}