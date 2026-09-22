// ============================================================================
// Program 12: Collection of Polymorphic Shape Pointers
// Unit III: Polymorphism — Heterogeneous Collections & Smart Pointers
// 
// Description:
// Demonstrates storing and manipulating heterogeneous derived objects
// (Rectangle and Circle) within a single container using standard library
// smart pointers ('std::unique_ptr<Shape>'). In a loop over the collection,
// dynamic dispatch ensures the correct methods are invoked for each object.
// ============================================================================

#include <iostream>
#include <memory>
#include <vector>

// ============================================================================
// ABSTRACT BASE CLASS
// ============================================================================
class Shape {
public:
    // Pure virtual functions defining the Shape interface contract
    virtual double area() const = 0;
    virtual void displayName() const = 0;

    // Virtual destructor ensures safe deletion through base pointer
    virtual ~Shape() = default;
};

// ============================================================================
// CONCRETE DERIVED CLASSES
// ============================================================================

// Rectangle implements Shape
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

    void displayName() const override {
        std::cout << "Rectangle";
    }
};

// Circle implements Shape
class Circle : public Shape {
private:
    double radius;

public:
    explicit Circle(double givenRadius) : radius(givenRadius) {}

    double area() const override {
        constexpr double PI = 3.141592653589793;
        return PI * radius * radius;
    }

    void displayName() const override {
        std::cout << "Circle";
    }
};

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    // Vector of unique pointers to abstract base class Shape
    std::vector<std::unique_ptr<Shape>> shapes;

    // Populate vector with different concrete derived objects
    shapes.push_back(std::make_unique<Rectangle>(5.0, 3.0));
    shapes.push_back(std::make_unique<Circle>(2.0));

    // Polymorphic iteration: each call invokes the appropriate derived override
    for (const auto& shape : shapes) {
        shape->displayName();
        std::cout << " Area: " << shape->area() << '\n';
    }

    return 0;
}

// ============================================================================
// EXPECTED OUTPUT:
// Rectangle Area: 15
// Circle Area: 12.5664
// ============================================================================
