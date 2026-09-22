/**
 * ============================================================================
 * Program 08: Constructor and Destructor Order
 * Student Name : siddhi ganesh pawar
 * PRN          : AD2661
 * Class/Div    : Sy-F
 * Course       : Object Oriented Programming (OOP)
 * ============================================================================
 * Description:
 * Illustrates the execution order of constructors and destructors in an
 * inheritance hierarchy:
 * - Construction Order: Base class constructor executes FIRST, followed by
 *   the derived class constructor.
 * - Destruction Order: Destructors execute in the EXACT REVERSE order — Derived
 *   class destructor executes first, followed by the base class destructor.
 * ============================================================================
 */

#include <iostream>

// Base Class
class Base {
public:
    Base() {
        std::cout << "[1] Base constructor called.\n";
    }

    ~Base() {
        std::cout << "[4] Base destructor called.\n";
    }
};

// Derived Class
class Derived : public Base {
public:
    Derived() {
        std::cout << "[2] Derived constructor called.\n";
    }

    ~Derived() {
        std::cout << "[3] Derived destructor called.\n";
    }
};

int main() {
    std::cout << "--- Creating Derived Object ---\n";
    {
        // Creating an object with local scope to observe constructor and destructor
        Derived object;
        std::cout << "--- Object is in scope and active ---\n";
    } // 'object' goes out of scope here; destructors are automatically invoked

    std::cout << "--- Object destroyed and exited scope ---\n";
    return 0;
}
