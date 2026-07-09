#include "pangram.h"
#include <string>
using namespace std;
namespace pangram {

    bool is_pangram(string str) {
        string test = "abcdefghijklmnopqrstuvwxyz";
        for (int j = 0; j < (int)str.length(); j++) {
            str[j] = tolower(str[j]);
        } 
        for (int i = 0; i < (int)test.length(); i++) {
            if (str.find(test[i]) == std::string::npos) {
                return false;
            }
        }     
        return true;
    }

}  // namespace pangram
