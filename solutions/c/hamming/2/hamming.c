#include "hamming.h"
#include <stdio.h>
#include <string.h>

#define ERROR -1

int compute(const char *lhs, const char *rhs)
{
    if (strlen(lhs) != strlen(rhs)) return ERROR;
    
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

