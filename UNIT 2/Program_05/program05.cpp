/**
 * ============================================================================
 * Program 05: Hierarchical Inheritance
 * Student Name : siddhi ganesh pawar
 * PRN          : AD2661
 * Class/Div    : Sy-F
 * Course       : Object Oriented Programming (OOP)
 * ============================================================================
 * Description:
 * Demonstrates Hierarchical Inheritance where multiple derived classes inherit
 * from a single common base class.
 * - Base Class: Vehicle (shared start() function and registration number)
 * - Derived Class 1: Car (adds openBoot() behavior)
 * - Derived Class 2: Bike (adds helmetReminder() behavior)
 * ============================================================================
 */

#include <iostream>
#include <string>
#include <utility>

// Common Base Class
class Vehicle {
protected:
    std::string registrationNumber;

public:
    explicit Vehicle(std::string registration)
        : registrationNumber(std::move(registration)) {}

    // Common functionality shared by all vehicles
    void start() const {
        std::cout << "Vehicle " << registrationNumber << " started\n";
    }
};

// Derived Class 1: Car inherits from Vehicle
class Car : public Vehicle {
public:
    explicit Car(std::string registration) : Vehicle(std::move(registration)) {}

    // Special behavior specific to Car
    void openBoot() const {
        std::cout << "Car boot opened\n";
    }
};

// Derived Class 2: Bike inherits from Vehicle
class Bike : public Vehicle {
public:
    explicit Bike(std::string registration) : Vehicle(std::move(registration)) {}

    // Special behavior specific to Bike
    void helmetReminder() const {
        std::cout << "Please wear a helmet while riding\n";
    }
};

int main() {
    // Creating instances of sibling derived classes
    Car car("MH12AB1234");
    Bike bike("MH12CD5678");

    std::cout << "--- Testing Car Object ---\n";
    car.start();      // Inherited from Vehicle
    car.openBoot();   // Specific to Car

    std::cout << "\n--- Testing Bike Object ---\n";
    bike.start();           // Inherited from Vehicle
    bike.helmetReminder();  // Specific to Bike

    return 0;
}
