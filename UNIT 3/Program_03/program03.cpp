// ============================================================================
// Program 03: Unary Minus Operator Overloading
// Unit III: Polymorphism — Operator Overloading
// 
// Description:
// Demonstrates overloading the unary minus (-) operator for a user-defined
// class 'Number'. Overloading unary operators allows class instances to
// behave naturally like primitive data types when prefixed with an operator.
// ============================================================================

#include <iostream>

// ============================================================================
// CLASS DEFINITION
// ============================================================================
class Number {
private:
    int value; // Stores the numeric value

public:
    // Parameterized constructor (explicit prevents implicit conversions)
    explicit Number(int givenValue) : value(givenValue) {}

    // Overload unary '-' operator
    // Returns a new Number object containing the negated value
    Number operator-() const {
        return Number(-value);
    }

    // Member function to display the stored value
    void display() const {
        std::cout << value << '\n';
    }
};

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    // Create an object with an initial value of 25
    Number first(25);

    // Apply overloaded unary '-' operator to negate the value
    Number second = -first;

    std::cout << "Original value: ";
    first.display();

    std::cout << "Negated value: ";
    second.display();

    return 0;
}

// ============================================================================
// EXPECTED OUTPUT:
// Original value: 25
// Negated value: -25
// ============================================================================
