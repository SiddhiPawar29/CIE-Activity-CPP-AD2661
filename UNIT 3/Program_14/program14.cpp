// ============================================================================
// Program 14: Object Slicing Demonstration
// Unit III: Polymorphism — Object Slicing vs. Polymorphic References
// 
// Description:
// Demonstrates object slicing in C++. When a derived class object is passed
// by value to a function expecting a base-class type, the derived-specific
// members and the vtable pointer are "sliced off", causing the base method to be
// called. In contrast, passing by reference or pointer preserves the full derived
// object and maintains run-time polymorphism.
// ============================================================================

#include <iostream>

// ============================================================================
// BASE CLASS
// ============================================================================
class Base {
public:
    virtual void display() const {
        std::cout << "Base object\n";
    }

    virtual ~Base() = default;
};

// ============================================================================
// DERIVED CLASS
// ============================================================================
class Derived : public Base {
public:
    void display() const override {
        std::cout << "Derived object\n";
    }
};

// ============================================================================
// DEMONSTRATION FUNCTIONS
// ============================================================================

// Slicing occurs: derived object is copied into a Base instance
void displayByValue(Base object) {
    object.display(); // Invokes Base::display() due to slicing
}

// Polymorphism preserved: derived object passed by reference
void displayByReference(const Base& object) {
    object.display(); // Invokes Derived::display() dynamically
}

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    Derived derived;

    // Case 1: Pass by value causes slicing
    std::cout << "Passing by value: ";
    displayByValue(derived);

    // Case 2: Pass by reference preserves dynamic dispatch
    std::cout << "Passing by reference: ";
    displayByReference(derived);

    return 0;
}

// ============================================================================
// EXPECTED OUTPUT:
// Passing by value: Base object
// Passing by reference: Derived object
// ============================================================================
