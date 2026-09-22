// ============================================================================
// Program 05: Binary + Operator Overloading for Complex Numbers
// Unit III: Polymorphism — Operator Overloading
// 
// Description:
// Demonstrates overloading the binary addition (+) operator as a member
// function to add two complex numbers directly using algebraic syntax:
// 'first + second'. The function computes real and imaginary parts separately.
// ============================================================================

#include <iostream>

// ============================================================================
// CLASS DEFINITION
// ============================================================================
class Complex {
private:
    int real;      // Real part
    int imaginary; // Imaginary part

public:
    // Default and parameterized constructor
    Complex(int realPart = 0, int imaginaryPart = 0)
        : real(realPart), imaginary(imaginaryPart) {}

    // Overload binary '+' operator as member function
    // Adds corresponding real and imaginary components of two Complex numbers
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Formatted display of the complex number (e.g., a + bi or a - bi)
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
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    Complex first(2, 3);
    Complex second(4, 5);

    // Using overloaded '+' operator: first.operator+(second)
    Complex sum = first + second;

    std::cout << "First complex number: ";
    first.display();

    std::cout << "Second complex number: ";
    second.display();

    std::cout << "Sum: ";
    sum.display();

    return 0;
}

// ============================================================================
// EXPECTED OUTPUT:
// First complex number: 2 + 3i
// Second complex number: 4 + 5i
// Sum: 6 + 8i
// ============================================================================
