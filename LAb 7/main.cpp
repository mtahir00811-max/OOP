#include <iostream>
using namespace std;

class Testing {
private:
    int a;
    int b;

public:
    friend void display(Testing& obj, int x, int y);
};
void display(Testing& obj, int x, int y) {
    obj.a = x;
    obj.b = y;
    cout << "Value of a: " << obj.a << endl;
    cout << "Value of b: " << obj.b << endl;
}

int main() {
    Testing t;
    display(t, 10, 20);
    return 0;
}
