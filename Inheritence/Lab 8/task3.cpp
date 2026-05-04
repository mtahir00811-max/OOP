#include<iostream>
using namespace std;

// Base Class
class Student {
private:
    string name;
    string gender;
    int age;

public:

    void getStudentInfo() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Gender: ";
        cin >> gender;

        cout << "Enter Age: ";
        cin >> age;
    }

    // Display function
    void putStudentInfo() {
        cout << "\n--- Student Information ---" << endl;
        cout << "Name:  " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class
class Result : public Student {
private:
    int totalMarks;
    float percentage;
    char grade;

public:
    // Input function
    void getResultInfo() {
        cout << "Enter Total Marks: ";
        cin >> totalMarks;

        cout << "Enter Percentage: ";
        cin >> percentage;

        cout << "Enter Grade: ";
        cin >> grade;
    }

    // Display function
    void putResultInfo() {
        cout << "\n--- Result Information ---" << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << percentage << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Result r;

    // Base class functions
    r.getStudentInfo();
    r.putStudentInfo();

    // Derived class functions
    r.getResultInfo();
    r.putResultInfo();

    return 0;
}