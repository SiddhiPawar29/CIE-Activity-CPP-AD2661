/**
 * ============================================================================
 * Program 16: Mini-Project - Employee Payroll System
 * Student Name : siddhi ganesh pawar
 * PRN          : AD2661
 * Class/Div    : Sy-F
 * Course       : Object Oriented Programming (OOP)
 * ============================================================================
 * Description:
 * A payroll management mini-project demonstrating an Abstract Base Class,
 * Pure Virtual Functions, and Polymorphism.
 * - Abstract Base Class: Employee (pure virtual calculateSalary() = 0)
 * - Derived Class 1: PermanentEmployee (Fixed basic salary + extra allowance)
 * - Derived Class 2: ContractEmployee (Hourly wage * hours worked)
 * - Polymorphic Function: displayPaySlip(const Employee&) processes any employee
 *   type generically using dynamic binding.
 * ============================================================================
 */

#include <iostream>
#include <string>
#include <utility>

// Abstract Base Class: Employee
class Employee {
protected:
    int employeeId;
    std::string name;

public:
    // Base constructor
    Employee(int id, std::string employeeName)
        : employeeId(id), name(std::move(employeeName)) {}

    // Pure Virtual Function: Mandates salary calculation implementation in subclasses
    virtual double calculateSalary() const = 0;

    // Common non-virtual function to display identity info
    void displayBasicDetails() const {
        std::cout << "Employee ID   : " << employeeId << '\n';
        std::cout << "Employee Name : " << name << '\n';
    }

    // Virtual destructor ensuring safe polymorphic deletion
    virtual ~Employee() = default;
};

// Concrete Derived Class 1: Permanent Full-Time Employee
class PermanentEmployee : public Employee {
private:
    double basicSalary;
    double allowance;

public:
    PermanentEmployee(int id, std::string employeeName, double basic, double extra)
        : Employee(id, std::move(employeeName)), basicSalary(basic), allowance(extra) {}

    // Concrete implementation of pure virtual function
    double calculateSalary() const override {
        return basicSalary + allowance;
    }
};

// Concrete Derived Class 2: Contract/Hourly Employee
class ContractEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    ContractEmployee(int id, std::string employeeName, double rate, int hours)
        : Employee(id, std::move(employeeName)), hourlyRate(rate), hoursWorked(hours) {}

    // Concrete implementation of pure virtual function
    double calculateSalary() const override {
        return hourlyRate * hoursWorked;
    }
};

// Generic polymorphic function accepting any object derived from Employee
void displayPaySlip(const Employee& employee) {
    employee.displayBasicDetails();
    std::cout << "Computed Net Salary: Rs. " << employee.calculateSalary() << "\n\n";
}

int main() {
    std::cout << "==========================================\n";
    std::cout << "         EMPLOYEE PAYROLL SYSTEM          \n";
    std::cout << "==========================================\n\n";

    // Instantiating different categories of employees
    PermanentEmployee permanentEmployee(101, "Asha", 40000.0, 8000.0);
    ContractEmployee contractEmployee(102, "Vikas", 500.0, 80);

    // Generating pay slips through the unified polymorphic interface
    std::cout << "[ PAYSLIP: PERMANENT STAFF ]\n";
    displayPaySlip(permanentEmployee);

    std::cout << "[ PAYSLIP: CONTRACTUAL STAFF ]\n";
    displayPaySlip(contractEmployee);

    std::cout << "==========================================\n";
    return 0;
}
