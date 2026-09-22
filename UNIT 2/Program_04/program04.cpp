/**
 * ============================================================================
 * Program 04: Multilevel Inheritance
 * Student Name : siddhi ganesh pawar
 * PRN          : AD2661
 * Class/Div    : Sy-F
 * Course       : Object Oriented Programming (OOP)
 * ============================================================================
 * Description:
 * Demonstrates Multilevel Inheritance where a class is derived from a class
 * that is already derived from another base class.
 * - Hierarchy: Person (Grandparent) -> Employee (Parent) -> Manager (Child)
 * - The most derived class 'Manager' inherits members from both ancestor classes.
 * ============================================================================
 */

#include <iostream>
#include <string>
#include <utility>

// Level 1 (Base Class): Person
class Person {
protected:
    std::string name;

public:
    explicit Person(std::string personName) : name(std::move(personName)) {}

    void showPerson() const {
        std::cout << "Name: " << name << '\n';
    }
};

// Level 2 (Intermediate Derived Class): Employee derives from Person
class Employee : public Person {
protected:
    int employeeId;

public:
    Employee(std::string employeeName, int id)
        : Person(std::move(employeeName)), employeeId(id) {}

    void showEmployee() const {
        std::cout << "Employee ID: " << employeeId << '\n';
    }
};

// Level 3 (Final Derived Class): Manager derives from Employee
class Manager : public Employee {
private:
    int teamSize;

public:
    Manager(std::string managerName, int id, int size)
        : Employee(std::move(managerName), id), teamSize(size) {}

    // Method aggregating details from all levels of the inheritance chain
    void showManager() const {
        showPerson();    // Inherited from Person
        showEmployee();  // Inherited from Employee
        std::cout << "Team Size: " << teamSize << '\n';
    }
};

int main() {
    // Creating an instance of the bottom-most derived class
    Manager manager("Ravi", 501, 8);

    std::cout << "--- Manager Details (Multilevel Inheritance) ---\n";
    manager.showManager();

    return 0;
}
