// ============================================================================
// Program 05: Classes and Objects
// Unit I: Object-Oriented Programming Fundamentals
//
// Scenario:
// Store and display student details (name and age) using a class and object.
//
// Concepts Covered:
// - Class: A user-defined data type serving as a blueprint for objects.
// - Object: An instance of a class occupying memory at runtime.
// - Access specifiers (public): members accessible from outside the class.
// - Data members (state): name and age.
// - Member functions (behavior): show().
// - Member access operator (.): accesses members on an object instance.
// ============================================================================

#include <iostream>
#include <string>

using namespace std;

// ============================================================================
// CLASS DEFINITION: Student
// ============================================================================
class Student {
public:
    // Data members
    string name;
    int age;

    // Member function to display student details
    void show() {
        cout << name << " " << age << endl;
    }
};

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    // Object instantiation
    Student s1;

    // Assigning values to public data members using dot operator
    s1.name = "Amit";
    s1.age = 20;

    // Invoking member function
    s1.show();

    return 0; // Successful execution
}

// ============================================================================
// EXPECTED OUTPUT:
// Amit 20
// ============================================================================
// VIVA QUESTIONS & ANSWERS:
// Q1: What is a class?
// A1: A class is a user-defined blueprint or template that binds data members
//     and member functions into a single logical unit.
//
// Q2: What is an object?
// A2: An object is a concrete, runtime instance of a class that holds actual values
//     and allocates memory.
//
// Q3: What is the dot operator used for?
// A3: The dot operator (.) is the direct member access operator used to access
//     public fields and methods of an object.
// ============================================================================
