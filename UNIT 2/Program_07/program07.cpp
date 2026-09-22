/**
 * ============================================================================
 * Program 07: Resolving Multiple-Inheritance Ambiguity
 * Student Name : siddhi ganesh pawar
 * PRN          : AD2661
 * Class/Div    : Sy-F
 * Course       : Object Oriented Programming (OOP)
 * ============================================================================
 * Description:
 * Demonstrates how to resolve ambiguity in Multiple Inheritance.
 * - When two base classes define a member function with the exact same name
 *   ('display()'), the compiler cannot decide which function to call on a
 *   derived object directly.
 * - Solution: The Scope Resolution Operator (::) is explicitly used to specify
 *   the intended base class version.
 * ============================================================================
 */

#include <iostream>

// Base Class 1
class Academic {
public:
    void display() const {
        std::cout << "Displaying Academic details.\n";
    }
};

// Base Class 2
class Sports {
public:
    void display() const {
        std::cout << "Displaying Sports details.\n";
    }
};

// Derived Class inheriting both Base Classes
class Student : public Academic, public Sports {
public:
    // Resolving ambiguity inside a member function using scope resolution
    void displayAll() const {
        std::cout << "--- Calling inside derived class method ---\n";
        Academic::display(); // Explicitly calls Academic's display()
        Sports::display();   // Explicitly calls Sports' display()
    }
};

int main() {
    Student student;

    std::cout << "--- Ambiguity Resolution via Object ---\n";
    // Calling specific base versions directly using scope resolution on object
    student.Academic::display();
    student.Sports::display();

    std::cout << '\n';
    student.displayAll();

    return 0;
}
