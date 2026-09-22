// ============================================================================
// Program 04: Prefix and Postfix Increment Operator Overloading
// Unit III: Polymorphism — Operator Overloading
// 
// Description:
// Demonstrates overloading both prefix (++object) and postfix (object++)
// increment operators for a user-defined 'Counter' class.
// In C++, the postfix overload is distinguished from the prefix overload
// by accepting an unused dummy 'int' parameter in its signature.
// ============================================================================

#include <iostream>

// ============================================================================
// CLASS DEFINITION
// ============================================================================
class Counter {
private:
    int value; // Internal counter value

public:
    // Constructor with default value 0
    explicit Counter(int initialValue = 0) : value(initialValue) {}

    // ------------------------------------------------------------------------
    // Prefix Increment: ++counter
    // Increments value immediately and returns reference to current object
    // ------------------------------------------------------------------------
    Counter& operator++() {
        ++value;
        return *this;
    }

    // ------------------------------------------------------------------------
    // Postfix Increment: counter++
    // Dummy 'int' parameter distinguishes postfix from prefix
    // Saves old state, increments value, and returns old state by value
    // ------------------------------------------------------------------------
    Counter operator++(int) {
        Counter old = *this;
        ++value;
        return old;
    }

    // Display the counter's current value
    void display() const {
        std::cout << value << '\n';
    }
};

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    // Initialize counter to 5
    Counter counter(5);

    // Demonstration of Prefix Increment (++counter)
    std::cout << "After prefix increment: ";
    ++counter;
    counter.display();

    // Demonstration of Postfix Increment (counter++)
    std::cout << "Value returned by postfix increment: ";
    Counter oldValue = counter++;
    oldValue.display();

    // Verification of Counter state after postfix increment
    std::cout << "Counter after postfix increment: ";
    counter.display();

    return 0;
}

// ============================================================================
// EXPECTED OUTPUT:
// After prefix increment: 6
// Value returned by postfix increment: 6
// Counter after postfix increment: 7
// ============================================================================
