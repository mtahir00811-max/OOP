#include <iostream>
using namespace std;

// Abstract Base Class
class shape {
protected:
    float dim1;   
    float dim2;   
public:
    virtual void getDimensions() = 0;   
    virtual void area()         = 0;   

    virtual ~shape() {}                
};

// Derived class 1: Rectangle
class rectangle : public shape {
public:
    void getDimensions() override {
        cout << "\n--- Rectangle ---" << endl;
        cout << "Enter Length : ";
        cin  >> dim1;
        cout << "Enter Breadth: ";
        cin  >> dim2;
    }

    void area() override {
        float result = dim1 * dim2;
        cout << "Area of Rectangle = " << dim1
             << " x " << dim2
             << " = " << result << endl;
    }
};

// Derived class 2: Triangle
class triangle : public shape {
public:
    void getDimensions() override {
        cout << "\n--- Triangle ---" << endl;
        cout << "Enter Base  : ";
        cin  >> dim1;
        cout << "Enter Height: ";
        cin  >> dim2;
    }

    void area() override {
        float result = 0.5 * dim1 * dim2;
        cout << "Area of Triangle = 0.5 x " << dim1
             << " x " << dim2
             << " = " << result << endl;
    }
};

int main() {
    rectangle r;
    triangle  t;

    // Base class pointers (polymorphism)
    shape *ptr;

    // --- Rectangle ---
    ptr = &r;
    ptr->getDimensions();   
    ptr->area();            

    // --- Triangle ---
    ptr = &t;
    ptr->getDimensions(); 
    ptr->area();            

    return 0;
}