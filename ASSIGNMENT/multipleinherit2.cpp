// Program 2
// C++ program to illustrate constructor execution order

#include <iostream>
using namespace std;

// Base class : Person
class Person {
public:
    Person() {
        cout << "Person's constructor called\n";
    }
};

// Derived Class 1 : Faculty
class Faculty : public Person {
public:
    Faculty() {
        cout << "Faculty's constructor called\n";
    }
};

// Derived Class 2 : Student (Completing the hierarchical structure)
class Student : public Person {
public:
    Student() {
        cout << "Student's constructor called\n";
    }
};

int main() {
    cout << "--- Creating Faculty Object ---" << endl;
    Faculty f_obj;
    
    return 0;
}
