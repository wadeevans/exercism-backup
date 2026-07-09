#include <string>
#include <iostream>

namespace log_line {
    std::string message(std::string line) {
        // return the message
        int cut = line.find(":");
        
        std::string ans = line.substr(cut + 2);
        
        return ans;
    }

    std::string log_level(std::string line) {
        // return the log level
        int cut = line.find(":");
        std::string ans = line.substr(1, cut-2);
        
        return ans;
    }

    std::string reformat(std::string line) {
        // return the reformatted message
        std::string ans = message(line) + " (" + log_level(line) + ")";
        
        return ans;
    }
}
