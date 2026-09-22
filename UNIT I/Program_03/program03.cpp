// ============================================================================
// Program 03: Loops and Arrays
// Unit I: C++ Basics & Iterative Control Structures
//
// Scenario:
// Store and print the marks of five students using a fixed-size array and loop.
//
// Concepts Covered:
// - One-dimensional array declaration and initialization: int marks[5]
// - Zero-based indexing: array indices range from 0 to size - 1 (0 to 4)
// - Iteration using a 'for' loop (initialization; condition; increment)
// - Array subscript operator marks[i] to access each element
// ============================================================================

#include <iostream>

using namespace std;

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    // Array declaration and initialization storing 5 student marks
    int marks[5] = {78, 82, 91, 67, 88};

    // Iterate through the array using a for loop
    for (int i = 0; i < 5; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;

    return 0; // Successful termination
}

// ============================================================================
// EXPECTED OUTPUT:
// 78 82 91 67 88 
// ============================================================================
// VIVA QUESTIONS & ANSWERS:
// Q1: What is an array?
// A1: An array is a contiguous block of memory holding a fixed number of
//     elements of the same data type.
//
// Q2: Why start index from 0?
// A2: In C++, an index represents an offset from the beginning memory address
//     of the array (base pointer + 0 * element_size).
//
// Q3: Why use loop here?
// A3: A loop eliminates repetitive code by systematically iterating over
//     all elements of the array using an index counter variable.
// ============================================================================
