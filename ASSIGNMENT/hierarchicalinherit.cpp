#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle" << endl;
    }
};

// First subclass derived from Vehicle
class Car : public Vehicle {
public:
    Car() {
        cout << "This is a Car" << endl;
    }
};

// Second subclass derived from Vehicle
class Bus : public Vehicle {
public:
    Bus() {
        cout << "This is a Bus" << endl;
    }
};

int main() {
    // Creating objects of subclasses invokes the base class constructor first
    cout << "Creating Car object:" << endl;
    Car obj1;
    
    cout << "\nCreating Bus object:" << endl;
    Bus obj2;
    
    return 0;
}
