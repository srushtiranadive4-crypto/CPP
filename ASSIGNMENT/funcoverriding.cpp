#include <iostream>
using namespace std;

class Payment {
public:
    virtual void processPayment(double amount) {
        cout << "Processing a generic payment of $" << amount << endl;
    }
};

class CreditCardPayment : public Payment {
public:
    void processPayment(double amount) override {
        cout << "Processing credit card payment of $" << amount << " (charging 2% fee)" << endl;
    }
};

class CryptoPayment : public Payment {
public:
    void processPayment(double amount) override {
        cout << "Processing cryptocurrency payment of $" << amount << " (verifying on blockchain)" << endl;
    }
};

int main() {
    Payment* currentPayment = new CreditCardPayment();
    currentPayment->processPayment(150.0); // Output: Processing credit card payment...
    delete currentPayment;

    currentPayment = new CryptoPayment();
    currentPayment->processPayment(250.0); // Output: Processing cryptocurrency payment...
    delete currentPayment;

    return 0;
}
