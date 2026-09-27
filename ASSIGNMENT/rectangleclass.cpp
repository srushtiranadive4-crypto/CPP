#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Parameterized Constructor to initialize length and width
    Rectangle(double l, double w) {
        length = l;
        width = w;
        std::cout << "Constructor Called: Object initialized." << std::endl;
    }

    // Destructor
    ~Rectangle() {
        std::cout << "Destructor Called: Object destroyed." << std::endl;
    }

    // Member function to calculate area
    double calculateArea() {
        return length * width;
    }

    // Member function to calculate perimeter
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    // Creating an object of the Rectangle class
    double l, w;
    std::cout << "Enter length of the rectangle: ";
    std::cin >> l;
    std::cout << "Enter width of the rectangle: ";
    std::cin >> w;

    // Object creation triggers the constructor
    Rectangle rect(l, w);

    // Displaying calculated values using member functions
    std::cout << "Area of Rectangle: " << rect.calculateArea() << std::endl;
    std::cout << "Perimeter of Rectangle: " << rect.calculatePerimeter() << std::endl;

    return 0;
} // Object 'rect' goes out of scope here, triggering the destructor
