// ============================================================================
// Program 01: Basic Data Types
// Unit I: C++ Basics & Fundamental Concepts
//
// Scenario:
// Store and display student roll number, grade, and fee amount.
//
// Concepts Covered:
// - Header inclusion (#include <iostream>) for standard I/O streams
// - Namespace declaration (using namespace std)
// - Fundamental data types:
//     * int: stores whole numbers / integers (roll)
//     * char: stores a single character literal (grade)
//     * float: stores single-precision decimal / floating-point numbers (fee)
// - Stream insertion operator (<<) with cout for formatted output
// - Stream manipulator (endl) to flush buffer and output newline
// ============================================================================

#include <iostream>

using namespace std;

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    // Variable Declarations & Initializations
    int roll = 101;            // Integer variable storing roll number
    char grade = 'A';          // Character variable storing letter grade
    float fee = 12500.50f;     // Floating-point variable storing fee amount

    // Displaying values to standard output
    cout << "Roll No: " << roll << endl;
    cout << "Grade: " << grade << endl;
    cout << "Fee: " << fee << endl;

    return 0; // Indicates successful program termination
}

// ============================================================================
// EXPECTED OUTPUT:
// Roll No: 101
// Grade: A
// Fee: 12500.5
// ============================================================================
// VIVA QUESTIONS & ANSWERS:
// Q1: What is a basic data type?
// A1: Fundamental data types built into C++ (int, char, float, double, bool)
//     representing primitive values directly supported by the hardware.
//
// Q2: Why is char used for grade?
// A2: Because a grade is typically represented by a single character (e.g. 'A')
//     requiring exactly 1 byte of memory.
//
// Q3: What is the use of cout?
// A3: 'cout' is the standard character output stream object defined in <iostream>
//     used in conjunction with the insertion operator (<<) to display data.
// ============================================================================
