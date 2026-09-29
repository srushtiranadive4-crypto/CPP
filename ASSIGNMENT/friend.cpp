#include <iostream>
using namespace std;

class Box {
private:
    int secretCode = 123;

    // Declaring the friend function inside the class
    friend void printSecret(Box b);
};

// Defining the friend function outside the class
void printSecret(Box b) {
    cout << "The secret code is: " << b.secretCode << endl;
}

int main() {
    Box myBox;
    printSecret(myBox);
    
    return 0;
}
