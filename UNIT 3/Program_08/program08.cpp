// ============================================================================
// Program 08: Base Pointer Without a Virtual Function
// Unit III: Polymorphism — Early Binding / Static Binding
// 
// Description:
// Demonstrates compile-time (early/static) binding in C++. When a member function
// in the base class is NOT declared 'virtual', invoking it through a base-class
// pointer pointing to a derived object always executes the base version.
// The call is resolved based strictly on the pointer's static type.
// ============================================================================

#include <iostream>

// ============================================================================
// CLASS DEFINITIONS
// ============================================================================

// Base Class with non-virtual display()
class Base {
public:
    void display() const {
        std::cout << "Base display function\n";
    }
};

// Derived Class redefining display()
class Derived : public Base {
public:
    void display() const {
        std::cout << "Derived display function\n";
    }
};

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    Derived derivedObject;

    // Base pointer pointing to a Derived instance
    Base* basePointer = &derivedObject;

    // Static binding: compiler binds this call to Base::display()
    // because display() is not virtual in Base.
    basePointer->display();

    return 0;
}

// ============================================================================
// EXPECTED OUTPUT:
// Base display function
// ============================================================================
