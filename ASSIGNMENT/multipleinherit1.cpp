// Program 1
// C++ program to illustrate multiple inheritance

#include <iostream>
using namespace std;

// First base class
class Vehicle {
public:
    Vehicle() {
        cout << "This is vehicle\n";
    }
};

// Second base class
class FourWheeler {
public:
    FourWheeler() {
        cout << "This is a 4 wheeler\n";
    }
};

// Subclass derived from two base classes
class Car : public Vehicle, public FourWheeler {
public:
    Car() {
        cout << "This is a 4 wheeler vehicle\n";
    }
};

// main function
int main() {
    // Creating object of subclass will invoke the constructor of base classes
    Car obj;
    return 0;
}
