// ============================================================================
// Program 07: Static Data Members
// Unit I: Object-Oriented Programming Fundamentals
//
// Scenario:
// Count how many objects of a class are created using a static member variable.
//
// Concepts Covered:
// - Static data member (static int count):
//     * Belongs to the class rather than any individual object instance.
//     * Shared by all instances of the class (single memory location).
// - Scope resolution operator (::):
//     * Used for class-level definition and initialization outside the class.
//     * Allows accessing static members directly via class name: ClassName::member.
// ============================================================================

#include <iostream>

using namespace std;

// ============================================================================
// CLASS DEFINITION: Student
// ============================================================================
class Student {
public:
    // Static member declaration: shared across all instances
    static int count;

    // Constructor increments the shared count whenever an object is created
    Student() {
        count++;
    }
};

// ============================================================================
// STATIC MEMBER DEFINITION & INITIALIZATION
// ============================================================================
// Must be defined outside the class in global scope
int Student::count = 0;

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    // Instantiating three Student objects
    Student s1, s2, s3;

    // Access static member via class name using scope resolution operator
    cout << Student::count << endl;

    return 0; // Successful execution
}

// ============================================================================
// EXPECTED OUTPUT:
// 3
// ============================================================================
// VIVA QUESTIONS & ANSWERS:
// Q1: What is a static member?
// A1: A static member is a class-level variable or method shared by all instances
//     of the class, existing independently of any single object.
//
// Q2: Why is it shared?
// A2: It is stored in global/static storage, so all objects refer to the exact same
//     memory location rather than maintaining separate copies.
//
// Q3: How to access it?
// A3: Using the class name followed by the scope resolution operator:
//     ClassName::staticMember (e.g., Student::count), or through an object.
// ============================================================================
