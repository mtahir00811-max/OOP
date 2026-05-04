#include <iostream>
using namespace std;

// Base class (given)
class father {
protected:
    int age;
public:
    father(int x) {
        age = x;
    }

    virtual void iam() {
        cout << "I am Father, my age is " << age << endl;
    }
};

// Derived class 1: son
class son : public father {
private:
    string name;
public:
    son(string n, int a) : father(a) {
        name = n;
    }

    void iam() override {
        cout << "I am Son, my name is " << name
             << " and my age is " << age << endl;
    }
};

// Derived class 2: daughter
class daughter : public father {
private:
    string name;
public:
    daughter(string n, int a) : father(a) {
        name = n;
    }

    void iam() override {
        cout << "I am Daughter, my name is " << name
             << " and my age is " << age << endl;
    }
};

int main() {
    // Create objects of all three classes
    father   f(50);
    son      s("Dawar", 25);
    daughter d("Sara", 22);

    // --- Direct object calls ---
    cout << "=== Direct Object Calls ===" << endl;
    f.iam();
    s.iam();
    d.iam();

    // --- Pointer to base class (Polymorphism) ---
    cout << "\n=== Polymorphism via Base Class Pointer ===" << endl;

    father *ptr;      

    ptr = &f;       
    ptr->iam();

    ptr = &s;       
    ptr->iam();       

    ptr = &d;        
    ptr->iam();        

    return 0;
}