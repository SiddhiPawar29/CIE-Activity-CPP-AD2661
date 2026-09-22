// ============================================================================
// Program 06: Relational Operator Overloading
// Unit III: Polymorphism — Operator Overloading
// 
// Description:
// Demonstrates overloading the relational greater-than (>) operator for a
// user-defined 'Distance' class. Overloading relational operators allows
// objects to be compared directly in conditional statements (e.g. if (a > b)).
// ============================================================================

#include <iostream>

// ============================================================================
// CLASS DEFINITION
// ============================================================================
class Distance {
private:
    int meters; // Distance measurement in meters

public:
    // Explicit constructor to prevent unintended implicit conversion from int
    explicit Distance(int value) : meters(value) {}

    // Overload '>' relational operator
    // Compares internal distance values and returns boolean result
    bool operator>(const Distance& other) const {
        return meters > other.meters;
    }

    // Display formatted distance
    void display() const {
        std::cout << meters << " meters\n";
    }
};

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    Distance first(120);
    Distance second(90);

    std::cout << "First distance: ";
    first.display();

    std::cout << "Second distance: ";
    second.display();

    // Use overloaded '>' operator in conditional evaluation
    if (first > second) {
        std::cout << "First distance is greater\n";
    } else {
        std::cout << "Second distance is greater or equal\n";
    }

    return 0;
}

// ============================================================================
// EXPECTED OUTPUT:
// First distance: 120 meters
// Second distance: 90 meters
// First distance is greater
// ============================================================================
