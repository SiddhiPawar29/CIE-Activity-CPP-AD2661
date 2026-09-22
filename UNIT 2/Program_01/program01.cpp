/**
 * ============================================================================
 * Program 01: Basic Single Inheritance
 * Student Name : siddhi ganesh pawar
 * PRN          : AD2661
 * Class/Div    : Sy-F
 * Course       : Object Oriented Programming (OOP)
 * ============================================================================
 * Description:
 * Demonstrates basic Single Inheritance in C++. A derived class ('Student')
 * inherits attributes and behaviours from a single base class ('Person').
 * - Base Class: Person (contains protected member 'name' and display method)
 * - Derived Class: Student (extends Person, adds 'rollNumber')
 * ============================================================================
 */

#include <iostream>
#include <string>
#include <utility>

// Base Class: Represents a generic Person
class Person {
protected:
    // Protected member: accessible within this class and derived classes
    std::string name;

public:
    // Constructor to initialize base class attribute
    explicit Person(std::string personName) : name(std::move(personName)) {}

    // Method to display person's name
    void displayName() const {
        std::cout << "Name: " << name << '\n';
    }
};

// Derived Class: Single inheritance from Person
class Student : public Person {
private:
    // Private attribute specific to Student
    int rollNumber;

public:
    // Constructor initializes the base class Person and derived attribute rollNumber
    Student(std::string studentName, int roll)
        : Person(std::move(studentName)), rollNumber(roll) {}

    // Method to display student's complete details
    void displayStudent() const {
        // Calling base class method
        displayName();
        std::cout << "Roll Number: " << rollNumber << '\n';
    }
};

int main() {
    // Creating an object of derived class Student
    Student student("Amit", 101);

    // Display student information
    std::cout << "--- Student Details ---\n";
    student.displayStudent();

    return 0;
}
