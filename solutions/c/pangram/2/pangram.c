#include "pangram.h"
#include <string.h>
#include <ctype.h>



bool is_pangram(const char *sentence)
{
    if (sentence == NULL)
    {
        return false;
    }
    
    int unseen = 26;

    bool already_seen[26] = {false};
    
    for (size_t i = 0; i < strlen(sentence); i++)
    {
        if (isalpha(sentence[i]))
        {
            char lower = tolower(sentence[i]);
            if (!already_seen[lower - 'a'])
            {
                already_seen[lower - 'a'] = true;
                unseen--;
            }
        }
    }

    return unseen == 0;
}