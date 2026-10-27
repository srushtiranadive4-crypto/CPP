#include <iostream>
using namespace std;

template <class T1, class T2>
void showData(T1 a, T2 b) {
    cout << "a = " << a << ", b = " << b << endl;
}

int main() {
    showData(10, 20.5);   // Call 1: T1 becomes int, T2 becomes double
    showData('A', "Hello"); // Call 2: T1 becomes char, T2 becomes const char*
    return 0;
}
