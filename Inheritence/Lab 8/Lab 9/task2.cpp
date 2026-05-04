#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void speak() {        // virtual keyword added
        cout << "Animal speaks!" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void speak() {
        cout << "Dog says: Woof!" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void speak() {
        cout << "Cat says: Meow!" << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    // Pointer to base class
    Animal *ptr;

    cout << "=== Pointer to Base Class (With Virtual) ===" << endl;

    // Pointing to Dog object
    ptr = &d;
    ptr->speak();  

    // Pointing to Cat object
    ptr = &c;
    ptr->speak();   

    cout << "\n=== Calling Derived Functions Directly ===" << endl;

    d.speak();  
    c.speak();   

    return 0;
}