#include <iostream>
using namespace std;

template <class T> 
class Calculator { 
    T num1, num2; 
public:
    
    Calculator(T a, T b) : num1(a), num2(b) {} 

    void displayResult() { 
        cout << "Addition: " << num1 + num2 << endl; 
        cout << "Subtraction: " << num1 - num2 << endl; 
        cout << "Multiplication: " << num1 * num2 << endl; 
        
        // Added safety check: Prevents runtime crashes on division by zero
        if (num2 == 0) {
            cout << "Division: Error! Division by zero." << endl;
        } else {
            cout << "Division: " << num1 / num2 << endl; 
        }
    }
};

int main() {
    Calculator<int> calc1(10, 5); 
    cout << "For Integers:\n"; 
    calc1.displayResult();

    Calculator<float> calc2(5.5f, 2.2f); 
    cout << "\nFor Floats: \n"; 
    calc2.displayResult();

    return 0;
}
