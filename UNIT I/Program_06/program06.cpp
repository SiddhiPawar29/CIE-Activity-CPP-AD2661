// ============================================================================
// Program 06: Constructor and Destructor
// Unit I: Object-Oriented Programming Fundamentals
//
// Scenario:
// Demonstrate automatic object initialization and cleanup using constructors
// and destructors.
//
// Concepts Covered:
// - Constructor (Demo()):
//     * Special member function having the same name as the class.
//     * Invoked automatically when an object of the class is instantiated.
//     * Has no return type (not even void).
// - Destructor (~Demo()):
//     * Special member function prefixed with a tilde (~).
//     * Invoked automatically when the object goes out of scope or is deleted.
//     * Used for resource deallocation and cleanup.
// ============================================================================

#include <iostream>

using namespace std;

// ============================================================================
// CLASS DEFINITION: Demo
// ============================================================================
class Demo {
public:
    // Default Constructor: called automatically when an object is instantiated
    Demo() {
        cout << "Constructor called" << endl;
    }

    // Destructor: called automatically when an object goes out of scope
    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    // Instantiation triggers constructor: Demo()
    Demo d;

    // When main returns, 'd' goes out of scope, automatically invoking ~Demo()
    return 0;
}

// ============================================================================
// EXPECTED OUTPUT:
// Constructor called
// Destructor called
// ============================================================================
// VIVA QUESTIONS & ANSWERS:
// Q1: What is a constructor?
// A1: A constructor is a special member function with the same name as the class
//     that initializes an object upon creation.
//
// Q2: When is a destructor called?
// A2: A destructor is automatically invoked when an object's lifetime ends
//     (goes out of scope or delete is called on a pointer).
//
// Q3: Why is it useful?
// A3: It automates resource management (RAII), preventing initialization errors
//     and preventing memory/resource leaks upon destruction.
// ============================================================================
