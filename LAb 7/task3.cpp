#include <iostream>
using namespace std;
class containedClass;
class containerClass {
private:
    int a;
    int b;

public:
    friend class containedClass;

void putter() {
        cout << "Enter value for a: ";
        cin >> a;
        cout << "Enter value for b: ";
        cin >> b;
    }
    void getter() {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }
};
class containedClass {
public:
    void setter(containerClass& obj) {
        cout << "\n--- Accessing containerClass private data from containedClass ---" << endl;
        cout << "Value of a (accessed via containedClass): " << obj.a << endl;
        cout << "Value of b (accessed via containedClass): " << obj.b << endl;
    }
};

int main() {
    containerClass c1;
    containedClass c2;
    cout << "=== Using putter() to input values ===" << endl;
    c1.putter();
    cout << "\n=== Using getter() to display values ===" << endl;
    c1.getter();
    cout << "\n=== Using containedClass setter() ===" << endl;
    c2.setter(c1);
    return 0;
}
