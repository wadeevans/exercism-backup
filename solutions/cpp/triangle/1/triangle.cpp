#include "triangle.h"

namespace triangle {

    flavor kind(double a, double b, double c)
    {
            if (a <= 0.0 || b <= 0.0 || c <= 0.0) 
            {
                throw std::domain_error ("not a triangle");
            }

            if ((a+b<c) || (b+c<a) || (a+c<b))
            {
                throw std::domain_error ("not a triangle");
            }
            
            if (a == b && a == c)  
            {
                return flavor::equilateral;
            }
            
            if (a == b || a == c || b == c)  
            {
                return flavor::isosceles;
            }   
            
            return flavor::scalene;
    }

    

}  // namespace triangle
