// ============================================================================
// Program 07: Friend / Non-Member Operator Overloading
// Unit III: Polymorphism — Operator Overloading with Friend Functions
// 
// Description:
// Demonstrates overloading an operator using a non-member friend function.
// A member operator requires the left-hand operand to be an instance of the
// class. When the left operand is a primitive type (such as '10 + complexNumber'),
// a non-member friend function must be used to access private members.
// ============================================================================

#include <iostream>

// ============================================================================
// CLASS DEFINITION
// ============================================================================
class Complex {
private:
    int real;
    int imaginary;

public:
    // Default and parameterized constructor
    Complex(int realPart = 0, int imaginaryPart = 0)
        : real(realPart), imaginary(imaginaryPart) {}

    // Friend function declaration allowing access to private members
    // Allows expressions of form: (int + Complex)
    friend Complex operator+(int value, const Complex& number);

    // Formatted display
    void display() const {
        std::cout << real;
        if (imaginary >= 0) {
            std::cout << " + ";
        } else {
            std::cout << " - ";
        }
        std::cout << (imaginary >= 0 ? imaginary : -imaginary) << "i\n";
    }
};

// ============================================================================
// FRIEND FUNCTION IMPLEMENTATION
// ============================================================================
// Non-member operator+ handles integer on left and Complex on right
Complex operator+(int value, const Complex& number) {
    return Complex(value + number.real, number.imaginary);
}

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    Complex number(2, 3);

    // Invokes friend operator+(int, const Complex&)
    Complex result = 10 + number;

    std::cout << "Result: ";
    result.display();

    return 0;
}

// ============================================================================
// EXPECTED OUTPUT:
// Result: 12 + 3i
// ============================================================================
