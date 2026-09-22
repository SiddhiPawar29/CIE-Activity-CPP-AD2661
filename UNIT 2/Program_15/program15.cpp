/**
 * ============================================================================
 * Program 15: Mini-Project - Vehicle Rental System
 * Student Name : siddhi ganesh pawar
 * PRN          : AD2661
 * Class/Div    : Sy-F
 * Course       : Object Oriented Programming (OOP)
 * ============================================================================
 * Description:
 * A comprehensive mini-project demonstrating inheritance, encapsulation, and
 * runtime polymorphism for an automated vehicle rental billing system.
 * - Base Class: Vehicle (encapsulates registration and base rate, provides
 *   virtual rent calculation and display functions).
 * - Derived Class 1: Car (adds doors count, standard rent calculation).
 * - Derived Class 2: Bike (adds engine cc, overrides rent with 10% discount).
 * ============================================================================
 */

#include <iostream>
#include <string>
#include <utility>

// Base Class: Vehicle
class Vehicle {
protected:
    std::string registrationNumber;
    double ratePerDay;

public:
    // Base constructor
    Vehicle(std::string registration, double rate)
        : registrationNumber(std::move(registration)), ratePerDay(rate) {}

    // Virtual function for rent calculation (can be overridden by derived vehicles)
    virtual double calculateRent(int days) const {
        return ratePerDay * days;
    }

    // Virtual function for displaying vehicle specifications
    virtual void display() const {
        std::cout << "Registration Number : " << registrationNumber << '\n';
        std::cout << "Rate per Day        : Rs. " << ratePerDay << '\n';
    }

    // Virtual destructor ensuring safe polymorphic deletion
    virtual ~Vehicle() = default;
};

// Derived Class 1: Car
class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    // Parameterized constructor invoking Vehicle base constructor
    Car(std::string registration, double rate, int doors)
        : Vehicle(std::move(registration), rate), numberOfDoors(doors) {}

    // Overriding display to append car-specific door count
    void display() const override {
        Vehicle::display();
        std::cout << "Number of Doors     : " << numberOfDoors << '\n';
    }
};

// Derived Class 2: Bike
class Bike : public Vehicle {
private:
    int engineCapacity;

public:
    // Parameterized constructor invoking Vehicle base constructor
    Bike(std::string registration, double rate, int capacity)
        : Vehicle(std::move(registration), rate), engineCapacity(capacity) {}

    // Overriding calculateRent to apply a special 10% discount on bike rentals
    double calculateRent(int days) const override {
        return ratePerDay * days * 0.9;
    }

    // Overriding display to append bike engine displacement
    void display() const override {
        Vehicle::display();
        std::cout << "Engine Displacement : " << engineCapacity << " cc\n";
    }
};

int main() {
    std::cout << "==========================================\n";
    std::cout << "      VEHICLE RENTAL BILLING SYSTEM       \n";
    std::cout << "==========================================\n\n";

    // Creating rental vehicles
    Car car("MH12AB1234", 2000.0, 5);
    Bike bike("MH12CD5678", 800.0, 150);

    // Rental period in days
    const int rentalDays = 3;

    // Processing Car Rental
    std::cout << "[ CAR RENTAL DETAILS ]\n";
    car.display();
    std::cout << "Total Rent for " << rentalDays << " days: Rs. " << car.calculateRent(rentalDays) << "\n\n";

    // Processing Bike Rental
    std::cout << "[ BIKE RENTAL DETAILS (10% Discount Applied) ]\n";
    bike.display();
    std::cout << "Total Rent for " << rentalDays << " days: Rs. " << bike.calculateRent(rentalDays) << '\n';
    std::cout << "==========================================\n";

    return 0;
}
