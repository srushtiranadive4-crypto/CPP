#include <iostream>
using namespace std;

// Base Class 1
class Vehicle {
public:
    Vehicle() {
        cout << "This is Vehicle" << endl;
    }
};

// Base Class 2
class Fare {
public:
    Fare() {
        cout << "Fare of Vehicle" << endl;
    }
};

// First Subclass (Hierarchical Inheritance from Vehicle)
class Car : public Vehicle {
public:
    Car() {
        cout << "This Vehicle is Car" << endl;
    }
};

// Second Subclass (Multiple Inheritance from Vehicle and Fare)
class Bus : public Vehicle, public Fare {
public:
    Bus() {
        cout << "This vehicle is a Bus with Fare" << endl;
    }
};

// Main Function
int main() {
    // Creating an object of the subclass Bus
    // This will invoke the constructors in the order of inheritance
    Bus obj2;
    
    return 0;
}
