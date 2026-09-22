// ============================================================================
// Program 09: Base Pointer With a Virtual Function
// Unit III: Polymorphism — Run-Time Polymorphism / Dynamic Binding
// 
// Description:
// Demonstrates run-time polymorphism (late/dynamic binding) using a virtual
// function accessed through a base-class pointer. Declaring 'sound()' as
// 'virtual' in the Animal base class instructs the compiler to use dynamic
// dispatch (via vtable), calling the override corresponding to the actual
// runtime object (Dog or Cat).
// ============================================================================

#include <iostream>

// ============================================================================
// BASE CLASS
// ============================================================================
class Animal {
public:
    // Virtual function enables dynamic dispatch in derived classes
    virtual void sound() const {
        std::cout << "Animal makes a sound\n";
    }

    // Virtual destructor ensures proper cleanup of derived objects
    virtual ~Animal() = default;
};

// ============================================================================
// DERIVED CLASSES
// ============================================================================

// Dog overrides sound()
class Dog : public Animal {
public:
    void sound() const override {
        std::cout << "Dog barks\n";
    }
};

// Cat overrides sound()
class Cat : public Animal {
public:
    void sound() const override {
        std::cout << "Cat meows\n";
    }
};

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    Dog dog;
    Cat cat;

    // Point base pointer to Dog object -> calls Dog::sound() dynamically
    Animal* animal = &dog;
    animal->sound();

    // Reassign base pointer to Cat object -> calls Cat::sound() dynamically
    animal = &cat;
    animal->sound();

    return 0;
}

// ============================================================================
// EXPECTED OUTPUT:
// Dog barks
// Cat meows
// ============================================================================
