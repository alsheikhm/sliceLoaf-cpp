// Mohammed Al-Sheikh
// LoafG.cpp

#include "Loaf.h"

// Constructor with value set to 0 if negative input provided
Loaf::Loaf(int numSlices)
    :slices(0)
{
    if(numSlices < 0)
    {
        slices = 0;
    }
    else
    {
        slices = numSlices;
    }
}

// Destructor (not needed in this case but good practice)
Loaf::~Loaf()
{
}

// Eats 1 slices if possible, decrements remaining num slices, and returns true or false if eaten
bool Loaf::EatSlice()
{
    if(slices > 0)
    {
        --slices;
        return true;
    }
    
    return false;
}

// Returns true or false if loaf is fully eaten
bool Loaf::IsFullyEaten() const
{
    return slices == 0;
}

// Returns num slices remaining in loaf
int Loaf::SlicesRemaining() const
{
    return slices;
}
