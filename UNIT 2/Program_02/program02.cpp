/**
 * ============================================================================
 * Program 02: Protected Member Access
 * Student Name : siddhi ganesh pawar
 * PRN          : AD2661
 * Class/Div    : Sy-F
 * Course       : Object Oriented Programming (OOP)
 * ============================================================================
 * Description:
 * Demonstrates the use of the 'protected' access specifier.
 * - 'protected' members remain hidden from outside non-member functions,
 *   but are directly accessible by derived classes.
 * - Base Class: Employee (declares protected variable 'name')
 * - Derived Class: Developer (directly accesses 'name' to print details)
 * ============================================================================
 */

#include <iostream>
#include <string>
#include <utility>

// Base Class: Employee
class Employee {
protected:
    // Protected member: inaccessible to outside world, accessible to derived classes
    std::string name;

public:
    // Parameterized constructor
    explicit Employee(std::string employeeName) : name(std::move(employeeName)) {}
};

// Derived Class: Developer inherits publicly from Employee
class Developer : public Employee {
private:
    // Specific attribute for Developer
    std::string language;

public:
    // Constructor initializes base Employee and sets local language
    Developer(std::string employeeName, std::string programmingLanguage)
        : Employee(std::move(employeeName)), language(std::move(programmingLanguage)) {}

    // Method accessing both inherited protected member 'name' and private 'language'
    void display() const {
        std::cout << "Developer Name: " << name << '\n';
        std::cout << "Primary Language: " << language << '\n';
    }
};

int main() {
    // Instantiating Developer object
    Developer developer("Neha", "C++");

    // Display details
    std::cout << "--- Developer Info ---\n";
    developer.display();

    return 0;
}
