#include "hamming.h"
#include <stdio.h>
#include <string.h>
#define ERROR -1
int compute(const char *lhs, const char *rhs)
{
    int diff = 0;
    int i;
    for (i = 0; lhs[i] && rhs[i]; i++)
    {
        if (lhs[i] != rhs[i])
        {
            diff++;
        }
    }
    if (rhs[i] != lhs[i]) return ERROR;
    
    return diff;
}

