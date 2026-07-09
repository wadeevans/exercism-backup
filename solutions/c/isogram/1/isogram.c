#include "isogram.h"
#include <string.h>
#include <ctype.h>

#define ASCII_A  65
#define ASCII_Z  90

bool is_isogram(const char phrase[])
{
    if (phrase == NULL) return false;
    unsigned int phrase_length = strlen(phrase);
    
    for (unsigned int i = 0; i < phrase_length; i++)
    {
        for (unsigned int j = 0; j < phrase_length; j++)
        {
            if (j != i && toupper(phrase[j]) >= ASCII_A && toupper(phrase[j]) <= ASCII_Z)
            {
                if (toupper(phrase[j]) == toupper(phrase[i]))
                {
                    return false;
                }
            }
            
        }
    }
    return true;
}