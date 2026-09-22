// ============================================================================
// Program 16: Employee Payroll Mini-Project
// Unit III: Polymorphism — Mini-Project Application
// 
// Description:
// Demonstrates a comprehensive payroll management system using inheritance
// and runtime polymorphism. An abstract base class 'Employee' defines common
// attributes (ID, name) and a pure virtual method 'calculateSalary()'.
// Derived classes 'PermanentEmployee' and 'ContractEmployee' implement
// distinct salary formulas. A polymorphic 'printPaySlip()' prints payslips
// for any employee type.
// ============================================================================

#include <iostream>
#include <string>
#include <utility>

// ============================================================================
// ABSTRACT BASE CLASS: Employee
// ============================================================================
class Employee {
protected:
    int employeeId;    // Unique identifier for the employee
    std::string name;  // Name of the employee

public:
    // Constructor initializing base employee details
    Employee(int id, std::string employeeName)
        : employeeId(id), name(std::move(employeeName)) {}

    // Pure virtual method: must be implemented by concrete employee types
    virtual double calculateSalary() const = 0;

    // Display common employee information
    void displayBasicDetails() const {
        std::cout << "Employee ID: " << employeeId << '\n';
        std::cout << "Name: " << name << '\n';
    }

    // Virtual destructor for polymorphic destruction
    virtual ~Employee() = default;
};

// ============================================================================
// CONCRETE DERIVED CLASS: PermanentEmployee
// ============================================================================
class PermanentEmployee : public Employee {
private:
    double basicSalary; // Monthly base pay
    double allowance;   // Additional allowances (HRA, DA, etc.)

public:
    PermanentEmployee(int id, std::string employeeName, double basic, double extra)
        : Employee(id, std::move(employeeName)), basicSalary(basic), allowance(extra) {}

    // Salary = Basic Pay + Allowance
    double calculateSalary() const override {
        return basicSalary + allowance;
    }
};

// ============================================================================
// CONCRETE DERIVED CLASS: ContractEmployee
// ============================================================================
class ContractEmployee : public Employee {
private:
    double hourlyRate; // Rate per hour worked
    int hoursWorked;   // Total hours clocked

public:
    ContractEmployee(int id, std::string employeeName, double rate, int hours)
        : Employee(id, std::move(employeeName)), hourlyRate(rate), hoursWorked(hours) {}

    // Salary = Hourly Rate * Hours Worked
    double calculateSalary() const override {
        return hourlyRate * hoursWorked;
    }
};

// ============================================================================
// POLYMORPHIC PAYSLIP GENERATOR
// ============================================================================
// Generates payslip for any Employee type via base-class reference
void printPaySlip(const Employee& employee) {
    employee.displayBasicDetails();
    std::cout << "Salary: Rs. " << employee.calculateSalary() << "\n\n";
}

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    // Create a Permanent Employee
    PermanentEmployee permanentEmployee(101, "Asha", 40000.0, 8000.0);

    // Create a Contract Employee
    ContractEmployee contractEmployee(102, "Vikas", 500.0, 80);

    // Print payslips polymorphically
    printPaySlip(permanentEmployee);
    printPaySlip(contractEmployee);

    return 0;
}

// ============================================================================
// EXPECTED OUTPUT:
// Employee ID: 101
// Name: Asha
// Salary: Rs. 48000
// 
// Employee ID: 102
// Name: Vikas
// Salary: Rs. 40000
// ============================================================================
