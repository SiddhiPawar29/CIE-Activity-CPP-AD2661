// ============================================================================
// Program 02: Area Calculator Using Function Overloading
// Unit III: Polymorphism — Compile-Time Polymorphism
// 
// Description:
// Demonstrates function overloading with different parameter signatures to
// calculate the geometric areas of a square, a rectangle, and a circle.
// The compiler resolves which 'calculateArea' to execute based on the
// argument types and counts provided at the call site.
// ============================================================================

#include <iostream>

// ============================================================================
// OVERLOADED AREA FUNCTIONS
// ============================================================================

// Overload 1: Computes area of a square given side length
// Formula: side * side
int calculateArea(int side) {
    return side * side;
}

// Overload 2: Computes area of a rectangle given length and width
// Formula: length * width
int calculateArea(int length, int width) {
    return length * width;
}

// Overload 3: Computes area of a circle given radius
// Formula: PI * radius^2
double calculateArea(double radius) {
    constexpr double PI = 3.141592653589793;
    return PI * radius * radius;
}

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    // Calls Overload 1: calculateArea(int) -> Square
    std::cout << "Square Area: " << calculateArea(5) << '\n';

    // Calls Overload 2: calculateArea(int, int) -> Rectangle
    std::cout << "Rectangle Area: " << calculateArea(6, 4) << '\n';

    // Calls Overload 3: calculateArea(double) -> Circle
    std::cout << "Circle Area: " << calculateArea(2.0) << '\n';

    return 0;
}

// ============================================================================
// EXPECTED OUTPUT:
// Square Area: 25
// Rectangle Area: 24
// Circle Area: 12.5664
// ============================================================================
