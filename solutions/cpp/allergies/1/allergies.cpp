#include "allergies.h"

namespace allergies {

    allergy_test::allergy_test(unsigned int allergies)
    {
        all_allergies = allergies;
        allergies_set = get_allergies();   
    }
    
    bool allergy_test::is_allergic_to(const char* allergy)
    {
        std::cout << allergy << std::endl;
        if (allergies_set.find(allergy) != allergies_set.end()) 
        { 
            return true;
        }
        return false;
    }

    std::unordered_set<std::string> allergy_test::get_allergies()
    {
        std::unordered_set<std::string> set {};
        
        if (all_allergies & 1)
            set.emplace("eggs");
        if (all_allergies & 2)
            set.emplace("peanuts");
        if (all_allergies & 4)
            set.emplace("shellfish");
        if (all_allergies & 8)
            set.emplace("strawberries");
        if (all_allergies & 16)
            set.emplace("tomatoes");
        if (all_allergies & 32)
            set.emplace("chocolate");
        if (all_allergies & 64)
            set.emplace("pollen");
        if (all_allergies & 128)
            set.emplace("cats");
        
        return set; 
    }

}  // namespace allergies
