// ============================================================================
// Program 15: Payment Processing System
// Unit III: Polymorphism — Real-World Interface Application
// 
// Description:
// Demonstrates a real-world payment processing system using an abstract
// 'Payment' interface. Concrete payment channels (Card, UPI, Net Banking)
// implement the 'pay()' method. A unified processing function accepts a base
// reference, allowing new payment methods to be added without modifying the
// processing logic (Open/Closed Principle).
// ============================================================================

#include <iostream>
#include <string>

// ============================================================================
// ABSTRACT PAYMENT INTERFACE
// ============================================================================
class Payment {
public:
    // Pure virtual method to execute payment
    virtual void pay(double amount) const = 0;

    // Virtual destructor for safe polymorphic cleanup
    virtual ~Payment() = default;
};

// ============================================================================
// CONCRETE PAYMENT IMPLEMENTATIONS
// ============================================================================

// Credit / Debit Card Payment
class CardPayment : public Payment {
public:
    void pay(double amount) const override {
        std::cout << "Paid Rs. " << amount << " using card\n";
    }
};

// UPI (Unified Payments Interface) Payment
class UpiPayment : public Payment {
public:
    void pay(double amount) const override {
        std::cout << "Paid Rs. " << amount << " using UPI\n";
    }
};

// Net Banking Payment
class NetBankingPayment : public Payment {
public:
    void pay(double amount) const override {
        std::cout << "Paid Rs. " << amount << " using net banking\n";
    }
};

// ============================================================================
// UNIFIED PAYMENT PROCESSOR
// ============================================================================
// Polymorphic function: accepts any Payment channel by reference
void processPayment(const Payment& payment, double amount) {
    payment.pay(amount);
}

// ============================================================================
// MAIN DRIVER FUNCTION
// ============================================================================
int main() {
    CardPayment card;
    UpiPayment upi;
    NetBankingPayment netBanking;

    // Process different payment types via the unified polymorphic interface
    processPayment(card, 1250.0);
    processPayment(upi, 750.0);
    processPayment(netBanking, 500.0);

    return 0;
}

// ============================================================================
// EXPECTED OUTPUT:
// Paid Rs. 1250 using card
// Paid Rs. 750 using UPI
// Paid Rs. 500 using net banking
// ============================================================================
