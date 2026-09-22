// ============================================================================
// Program 04: User-Defined Functions
// Unit I: C++ Basics & Modular Programming
//
// Scenario:
// Create a reusable addition function with prototyping and parameter passing.
//
// Concepts Covered:
// - Function declaration / prototyping: tells the compiler about the function
//   signature (return type, name, parameter types) before its definition.
// - Function call: transfer of control from caller (main) to callee (add).
// - Parameter passing by value: copies of arguments 'a' and 'b' are passed
//   to formal parameters 'x' and 'y'.
// - Return statement: sends the calculated result back to the calling context.
// ============================================================================

#include <iostream>

using namespace std;

// ============================================================================
// FUNCTION PROTOTYPE / DECLARATION
// ============================================================================
int add(int, int);

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    int a = 10, b = 20;

    // Function call: add(a, b) invokes the user-defined add function
    cout << "Sum = " << add(a, b) << endl;

    return 0; // Successful execution
}

// ============================================================================
// FUNCTION DEFINITION
// ============================================================================
// Accepts two integer parameters and returns their arithmetic sum
int add(int x, int y) {
    return x + y;
}

// ============================================================================
// EXPECTED OUTPUT:
// Sum = 30
// ============================================================================
// VIVA QUESTIONS & ANSWERS:
// Q1: Why use functions?
// A1: Functions promote modularity, readability, reusability, and easier debugging
//     by dividing large programs into smaller, organized blocks of code.
//
// Q2: What is a prototype?
// A2: A function prototype is a forward declaration that specifies the function's
//     name, return type, and parameter types before main() encounters its call.
//
// Q3: What is return value?
// A3: The value sent back to the calling function by the 'return' statement upon
//     completion of the function's task.
// ============================================================================
