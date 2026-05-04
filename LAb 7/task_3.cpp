#include <iostream>
using namespace std;
class containedClass;

class containerClass {
private:
    int a;
    int b;

public:
    friend class containedClass;

    // putter() - takes input from user
    void putter() {
        cout << "Enter value for a: ";
        cin >> a;
        cout << "Enter value for b: ";
        cin >> b;
    }

    // getter() - displays private data
    void getter() {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }
};

class containedClass {
public:
    // setter() - accesses and displays containerClass private data
    void setter(containerClass& obj) {
        cout << "\n--- Accessing containerClass private data from containedClass ---" << endl;
        cout << "Value of a (accessed via containedClass): " << obj.a << endl;
        cout << "Value of b (accessed via containedClass): " << obj.b << endl;
    }
};

int main() {
    containerClass c1;
    containedClass c2;

    // Using putter() to input values
    cout << "=== Using putter() to input values ===" << endl;
    c1.putter();

    // Using getter() to display values
    cout << "\n=== Using getter() to display values ===" << endl;
    c1.getter();

    // Using containedClass setter() to access private data
    cout << "\n=== Using containedClass setter() ===" << endl;
    c2.setter(c1);

    return 0;
}
