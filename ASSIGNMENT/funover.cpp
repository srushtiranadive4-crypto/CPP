#include <iostream>
using namespace std;

// Function prototypes as declared in your notebook
int area(int);               // Square
int area(int, int);          // Rectangle
float area(float);           // Circle
float area(float, float);    // Triangle

int main() {
    // Variable declarations exactly from the notebook
    int s, l, b;
    float r, bs, ht;

    // 1. Square
    cout << "Enter side of a square: ";
    cin >> s;
    cout << "Area of Square: " << area(s) << endl << endl;

    // 2. Rectangle
    cout << "Enter length and breath of rectangle: ";
    cin >> l >> b;
    cout << "Area of Rectangle: " << area(l, b) << endl << endl;

    // 3. Circle
    cout << "Enter radius of a circle: ";
    cin >> r;
    cout << "Area of Circle: " << area(r) << endl << endl;

    // 4. Triangle
    cout << "Enter base and height of a triangle: ";
    cin >> bs >> ht;
    cout << "Area of Triangle: " << area(bs, ht) << endl << endl;

    return 0;
}

// --- Function Definitions ---

// Area of a Square (int)
int area(int side) {
    return side * side;
}

// Area of a Rectangle (int, int)
int area(int length, int breadth) {
    return length * breadth;
}

// Area of a Circle (float)
float area(float radius) {
    return 3.14159f * radius * radius;
}

// Area of a Triangle (float, float)
float area(float base, float height) {
    return 0.5f * base * height;
}
