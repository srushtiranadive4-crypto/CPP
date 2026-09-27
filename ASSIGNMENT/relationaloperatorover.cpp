#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    // Parameterized constructor using initializer list
    MyClass(int val) : value(val) {}

    // 1. Equality operator
    bool operator ==(const MyClass &other) const {
        return value == other.value;
    }

    // 2. Inequality operator (uses negation of ==)
    bool operator !=(const MyClass &other) const {
        return !(*this == other);
    }

    // 3. Less than operator
    bool operator <(const MyClass &other) const {
        return value < other.value;
    }

    // 4. Greater than operator
    bool operator >(const MyClass &other) const {
        return value > other.value;
    }

    // 5. Less than or equal to operator (uses negation of >)
    bool operator <=(const MyClass &other) const {
        return !(*this > other);
    }

    // 6. Greater than or equal to operator (uses negation of <)
    bool operator >=(const MyClass &other) const {
        return !(*this < other);
    }
};

int main() {
    // Initializing test objects to matching values (20 and 20)
    MyClass obj1(20);
    MyClass obj2(20);

    // 1. Testing == operator
    if (obj1 == obj2) {
        cout << "obj 1 is equal to obj 2" << endl;
    } else {
        cout << "obj 1 is not equal to obj 2" << endl;
    }

    // 2. Testing < operator
    if (obj1 < obj2) {
        cout << "obj 1 is less than obj 2" << endl;
    } else {
        cout << "obj 1 is not less than obj 2" << endl;
    }

    // 3. Testing != operator
    if (obj1 != obj2) {
        cout << "obj 1 is not equal to obj 2" << endl;
    } else {
        cout << "obj 1 is equal to obj 2" << endl;
    }

    // 4. Testing > operator
    if (obj1 > obj2) {
        cout << "object 1 is greater than obj 2" << endl;
    } else {
        cout << "obj 1 is not greater than obj 2" << endl;
    }

    // 5. Testing <= operator
    if (obj1 <= obj2) {
        cout << "obj 1 is less than or equal to obj 2" << endl;
    } else {
        cout << "obj 1 is not less than or equal to obj 2" << endl;
    }

    // 6. Testing >= operator
    if (obj1 >= obj2) {
        cout << "obj 1 is greater than or equal to obj 2" << endl;
    } else {
        cout << "obj 1 is not greater than or equal to obj 2" << endl;
    }

    return 0;
}
