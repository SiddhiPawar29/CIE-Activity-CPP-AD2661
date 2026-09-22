/**
 * ============================================================================
 * Program 11: Abstract Class
 * Student Name : siddhi ganesh pawar
 * PRN          : AD2661
 * Class/Div    : Sy-F
 * Course       : Object Oriented Programming (OOP)
 * ============================================================================
 * Description:
 * Demonstrates an Abstract Base Class in C++.
 * - An abstract class contains at least one Pure Virtual Function (= 0).
 * - Direct instantiation of an abstract class is disallowed.
 * - Concrete derived classes ('Rectangle', 'Circle') must provide concrete
 *   implementations of all pure virtual functions to be instantiated.
 * ============================================================================
 */

#include <iostream>

// Abstract Base Class: Shape
class Shape {
public:
    // Pure Virtual Function: Defines interface without implementation
    virtual double area() const = 0;

    // Virtual destructor for proper memory deallocation
    virtual ~Shape() = default;
};

// Concrete Derived Class: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}

    // Overriding pure virtual function to calculate rectangle area
    double area() const override {
        return length * width;
    }
};

// Concrete Derived Class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    explicit Circle(double givenRadius) : radius(givenRadius) {}

    // Overriding pure virtual function to calculate circle area
    double area() const override {
        return 3.141592653589793 * radius * radius;
    }
};

int main() {
    std::cout << "--- Abstract Class & Polymorphism ---\n";

    Rectangle rectangle(5.0, 3.0);
    Circle circle(2.0);

    std::cout << "Rectangle Area (5 x 3) : " << rectangle.area() << '\n';
    std::cout << "Circle Area (r = 2)    : " << circle.area() << '\n';

    // Demonstrating polymorphic pointer usage
    Shape* shapePtr = &rectangle;
    std::cout << "Area via Base Pointer  : " << shapePtr->area() << '\n';

    return 0;
}
