#include "binary_search.h"

const int *binary_search(int value, const int *arr, size_t length)
{
    int left = 0;
    int right = length - 1;

    while (left <= right)
    {
        int centre = (left + right) / 2;
        if (arr[centre] < value)
        {
            left = centre + 1;
        }
        else if (arr[centre] > value)
        {
            right = centre - 1;
        }
        else return &arr[centre];
    }
    
    return NULL;
}