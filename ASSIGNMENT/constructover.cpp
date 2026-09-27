#include <iostream>
using namespace std;

class construct {
public:
    float area;

    // 1. Constructor with no parameters (Default Constructor)
    construct() {
        area = 0;
    }

    // 2. Constructor with two parameters (Parameterized Constructor)
    construct(int length, int breadth) {
        area = length * breadth;
    }

    // Method to display the area
    void disp() {
        cout << area << endl;
    }
};

int main() {
    // Calls the default constructor
    construct o; 
    
    // Calls the parameterized constructor
    construct o2(10, 20); 

    // Displaying the results
    o.disp();   
    o2.disp();  

    return 0;
}
