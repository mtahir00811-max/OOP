#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    // Default constructor
    Counter() : value(0) {}

    // Parameterized constructor
    Counter(int v) : value(v) {}

    // Overload prefix ++
    Counter operator++() {
        ++value;
        return *this;
    }

    // Overload postfix ++
    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    // Overload prefix --
    Counter operator--() {
        --value;
        return *this;
    }

    // Overload postfix --
    Counter operator--(int) {
        Counter temp = *this;
        value--;
        return temp;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter c(5);

    cout << "Initial: ";
    c.display();

    ++c;
    cout << "After prefix ++: ";
    c.display();

    c++;
    cout << "After postfix ++: ";
    c.display();

    --c;
    cout << "After prefix --: ";
    c.display();

    c--;
    cout << "After postfix --: ";
    c.display();

    return 0;
}
