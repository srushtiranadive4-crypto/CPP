#include <iostream>
#include <stdio.h>

using namespace std;

// Base class 1
class student {
    int roll;
    char name[25]; // Using char array as written in your notebook

public:
    void getdata() {
        cout << "\n------------------------------------";
        cout << "\n Enter Roll No : ";
        cin >> roll;
        cout << "\n Enter Student Name : ";
        cin >> name;
    }

    void putdata() {
        cout << "\n------------------------------------";
        cout << "\n\t student details \t";
        cout << "\n------------------------------------";
        cout << "\n Roll No : " << roll;
        cout << "\n Student Name : " << name << endl;
    }
};

// Base class 2 (Derived from student)
class studentExam : public student {
public:
    int sub1, sub2, sub3, sub4, sub5, sub6;
    float per;

public:
    void accept_data() {
        getdata(); // Calls base class input
        
        cout << "\n Enter marks for Subject 1 : ";
        cin >> sub1;
        cout << " Enter marks for Subject 2 : ";
        cin >> sub2;
        cout << " Enter marks for Subject 3 : ";
        cin >> sub3;
        cout << " Enter marks for Subject 4 : ";
        cin >> sub4;
        cout << " Enter marks for Subject 5 : ";
        cin >> sub5;
        cout << " Enter marks for Subject 6 : ";
        cin >> sub6;
        
        // Calculating percentage for 6 subjects (assuming max 100 marks each)
        per = (sub1 + sub2 + sub3 + sub4 + sub5 + sub6) / 6.0;
    }

    void show_exam_data() {
        putdata(); // Calls base class output
        cout << " Marks Obtained: " << endl;
        cout << "   Subject 1: " << sub1 << "\t Subject 2: " << sub2 << endl;
        cout << "   Subject 3: " << sub3 << "\t Subject 4: " << sub4 << endl;
        cout << "   Subject 5: " << sub5 << "\t Subject 6: " << sub6 << endl;
    }
};

// Derived Class 3 (To complete the Multilevel Hierarchy: class C)
class result : public studentExam {
public:
    void display_result() {
        accept_data();      // Collects all student and marks information
        show_exam_data();   // Displays student details and marks
        
        cout << "------------------------------------";
        cout << "\n Percentage Score : " << per << "%" << endl;
        cout << "------------------------------------" << endl;
    }
};

int main() {
    result student_obj;
    student_obj.display_result();
    return 0;
}
