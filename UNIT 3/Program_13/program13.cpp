// ============================================================================
// Program 13: Virtual Destructor
// Unit III: Polymorphism — Virtual Destructors & Safe Memory Deallocation
// 
// Description:
// Demonstrates the critical importance of declaring virtual destructors in base
// classes when deleting derived objects through a base-class pointer.
// A virtual destructor ensures that the derived class destructor executes first,
// followed by the base class destructor, preventing resource leaks and
// undefined behavior.
// ============================================================================

#include <iostream>

// ============================================================================
// BASE CLASS WITH VIRTUAL DESTRUCTOR
// ============================================================================
class Base {
public:
    // Declaring destructor virtual guarantees proper destructor chain
    virtual ~Base() {
        std::cout << "Base destructor\n";
    }
};

// ============================================================================
// DERIVED CLASS
// ============================================================================
class Derived : public Base {
public:
    // Derived destructor executes first when deleted through Base*
    ~Derived() override {
        std::cout << "Derived destructor\n";
    }
};

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    // Dynamically allocate Derived object assigned to Base pointer
    Base* pointer = new Derived();

    // Safe deletion: calls Derived::~Derived(), then Base::~Base()
    delete pointer;

    return 0;
}

// ============================================================================
// EXPECTED OUTPUT:
// Derived destructor
// Base destructor
// ============================================================================
