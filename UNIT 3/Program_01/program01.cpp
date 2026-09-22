// ============================================================================
// Program 01: Function Overloading
// Unit III: Polymorphism — Compile-Time Polymorphism
// 
// Description:
// Demonstrates compile-time polymorphism (static binding / early binding)
// using function overloading. Multiple functions share the name 'add', but
// have distinct parameter lists (different types or counts). The compiler
// determines the exact function to call at compile time based on arguments.
// ============================================================================

#include <iostream>

// ============================================================================
// OVERLOADED FUNCTIONS
// ============================================================================

// Overload 1: Adds two integers
int add(int first, int second) {
    return first + second;
}

// Overload 2: Adds two double-precision floating-point numbers
double add(double first, double second) {
    return first + second;
}

// Overload 3: Adds three integers
int add(int first, int second, int third) {
    return first + second + third;
}

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    // Calls Overload 1: add(int, int)
    std::cout << "Sum of two integers: " << add(10, 20) << '\n';

    // Calls Overload 2: add(double, double)
    std::cout << "Sum of two doubles: " << add(2.5, 3.7) << '\n';

    // Calls Overload 3: add(int, int, int)
    std::cout << "Sum of three integers: " << add(10, 20, 30) << '\n';

    return 0;
}

// ============================================================================
// EXPECTED OUTPUT:
// Sum of two integers: 30
// Sum of two doubles: 6.2
// Sum of three integers: 60
// ============================================================================
