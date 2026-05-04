#include <iostream>
using namespace std;

class Student {
private:
    int marks;
    float gpa;

public:
    // --- DEFAULT CONSTRUCTOR ---
    Student() {
        marks = 0;
        gpa = 0.0;
    }

    // --- OVERLOADED CONSTRUCTOR ---
    Student(int m, float g) {
        marks = m;
        gpa = g;
    }

    // --- INSERT FUNCTION ---
    void insert() {
        cout << "Enter marks: ";
        cin >> marks;
        cout << "Enter GPA: ";
        cin >> gpa;
    }

    // --- OPERATOR -- OVERLOADING ---
    void operator--() {
        marks--;
        gpa--;
    }

    // --- DISPLAY FUNCTION ---
    void display() {
        cout << "Marks: " << marks << endl;
        cout << "GPA:   " << gpa   << endl;
    }
};

// --- MAIN ---
int main() {

    cout << "=============================" << endl;
    cout << "  Using Default Constructor  " << endl;
    cout << "=============================" << endl;
    Student s1;              // calls default constructor
    s1.insert();             // user enters values
    cout << "\nBefore --:" << endl;
    s1.display();
    --s1;                    // decrement
    cout << "\nAfter --:" << endl;
    s1.display();

    cout << "\n=============================" << endl;
    cout << " Using Overloaded Constructor " << endl;
    cout << "=============================" << endl;
    Student s2(90, 3.8);     // calls overloaded constructor
    cout << "\nBefore --:" << endl;
    s2.display();
    --s2;                    // decrement
    cout << "\nAfter --:" << endl;
    s2.display();

    return 0;
} 
