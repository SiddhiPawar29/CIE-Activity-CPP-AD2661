/**
 * ============================================================================
 * Program 13: Friend Class
 * Student Name : siddhi ganesh pawar
 * PRN          : AD2661
 * Class/Div    : Sy-F
 * Course       : Object Oriented Programming (OOP)
 * ============================================================================
 * Description:
 * Demonstrates the concept of a Friend Class in C++.
 * - Normally, private members cannot be accessed by external classes.
 * - When a class declares another class as 'friend' (friend class Auditor;),
 *   all member functions of the friend class gain direct access to its private
 *   and protected members.
 * ============================================================================
 */

#include <iostream>

// Forward declaration of class Auditor (optional since declared inside friend statement)
class Auditor;

// Class Account: encapsulates balance as private
class Account {
private:
    double balance;

    // Declaring Auditor as a friend class to allow privileged access to 'balance'
    friend class Auditor;

public:
    // Explicit constructor to initialize balance
    explicit Account(double initialBalance) : balance(initialBalance) {}
};

// Friend Class Auditor: Inspects private details of Account
class Auditor {
public:
    // Member function accessing private data member 'balance' directly
    void inspect(const Account& account) const {
        std::cout << "Auditor Audit Report:\n";
        std::cout << "Verified Account Balance: $" << account.balance << '\n';
    }
};

int main() {
    std::cout << "--- Friend Class Access Demonstration ---\n";

    // Creating an Account with private balance $5000.0
    Account account(5000.0);

    // Creating Auditor instance to inspect the account
    Auditor auditor;
    auditor.inspect(account);

    return 0;
}
