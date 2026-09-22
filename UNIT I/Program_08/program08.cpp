// ============================================================================
// Program 08: Inline Functions and Friend Functions
// Unit I: Object-Oriented Programming Fundamentals
//
// Scenario:
// Access private class data using an inline getter and a non-member friend function.
//
// Concepts Covered:
// - Private data member (int value): encapsulates internal state.
// - Inline member function (inline int getValue()):
//     * Suggests compiler replace function call directly with function body.
//     * Eliminates function call overhead for small, performance-critical getters.
// - Friend function (friend void show(Test t)):
//     * Non-member function granted privileged access to private/protected members.
//     * Declared inside the class with the 'friend' keyword, defined outside.
// ============================================================================

#include <iostream>

using namespace std;

// ============================================================================
// CLASS DEFINITION: Test
// ============================================================================
class Test {
private:
    int value; // Private data member encapsulated within Test

public:
    // Constructor initializing private value
    Test(int v) {
        value = v;
    }

    // Inline getter member function: expands code inline to avoid call overhead
    inline int getValue() {
        return value;
    }

    // Friend function declaration: grants non-member show() access to private members
    friend void show(Test t);
};

// ============================================================================
// FRIEND FUNCTION DEFINITION
// ============================================================================
// Defined outside the class without scope resolution; can access private 't.value'
void show(Test t) {
    cout << t.value << endl;
}

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    // Instantiate object with value 50
    Test obj(50);

    // Access via inline member function
    cout << obj.getValue() << endl;

    // Access via friend function
    show(obj);

    return 0; // Successful execution
}

// ============================================================================
// EXPECTED OUTPUT:
// 50
// 50
// ============================================================================
// VIVA QUESTIONS & ANSWERS:
// Q1: What is an inline function?
// A1: An inline function is a function whose code the compiler expands at each
//     call site to eliminate function call overhead (stack frame allocation).
//
// Q2: What is a friend function?
// A2: A friend function is an external non-member function granted special
//     access to a class's private and protected members.
//
// Q3: Why use friend functions?
// A3: They provide controlled external access to private data, useful for operator
//     overloading (like << and >>), bridging two classes, or external utility tasks.
// ============================================================================
