/**
 * ============================================================================
 * Program 09: Parameterized Base Constructor
 * Student Name : siddhi ganesh pawar
 * PRN          : AD2661
 * Class/Div    : Sy-F
 * Course       : Object Oriented Programming (OOP)
 * ============================================================================
 * Description:
 * Demonstrates passing arguments from a Derived Class constructor to a
 * Parameterized Base Class constructor using a constructor initialization list.
 * - When a base class does not have a default constructor, the derived class
 *   must explicitly call the parameterized constructor of the base class.
 * ============================================================================
 */

#include <iostream>
#include <string>
#include <utility>

// Base Class: Person with parameterized constructor
class Person {
protected:
    std::string name;

public:
    // Explicit parameterized constructor
    explicit Person(std::string personName) : name(std::move(personName)) {
        std::cout << "Person base constructor initialized with name: " << name << '\n';
    }
};

// Derived Class: Student
class Student : public Person {
private:
    int rollNumber;

public:
    // Derived constructor explicitly passes 'studentName' to Person's constructor
    Student(std::string studentName, int roll)
        : Person(std::move(studentName)), rollNumber(roll) {
        std::cout << "Student derived constructor initialized with roll: " << rollNumber << '\n';
    }

    // Method to display both base and derived attributes
    void display() const {
        std::cout << "Student Name: " << name << '\n';
        std::cout << "Roll Number : " << rollNumber << '\n';
    }
};

int main() {
    std::cout << "--- Initializing Student Object ---\n";
    Student student("Kiran", 24);

    std::cout << "\n--- Displaying Student Information ---\n";
    student.display();

    return 0;
}
