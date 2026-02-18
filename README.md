# sliceLoaf-cpp

# Overview

Loaf Slices is a console-based C++ program that models a loaf of bread using object-oriented programming principles. The system simulates slice consumption by allowing slices to be eaten one at a time until the loaf is fully consumed.

The objective of the program is to demonstrate proper class construction, input validation, controlled state modification, and loop-driven testing of object behavior.

# Class Behavior

The system models a loaf using a single internal state variable:

- Number of slices remaining

The loaf enforces the following validation rules:

- If constructed with a positive value, the loaf contains that many slices.
- If constructed with no parameter, the loaf defaults to 1 slice.
- If constructed with a negative value, the loaf becomes empty (0 slices).
- The loaf can never contain a negative number of slices.

# Core Functionality

The `Loaf` class provides the following public methods:

- `EatSlice()`  
  Consumes one slice if available and returns `true` if a slice was eaten, otherwise returns `false`.

- `IsFullyEaten()`  
  Returns `true` when no slices remain.

- `SlicesRemaining()`  
  Returns the current number of slices remaining in the loaf.

# Core Concepts Applied

- Object-Oriented Programming (OOP)
- Constructor default parameters and validation logic
- Encapsulation of internal state
- Controlled state mutation through member functions
- Boolean return values to signal operation success
- Loop-driven state depletion testing

# Class Design

The `Loaf` class maintains a private integer member variable representing the number of slices remaining. All modifications to this value occur exclusively through validated member functions to prevent invalid states.

The `main` program tests:

- Construction with a positive input parameter
- Construction with no input parameter (default behavior)
- Construction with a negative input parameter (validation behavior)
- A loop that repeatedly calls `EatSlice()` until the loaf is fully consumed
- Proper handling of attempts to eat slices from an empty loaf

This structured testing ensures that constructor validation and slice consumption logic function as expected.

# How to Run

1. Compile the program using a C++ compiler (ex. g++, clang++)
2. Run the executable
3. Observe constructor validation and slice consumption behavior in the console
