/**
 * ============================================================================
 * Program 14: Nested Class
 * Student Name : siddhi ganesh pawar
 * PRN          : AD2661
 * Class/Div    : Sy-F
 * Course       : Object Oriented Programming (OOP)
 * ============================================================================
 * Description:
 * Demonstrates a Nested Class (Inner Class) declared inside an Enclosing Class.
 * - Enclosing Class: University
 * - Nested Class: Department (scoped inside University as University::Department)
 * - Nested classes provide logical grouping and enhance encapsulation when a
 *   helper class is strongly associated with its outer class.
 * ============================================================================
 */

#include <iostream>
#include <string>
#include <utility>

// Enclosing Outer Class
class University {
public:
    // Inner Nested Class declared in public section of University
    class Department {
    private:
        std::string name;

    public:
        // Constructor for inner class
        explicit Department(std::string departmentName)
            : name(std::move(departmentName)) {}

        // Member function of inner class
        void display() const {
            std::cout << "Department Name: " << name << '\n';
        }
    };
};

int main() {
    std::cout << "--- Nested Class Demonstration ---\n";

    // Instantiating the inner class using outer class scope resolution
    University::Department department("Artificial Intelligence and Data Science");

    // Calling inner class method
    department.display();

    return 0;
}
