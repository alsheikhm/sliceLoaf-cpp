// Mohammed Al-Sheikh
// mainG.cpp

#include <iostream>
#include "Loaf.h"

int main()
{
    // Construct 3 loafs of bread: 1 with positive num slices, 1 with no input on num slices, 1 with negative num slices
    Loaf posLoaf(10);
    Loaf noLoaf;
    Loaf negLoaf(-5);
    
    // Test constructors to show they did their job as expected
    std::cout << "Constructors Test: " << std::endl;
    std::cout << "Loaf 1 Slices (Positive Input Parameter): " << posLoaf.SlicesRemaining() << std::endl;
    std::cout << "Loaf 2 Slices (No Input Parameter): " << noLoaf.SlicesRemaining() << std::endl;
    std::cout << "Loaf 3 Slices (Negative Input Parameter): " << negLoaf.SlicesRemaining() << std::endl << std::endl;
    
    // Eat loaf 1 and loop through each slice eaten giving the remaining num slices
    std::cout << "Eating a slice of Loaf 1." << std::endl;
    
    while (posLoaf.IsFullyEaten() == false)
    {
        if(posLoaf.EatSlice() == true)
        {
            std::cout << "Ate a slice of Loaf 1. Slices Remaining: " << posLoaf.SlicesRemaining() << std::endl;
        }
    }
    
    // Test to see if slices of loaf is fully eaten yet
    if(posLoaf.EatSlice() == false)
    {
        std::cout << "Did not eat a slice of Loaf 1." << std::endl << std::endl;
        std::cout << "Loaf 1 is fully eaten." << std::endl << std::endl;

    }
    
    return 0;
}
