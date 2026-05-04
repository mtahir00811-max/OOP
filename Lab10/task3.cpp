#include <iostream>
using namespace std;

// Base class
class Menu {
public:
    // virtual function
    virtual string soupOfTheDay() {
        return "Sour Soup";
    }
};

// Derived class 1
class WeekDayMenu : public Menu {
public:
    string soupOfTheDay() override {
        return "Corn Soup";
    }
};

// Derived class 2
class SpecialMenu : public Menu {
public:
    string soupOfTheDay() override {
        return "Sweet Soup";
    }
};

int main() {
    Menu* ptr;

    WeekDayMenu w1;
    SpecialMenu s1;

    // Polymorphism in action
    ptr = &w1;
    cout << "Week Day Menu: " << ptr->soupOfTheDay() << endl;

    ptr = &s1;
    cout << "Special Menu: " << ptr->soupOfTheDay() << endl;

    return 0;
}