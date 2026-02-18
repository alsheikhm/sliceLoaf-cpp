// Mohammed Al-Sheikh
// LoafG.h

#ifndef LOAF_H
#define LOAF_H

// Loaf class is blueprint to make slices of bread
class Loaf
{
public:
    // Constructor with default value set to 1 if no input provided
    Loaf(int numSlices = 1);
    
    // Destructor
    ~Loaf();
    
    // Returns true if a slice is eaten
    bool EatSlice();
    
    // Returns true if the loaf is fully eaten
    bool IsFullyEaten() const;
    
    // Returns num slices remaining
    int SlicesRemaining() const;
    
private:
    // Number of slices currently remaining in loaf
    int slices;
};

#endif
