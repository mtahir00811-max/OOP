#include <iostream>
using namespace std;
class ClassB;

class ClassA {
private:
    int data;

public:
    ClassA(int val) : data(val) {}
    friend void compareAndDisplay(ClassA& a, ClassB& b);
};

class ClassB {
private:
    int data;

public:
    ClassB(int val) : data(val) {}
    friend void compareAndDisplay(ClassA& a, ClassB& b);
};
void compareAndDisplay(ClassA& a, ClassB& b) {
    cout << "ClassA data: " << a.data << endl;
    cout << "ClassB data: " << b.data << endl;

    if (a.data > b.data) {
        cout << "Greater value is from ClassA: " << a.data << endl;
    } else if (b.data > a.data) {
        cout << "Greater value is from ClassB: " << b.data << endl;
    } else {
        cout << "Both values are equal: " << a.data << endl;
    }
}

int main() {
    ClassA objA(45);
    ClassB objB(78);

    compareAndDisplay(objA, objB);

    return 0;
}
