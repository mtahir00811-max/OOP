#include <iostream>
using namespace std;

class MyClass {
private:
    int data;
public:
    MyClass(int val) : data(val) {}
    friend MyClass addObjects(MyClass& obj1, MyClass& obj2);
    void display() {
        cout << "Data: " << data << endl;
    }
};
MyClass addObjects(MyClass& obj1, MyClass& obj2) {
    MyClass result(0);
    result.data = obj1.data + obj2.data;
    return result;
}

int main() {
    MyClass obj1(25);
    MyClass obj2(35);

    cout << "=== Object Values ===" << endl;
    cout << "Object 1 -> ";
    obj1.display();
    cout << "Object 2 -> ";
    obj2.display();
    MyClass obj3 = addObjects(obj1, obj2);

    cout << "\n=== After Addition ===" << endl;
    cout << "Result  -> ";
    obj3.display();

    return 0;
}

