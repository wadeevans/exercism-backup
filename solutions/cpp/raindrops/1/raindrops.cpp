#include "raindrops.h"


namespace raindrops {

std::string convert(int i)
{
    std::string ans = "";
    
    if (i % 3 == 0)
    {
        ans += "Pling"; 
    }
    if (i % 5 == 0)
    {
        ans += "Plang";
    }
    if (i % 7 == 0)
    {
        ans += "Plong";
    }
    if (ans == "")
    {
        ans = std::to_string(i);
    }
    
    return ans;
}


}  // namespace raindrops
