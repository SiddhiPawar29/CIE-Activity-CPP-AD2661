/**
 * ============================================================================
 * Program 03: Public versus Private Inheritance
 * Student Name : siddhi ganesh pawar
 * PRN          : AD2661
 * Class/Div    : Sy-F
 * Course       : Object Oriented Programming (OOP)
 * ============================================================================
 * Description:
 * Demonstrates the contrast between Public and Private inheritance modes.
 * - In Public Inheritance: Public members of the base class remain public in
 *   the derived class and can be invoked directly by external callers.
 * - In Private Inheritance: Public members of the base class become private in
 *   the derived class, so they cannot be called directly outside the class,
 *   but can still be used internally via derived member functions.
 * ============================================================================
 */

#include <iostream>

// Base Class with a public method
class Base {
public:
    void show() const {
        std::cout << "Base public function called.\n";
    }
};

// Public Inheritance: show() stays public in PublicDerived
class PublicDerived : public Base {
    // Inherits Base::show() as public
};

// Private Inheritance: show() becomes private in PrivateDerived
class PrivateDerived : private Base {
public:
    // Wrapper function to expose the inherited private Base method safely
    void callBaseShow() const {
        show(); // Accessible internally within member function
    }
};

int main() {
    std::cout << "--- Public Inheritance ---\n";
    PublicDerived publicObject;
    publicObject.show(); // Valid: show() is public

    std::cout << "\n--- Private Inheritance ---\n";
    PrivateDerived privateObject;
    privateObject.callBaseShow(); // Valid: calls wrapper function

    // Note: The following line would cause a compile error if uncommented:
    // privateObject.show(); // Error: 'Base::show()' is inaccessible due to private inheritance

    return 0;
}
