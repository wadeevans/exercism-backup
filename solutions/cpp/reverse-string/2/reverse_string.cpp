#include "reverse_string.h"
#include <string>
namespace reverse_string {
    string reverse_string(string str) {
        string rev_str = "";
        for (int i = 0; i < (int)str.length(); i++) {
            rev_str = str[i] + rev_str;
        }
        return rev_str;
    }
}
