#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    // Constructor to initialize objects value
    Distance(int f, int i) {
        this->feet = f;
        this->inch = i;
    }

    // Overloading (-) operator to perform decrement operation of Distance object
    void operator -() {
        feet--;
        inch--;
        cout << "\n Feet & Inches (Decrement): " << feet << "  " << inch;
    }
};

int main() {
    // Create object in the main() function
    Distance d1(8, 11);

    // Perform operations using overloaded operators
    -d1; 

    cout << endl;
    return 0;
}
