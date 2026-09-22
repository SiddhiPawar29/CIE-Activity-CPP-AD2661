// ============================================================================
// Program 11: Abstract Class and Pure Virtual Function
// Unit III: Polymorphism — Abstract Classes & Pure Virtual Functions
// 
// Description:
// Demonstrates abstract classes in C++. A class containing at least one
// pure virtual function ('= 0') is defined as abstract and cannot be instantiated.
// Any concrete derived class must override all pure virtual functions to allow
// instantiation, enforcing an interface contract across derived classes.
// ============================================================================

#include <iostream>

// ============================================================================
// ABSTRACT BASE CLASS
// ============================================================================
class Shape {
public:
    // Pure virtual function makes Shape an abstract class
    virtual double area() const = 0;

    // Virtual destructor ensures proper cleanup of derived objects
    virtual ~Shape() = default;
};

// ============================================================================
// CONCRETE DERIVED CLASS
// ============================================================================
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}

    // Provides concrete implementation for the pure virtual function
    double area() const override {
        return length * width;
    }
};

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    // Shape shape; // COMPILE ERROR: Cannot instantiate abstract class Shape

    // Instantiate concrete derived class Rectangle
    Rectangle rectangle(8.0, 4.0);
    std::cout << "Rectangle Area: " << rectangle.area() << '\n';

    return 0;
}

// ============================================================================
// EXPECTED OUTPUT:
// Rectangle Area: 32
// ============================================================================
