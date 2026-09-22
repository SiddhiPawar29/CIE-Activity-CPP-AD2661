/**
 * ============================================================================
 * Program 06: Multiple Inheritance
 * Student Name : siddhi ganesh pawar
 * PRN          : AD2661
 * Class/Div    : Sy-F
 * Course       : Object Oriented Programming (OOP)
 * ============================================================================
 * Description:
 * Demonstrates Multiple Inheritance where a derived class inherits directly
 * from more than one base class.
 * - Base Class 1: Academic (handles academic performance)
 * - Base Class 2: Sports (handles sports performance)
 * - Derived Class: Student (combines both score aspects to calculate total)
 * ============================================================================
 */

#include <iostream>

// First Base Class: Academic
class Academic {
protected:
    int academicMarks;

public:
    explicit Academic(int marks) : academicMarks(marks) {}

    void showAcademic() const {
        std::cout << "Academic Marks: " << academicMarks << '\n';
    }
};

// Second Base Class: Sports
class Sports {
protected:
    int sportsMarks;

public:
    explicit Sports(int marks) : sportsMarks(marks) {}

    void showSports() const {
        std::cout << "Sports Marks: " << sportsMarks << '\n';
    }
};

// Derived Class: Multiple inheritance from Academic and Sports
class Student : public Academic, public Sports {
public:
    // Constructor delegates initialization to both base classes
    Student(int academic, int sports)
        : Academic(academic), Sports(sports) {}

    // Method combining data members from both parent classes
    void showTotal() const {
        std::cout << "Total Combined Marks: " << (academicMarks + sportsMarks) << '\n';
    }
};

int main() {
    // Instantiating Student with academic and sports marks
    Student student(80, 15);

    std::cout << "--- Student Assessment Details ---\n";
    student.showAcademic();  // From Academic base
    student.showSports();    // From Sports base
    student.showTotal();     // Calculated in Student derived

    return 0;
}
