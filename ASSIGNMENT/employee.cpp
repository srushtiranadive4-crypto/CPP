#include <iostream>
#include <string>

using namespace std;

// First Class: Base class to handle personal details
class EmployeeDetails {
protected:
    string name;
    string mobileNo;

public:
    void getDetails() {
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Mobile No: ";
        cin >> mobileNo;
    }

    void displayDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Mobile No: " << mobileNo << endl;
    }
};

// Second Class: Inherits from EmployeeDetails to calculate salary
class EmployeeSalary : public EmployeeDetails {
protected:
    double basic;
    double hra;
    double ta;
    double da;
    double grossSalary;

public:
    void getSalaryDetails() {
        // Call the base class function to get name and mobile number
        getDetails();
        
        cout << "Enter Basic Salary: ";
        cin >> basic;
        
        // Calculate percentages
        hra = 0.40 * basic; // 40%
        ta = 0.20 * basic;  // 20%
        da = 0.30 * basic;  // 30%
        
        // Formula: Gross Salary = HRA + TA + DA + Basic
        grossSalary = hra + ta + da + basic;
    }

    void displaySalaryDetails() {
        // Display the base details first
        displayDetails();
        
        // Display calculations
        cout << "Basic Salary: " << basic << endl;
        cout << "HRA (40%): " << hra << endl;
        cout << "TA (20%): " << ta << endl;
        cout << "DA (30%): " << da << endl;
        cout << "-----------------------" << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main() {
    // Create an object of the derived class
    EmployeeSalary emp;
    
    // Accept inputs and display the final breakdown
    emp.getSalaryDetails();
    emp.displaySalaryDetails();
    
    return 0;
}
