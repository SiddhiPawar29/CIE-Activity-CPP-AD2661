/**
 * ============================================================================
 * Program 12: Virtual Base Class and Diamond Inheritance
 * Student Name : siddhi ganesh pawar
 * PRN          : AD2661
 * Class/Div    : Sy-F
 * Course       : Object Oriented Programming (OOP)
 * ============================================================================
 * Description:
 * Demonstrates the use of Virtual Base Classes to resolve the "Diamond Problem"
 * in multiple inheritance.
 * - Hierarchy:
 *          Person (Base)
 *          /          \
 *    Student          Employee  (both virtually inherit Person)
 *          \          /
 *       TeachingAssistant       (inherits Student and Employee)
 * - Without 'virtual', TeachingAssistant would receive two copies of Person,
 *   causing duplication and compiler ambiguity.
 * - With 'virtual', only ONE single instance of Person is shared.
 * ============================================================================
 */

#include <iostream>
#include <string>
#include <utility>

// Common Root Base Class
class Person {
protected:
    std::string name;

public:
    explicit Person(std::string personName) : name(std::move(personName)) {}

    void displayName() const {
        std::cout << "Person Name: " << name << '\n';
    }
};

// Intermediate Class 1: Virtual inheritance from Person
class Student : virtual public Person {
public:
    Student() : Person("Unknown") {}
};

// Intermediate Class 2: Virtual inheritance from Person
class Employee : virtual public Person {
public:
    Employee() : Person("Unknown") {}
};

// Derived Class: Inherits from both Student and Employee
class TeachingAssistant : public Student, public Employee {
public:
    // With virtual base class, the most derived class directly calls Person constructor
    explicit TeachingAssistant(std::string assistantName)
        : Person(std::move(assistantName)), Student(), Employee() {}
};

int main() {
    std::cout << "--- Diamond Problem Resolution via Virtual Base Class ---\n";

    TeachingAssistant assistant("Riya");

    // Unambiguous call: only one single copy of Person exists in TeachingAssistant
    assistant.displayName();

    return 0;
}
