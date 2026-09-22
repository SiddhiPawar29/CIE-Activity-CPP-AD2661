// ============================================================================
// Program 10: Base Reference With a Virtual Function
// Unit III: Polymorphism — Dynamic Binding via References
// 
// Description:
// Demonstrates run-time polymorphism using a base-class reference.
// Passing derived objects by reference to a base-class type ('const Shape&')
// avoids object slicing and enables dynamic dispatch through virtual functions,
// ensuring the correct derived class 'area()' function executes at runtime.
// ============================================================================

#include <iostream>

// ============================================================================
// BASE CLASS
// ============================================================================
class Shape {
public:
    // Virtual function for calculating area
    virtual double area() const {
        return 0.0;
    }

    // Virtual destructor for polymorphic base classes
    virtual ~Shape() = default;
};

// ============================================================================
// DERIVED CLASSES
// ============================================================================

// Rectangle overrides area()
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}

    double area() const override {
        return length * width;
    }
};

// Circle overrides area()
class Circle : public Shape {
private:
    double radius;

public:
    explicit Circle(double givenRadius) : radius(givenRadius) {}

    double area() const override {
        constexpr double PI = 3.141592653589793;
        return PI * radius * radius;
    }
};

// ============================================================================
// POLYMORPHIC HELPER FUNCTION
// ============================================================================
// Accepts any Shape by reference; calls the appropriate derived area()
void printArea(const Shape& shape) {
    std::cout << "Area: " << shape.area() << '\n';
}

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    Rectangle rectangle(5.0, 3.0);
    Circle circle(2.0);

    // Pass Rectangle and Circle by reference to the base Shape type
    printArea(rectangle);
    printArea(circle);

    return 0;
}

// ============================================================================
// EXPECTED OUTPUT:
// Area: 15
// Area: 12.5664
// ============================================================================
