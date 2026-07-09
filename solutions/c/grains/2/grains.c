#include "grains.h"
#include <math.h>

#define SQUARES_ON_CHESSBOARD 64

uint64_t square(uint8_t index)
{
    uint64_t ans = 0;
    if(index >= 1 && index <= 64)
    {
        ans = 1ull << (index - 1);
    }
    return ans;
}

uint64_t total(void)
{
    uint64_t ans = 0;
    for (int i = 1; i <= SQUARES_ON_CHESSBOARD; i++)
    {
        ans += square(i);
    }
        
    return ans;
}