#include "armstrong_numbers.h"
#include "math.h"
#include "stdio.h"

bool is_armstrong_number(int candidate)
{
    
    int copy = candidate;
    int copycopy = copy;
    printf("%d \n", copy);
    int exponent = 0;
    int total = 0;
    while (copy > 0)
    {
        copy /= 10;
        exponent += 1;
    }
    
    while (candidate > 0)
    {
        total += pow(candidate % 10, exponent);
        printf("%d \n", total);
        candidate /= 10;
    }

    if (total != copycopy) 
    {
        
        return false;
    }
    else 
    {
        return true;
    }
}