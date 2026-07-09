#include "pangram.h"
#include <string.h>
#include <ctype.h>



bool is_pangram(const char *sentence)
{

    if (sentence == NULL) 
    { 
        return false; 
    } 
    else if (sentence[0] == '\0')
    {
        return false;
    }

    char lower[strlen(sentence)];
    for(int i = 0; sentence[i]; i++)
    {
        lower[i] = tolower(sentence[i]);
    }

    for (char c = 'a'; c <= 'z'; c++)
    {
        char temp[2];
        temp[0] = c;
        if (!strstr(lower, temp))
        {
            return false;
        }
    }

    return true;
}