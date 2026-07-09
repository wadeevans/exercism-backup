#if !defined(ALLERGIES_H)
#define ALLERGIES_H

#include <unordered_set>
#include <string>
#include <iostream>

namespace allergies {

    class allergy_test
    {
    public:

        allergy_test(unsigned int allergies);
        bool is_allergic_to(const char* allergy);
        std::unordered_set<std::string> get_allergies();

    private:
        int all_allergies; 
        std::unordered_set<std::string> allergies_set {};
    
    };

    

}  // namespace allergies

#endif // ALLERGIES_H