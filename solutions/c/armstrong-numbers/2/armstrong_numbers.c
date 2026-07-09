#include "armstrong_numbers.h"
#include <math.h>
#include <stdio.h>

bool is_armstrong_number(int candidate)
{
        
    int exponent = 0;
    for (int copy = candidate; copy > 0; copy /= 10)
    {
        exponent += 1;
    }

    int total = 0;
    for (int copy = candidate; copy > 0; copy /= 10)
    {
        total += pow(copy % 10, exponent);  
    }

    return (total == candidate);

}