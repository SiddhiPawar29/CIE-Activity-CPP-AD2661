// ============================================================================
// Program 02: Conditional Statements (if-else)
// Unit I: C++ Basics & Control Structures
//
// Scenario:
// Check whether a student has passed or failed based on marks.
//
// Concepts Covered:
// - Decision making / Selection control structure (if-else)
// - Relational operators (>=)
// - Boolean condition evaluation:
//     * If marks >= 40 evaluates to true, the 'if' block executes.
//     * Otherwise, the 'else' block executes.
// ============================================================================

#include <iostream>

using namespace std;

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    // Variable Declaration
    int marks = 45; // Student score

    // Selection Control: check passing condition (passing threshold: 40)
    if (marks >= 40) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0; // Successful execution
}

// ============================================================================
// EXPECTED OUTPUT:
// Pass
// ============================================================================
// VIVA QUESTIONS & ANSWERS:
// Q1: What is selection?
// A1: Selection (conditional control flow) allows a program to choose
//     different execution paths based on evaluated conditions.
//
// Q2: What happens if marks are 35?
// A2: The condition (35 >= 40) evaluates to false, so the 'else' branch executes
//     and prints "Fail".
//
// Q3: What does else do?
// A3: 'else' provides the alternative fallback block of code to run when the
//     preceding 'if' condition is false.
// ============================================================================
