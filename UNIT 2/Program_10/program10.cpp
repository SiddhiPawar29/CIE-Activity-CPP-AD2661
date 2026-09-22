/**
 * ============================================================================
 * Program 10: Function Overriding
 * Student Name : siddhi ganesh pawar
 * PRN          : AD2661
 * Class/Div    : Sy-F
 * Course       : Object Oriented Programming (OOP)
 * ============================================================================
 * Description:
 * Demonstrates Runtime Polymorphism using Virtual Functions and Function Overriding.
 * - Base class 'Vehicle' provides a 'virtual void move()' method.
 * - Derived classes 'Car' and 'Boat' override the 'move()' method to provide
 *   their specialized behavior.
 * - A virtual destructor ensures correct clean-up in polymorphic hierarchies.
 * ============================================================================
 */

#include <iostream>

// Base Class: Vehicle
class Vehicle {
public:
    // Virtual function enables dynamic binding at runtime
    virtual void move() const {
        std::cout << "Vehicle is moving in a generic manner.\n";
    }

    // Virtual destructor guarantees safe polymorphic destruction
    virtual ~Vehicle() = default;
};

// Derived Class 1: Car overrides move()
class Car : public Vehicle {
public:
    void move() const override {
        std::cout << "Car is driving smoothly on highways and roads.\n";
    }
};

// Derived Class 2: Boat overrides move()
class Boat : public Vehicle {
public:
    void move() const override {
        std::cout << "Boat is navigating through rivers and sea waters.\n";
    }
};

int main() {
    std::cout << "--- Function Overriding Demonstration ---\n";
    Car car;
    Boat boat;

    // Direct calls invoke overridden implementations
    car.move();
    boat.move();

    std::cout << "\n--- Polymorphic Calls through Base Pointers ---\n";
    Vehicle* vehiclePtr1 = &car;
    Vehicle* vehiclePtr2 = &boat;

    vehiclePtr1->move(); // Dispatches to Car::move() dynamically
    vehiclePtr2->move(); // Dispatches to Boat::move() dynamically

    return 0;
}
