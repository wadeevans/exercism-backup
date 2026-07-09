#include "hamming.h"
#include "stdio.h"

int compute(const char *lhs, const char *rhs)
{
    if (length(lhs) != length(rhs)) return -1;
    int diff = 0;

    for (int i = 0; lhs[i] != '\0'; i++)
    {
        if (lhs[i] != rhs[i])
        {
            diff++;
        }
    }

    return diff;
}

int length(const char *array)
{
    int length = 0;

    for (int i = 0; array[i] != '\0'; i++)
    {
        length++;
    }
    
    return length;
}